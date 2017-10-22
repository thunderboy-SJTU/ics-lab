#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "y86asm.h"

line_t *y86bin_listhead = NULL;   /* the head of y86 binary code line list*/
line_t *y86bin_listtail = NULL;   /* the tail of y86 binary code line list*/
int y86asm_lineno = 0; /* the current line number of y86 assemble code */

#define err_print(_s, _a ...) do { \
	if (y86asm_lineno < 0) \
	fprintf(stderr, "[--]: "_s"\n", ## _a); \
	else \
	fprintf(stderr, "[L%d]: "_s"\n", y86asm_lineno, ## _a); \
} while (0);

int vmaddr = 0;    /* vm addr */

/* register table */
reg_t reg_table[REG_CNT] = {
	{"%eax", REG_EAX},
	{"%ecx", REG_ECX},
	{"%edx", REG_EDX},
	{"%ebx", REG_EBX},
	{"%esp", REG_ESP},
	{"%ebp", REG_EBP},
	{"%esi", REG_ESI},
	{"%edi", REG_EDI},
};

regid_t find_register(char *name)
{
	int i;
	if(name == NULL)
		return REG_ERR;
	for(i = 0; i < REG_CNT; i++)
		if(strncmp(name,reg_table[i].name,SIZEOF_REG) == 0)
			return reg_table[i].id;
	return REG_ERR;
}

/* instruction set */
instr_t instr_set[] = {
	{"nop", 3,   HPACK(I_NOP, F_NONE), 1 },
	{"halt", 4,  HPACK(I_HALT, F_NONE), 1 },
	{"rrmovl", 6,HPACK(I_RRMOVL, F_NONE), 2 },
	{"cmovle", 6,HPACK(I_RRMOVL, C_LE), 2 },
	{"cmovl", 5, HPACK(I_RRMOVL, C_L), 2 },
	{"cmove", 5, HPACK(I_RRMOVL, C_E), 2 },
	{"cmovne", 6,HPACK(I_RRMOVL, C_NE), 2 },
	{"cmovge", 6,HPACK(I_RRMOVL, C_GE), 2 },
	{"cmovg", 5, HPACK(I_RRMOVL, C_G), 2 },
	{"irmovl", 6,HPACK(I_IRMOVL, F_NONE), 6 },
	{"rmmovl", 6,HPACK(I_RMMOVL, F_NONE), 6 },
	{"mrmovl", 6,HPACK(I_MRMOVL, F_NONE), 6 },
	{"addl", 4,  HPACK(I_ALU, A_ADD), 2 },
	{"subl", 4,  HPACK(I_ALU, A_SUB), 2 },
	{"andl", 4,  HPACK(I_ALU, A_AND), 2 },
	{"xorl", 4,  HPACK(I_ALU, A_XOR), 2 },
	{"jmp", 3,   HPACK(I_JMP, C_YES), 5 },
	{"jle", 3,   HPACK(I_JMP, C_LE), 5 },
	{"jl", 2,    HPACK(I_JMP, C_L), 5 },
	{"je", 2,    HPACK(I_JMP, C_E), 5 },
	{"jne", 3,   HPACK(I_JMP, C_NE), 5 },
	{"jge", 3,   HPACK(I_JMP, C_GE), 5 },
	{"jg", 2,    HPACK(I_JMP, C_G), 5 },
	{"call", 4,  HPACK(I_CALL, F_NONE), 5 },
	{"ret", 3,   HPACK(I_RET, F_NONE), 1 },
	{"pushl", 5, HPACK(I_PUSHL, F_NONE), 2 },
	{"popl", 4,  HPACK(I_POPL, F_NONE),  2 },
	{".byte", 5, HPACK(I_DIRECTIVE, D_DATA), 1 },
	{".word", 5, HPACK(I_DIRECTIVE, D_DATA), 2 },
	{".long", 5, HPACK(I_DIRECTIVE, D_DATA), 4 },
	{".pos", 4,  HPACK(I_DIRECTIVE, D_POS), 0 },
	{".align", 6,HPACK(I_DIRECTIVE, D_ALIGN), 0 },
	{NULL, 1,    0   , 0 } //end
};

instr_t *find_instr(char *name)
{
	int i;
	if(name == NULL)
		return NULL;
	for(i = 0; instr_set[i].name; i++)
		if(strncmp(name,instr_set[i].name,instr_set[i].len) == 0)
			return &instr_set[i];
	return NULL;
}

/* symbol table (don't forget to init and finit it) */
symbol_t *symtab = NULL;

/*
 * find_symbol: scan table to find the symbol
 * args
 *     name: the name of symbol
 *
 * return
 *     symbol_t: the 'name' symbol
 *     NULL: not exist
 */
symbol_t *find_symbol(char *name)
{
	symbol_t *sym = symtab->next;
	while(sym != NULL && name != NULL){
		if(sym->name != NULL && strncmp(sym->name,name,strlen(name)) == 0)
			return sym;
		else
			sym = sym->next;
	}
	return NULL;
}

/*
 * add_symbol: add a new symbol to the symbol table
 * args
 *     name: the name of symbol
 *
 * return
 *     0: success
 *     -1: error, the symbol has exist
 */
int add_symbol(char *name)
{    
	symbol_t *s = NULL;
	/* check duplicate */
	if(find_symbol(name) != NULL)
		return -1;
	/* create new symbol_t (don't forget to free it)*/
	else
	{
		s = (symbol_t*)malloc(sizeof(symbol_t));
		s->name = name;
		s->addr = vmaddr;
		s->next = symtab->next;
		symtab->next = s;
	} 

	/* add the new symbol_t to symbol table */

	return 0;
}

/* relocation table (don't forget to init and finit it) */
reloc_t *reltab = NULL;

/*
 * add_reloc: add a new relocation to the relocation table
 * args
 *     name: the name of symbol
 *
 * return
 *     0: success
 *     -1: error, the symbol has exist
 */
void add_reloc(char *name, bin_t *bin)
{
	/* create new reloc_t (don't forget to free it)*/
	reloc_t *r = (reloc_t *)malloc(sizeof(reloc_t));
	r->name = name;
	r->y86bin = bin;
	r->next = reltab->next;
	reltab->next = r;
	/* add the new reloc_t to relocation table */
}



/* macro for parsing y86 assembly code */
#define IS_DIGIT(s) ((*(s)>='0' && *(s)<='9') || *(s)=='-' || *(s)=='+')
#define IS_LETTER(s) ((*(s)>='a' && *(s)<='z') || (*(s)>='A' && *(s)<='Z'))
#define IS_COMMENT(s) (*(s)=='#')
#define IS_REG(s) (*(s)=='%')
#define IS_IMM(s) (*(s)=='$')


#define IS_BLANK(s) (*(s)==' ' || *(s)=='\t')
#define IS_END(s) (*(s)=='\0')

#define SKIP_BLANK(s) do {  \
	while(!IS_END(s) && IS_BLANK(s))  \
	(s)++;    \
} while(0);

/* return value from different parse_xxx function */
typedef enum { PARSE_ERR=-1, PARSE_REG, PARSE_DIGIT, PARSE_SYMBOL, 
	PARSE_MEM, PARSE_DELIM, PARSE_INSTR, PARSE_LABEL} parse_t;

/*
 * parse_instr: parse an expected data token (e.g., 'rrmovl')
 * args
 *     ptr: point to the start of string
 *     inst: point to the inst_t within instr_set
 *
 * return
 *     PARSE_INSTR: success, move 'ptr' to the first char after token,
 *                            and store the pointer of the instruction to 'inst'
 *     PARSE_ERR: error, the value of 'ptr' and 'inst' are undefined
 */
parse_t parse_instr(char **ptr, instr_t **inst)
{
	/* skip the blank */
	char* str = *ptr;
	instr_t* ins;
	SKIP_BLANK(str);
        if(IS_END(str))
           return PARSE_ERR;
	/* find_instr and check end */
	ins = find_instr(str);
	if(ins == NULL)
		return PARSE_ERR;
	str =str + ins->len;
	/* set 'ptr' and 'inst' */
	*ptr = str;
	*inst = ins;
	return PARSE_INSTR;
}
/*
 * parse_delim: parse an expected delimiter token (e.g., ',')
 * args
 *     ptr: point to the start of string
 *
 * return
 *     PARSE_DELIM: success, move 'ptr' to the first char after token
 *     PARSE_ERR: error, the value of 'ptr' and 'delim' are undefined
 */
parse_t parse_delim(char **ptr, char delim)
{
	/* skip the blank and check */
	char *str = *ptr;
	SKIP_BLANK(str);
	if(IS_END(str) || (*str) != delim)
		return PARSE_ERR;
	/* set 'ptr' */
	*ptr = ++str;
	return PARSE_DELIM;
}

/*
 * parse_reg: parse an expected register token (e.g., '%eax')
 * args
 *     ptr: point to the start of string
 *     regid: point to the regid of register
 *
 * return
 *     PARSE_REG: success, move 'ptr' to the first char after token, 
 *                         and store the regid to 'regid'
 *     PARSE_ERR: error, the value of 'ptr' and 'regid' are undefined
 */
parse_t parse_reg(char **ptr, regid_t *regid)
{
	/* skip the blank and check */
	char *str = *ptr;
	regid_t reg;
	SKIP_BLANK(str);
	if(IS_END(str))
		return PARSE_ERR;
	/* find register */
	reg = find_register(str);
	if(reg == REG_ERR)
		return PARSE_ERR;
	/* set 'ptr' and 'regid' */
	*ptr = str + SIZEOF_REG;
	*regid = reg;
	return PARSE_REG;
}

/*
 * parse_symbol: parse an expected symbol token (e.g., 'Main')
 * args
 *     ptr: point to the start of string
 *     name: point to the name of symbol (should be allocated in this function)
 *
 * return
 *     PARSE_SYMBOL: success, move 'ptr' to the first char after token,
 *                               and allocate and store name to 'name'
 *     PARSE_ERR: error, the value of 'ptr' and 'name' are undefined
 */
parse_t parse_symbol(char **ptr, char **name)
{
	/* skip the blank and check */
	char* str = *ptr;  
	char* symname;
	int i;
	SKIP_BLANK(str);
	if(IS_END(str) || !IS_LETTER(str) )
		return PARSE_ERR;
	/* allocate name and copy to it */
	for(i = 0; i < strlen(str); i++)
		if(IS_BLANK(&str[i]) || (str[i]) == ',')
			break;
	symname = (char*)malloc(i*sizeof(char)+1);
	memset(symname,'\0',i*sizeof(char)+1);
	strncpy(symname,str,i);   
	/* set 'ptr' and 'name' */
	*ptr = str + i;
	*name = symname;
	return PARSE_SYMBOL;
}
/*
 * parse_digit: parse an expected digit token (e.g., '0x100')
 * args
 *     ptr: point to the start of string
 *     value: point to the value of digit
 *
 * return
 *     PARSE_DIGIT: success, move 'ptr' to the first char after token
 *                            and store the value of digit to 'value'
 *     PARSE_ERR: error, the value of 'ptr' and 'value' are undefined
 */
parse_t parse_digit(char **ptr, long *value)
{
	/* skip the blank and check */
	char* str = *ptr;
	char* end;
	long val;
	SKIP_BLANK(str);
	if(IS_END(str) || !IS_DIGIT(str))
		return PARSE_ERR;
	/* calculate the digit, (NOTE: see strtoll()) */
	val = strtoll(str,&end,0);
	/* set 'ptr' and 'value' */
	*ptr = end;
	*value = val;
	return PARSE_DIGIT;
}
/*
 * parse_imm: parse an expected immediate token (e.g., '$0x100' or 'STACK')
 * args
 *     ptr: point to the start of string
 *     name: point to the name of symbol (should be allocated in this function)
 *     value: point to the value of digit
 *
 * return
 *     PARSE_DIGIT: success, the immediate token is a digit,
 *                            move 'ptr' to the first char after token,
 *                            and store the value of digit to 'value'
 *     PARSE_SYMBOL: success, the immediate token is a symbol,
 *                            move 'ptr' to the first char after token,
 *                            and allocate and store name to 'name' 
 *     PARSE_ERR: error, the value of 'ptr', 'name' and 'value' are undefined
 */
parse_t parse_imm(char **ptr, char **name, long *value)
{
	/* skip the blank and check */
	char* str = *ptr;
	parse_t stat = PARSE_ERR;
	char* temp_name = NULL;
	long val;
	SKIP_BLANK(str);
	if(IS_END(str))
		return PARSE_ERR;
	/* if IS_IMM, then parse the digit */
	if(IS_IMM(str)){
		str++;
		stat = parse_digit(&str,&val);
	}      
	/* if IS_LETTER, then parse the symbol */
	else
		if(IS_LETTER(str))
			stat = parse_symbol(&str,&temp_name);
	/* set 'ptr' and 'name' or 'value' */
	*ptr = str;
	*name = temp_name;
	if(stat == PARSE_DIGIT)
		*value = val;
	else
		value = NULL;
	return stat;
}

/*
 * parse_mem: parse an expected memory token (e.g., '8(%ebp)')
 * args
 *     ptr: point to the start of string
 *     value: point to the value of digit
 *     regid: point to the regid of register
 *
 * return
 *     PARSE_MEM: success, move 'ptr' to the first char after token,
 *                          and store the value of digit to 'value',
 *                          and store the regid to 'regid'
 *     PARSE_ERR: error, the value of 'ptr', 'value' and 'regid' are undefined
 */
parse_t parse_mem(char **ptr, long *value, regid_t *regid)
{
	/* skip the blank and check */
	char* str = *ptr;
	long val = 0;
	parse_t stat;
	regid_t reg;
	SKIP_BLANK(str);
	if(IS_END(str))
		return PARSE_ERR; 
	/* calculate the digit and register, (ex: (%ebp) or 8(%ebp)) */
	stat = parse_digit(&str,&val);
	if((*str)!='(')
		return PARSE_ERR;
	str++;
	stat = parse_reg(&str,&reg);
	if(stat == PARSE_ERR || (*str)!=')')
		return PARSE_ERR;
	str++;
	/* set 'ptr', 'value' and 'regid' */
	*ptr = str;
	*value = val;
	*regid = reg;
	return PARSE_MEM;
}

/*
 * parse_data: parse an expected data token (e.g., '0x100' or 'array')
 * args
 *     ptr: point to the start of string
 *     name: point to the name of symbol (should be allocated in this function)
 *     value: point to the value of digit
 *
 * return
 *     PARSE_DIGIT: success, data token is a digit,
 *                            and move 'ptr' to the first char after token,
 *                            and store the value of digit to 'value'
 *     PARSE_SYMBOL: success, data token is a symbol,
 *                            and move 'ptr' to the first char after token,
 *                            and allocate and store name to 'name' 
 *     PARSE_ERR: error, the value of 'ptr', 'name' and 'value' are undefined
 */
parse_t parse_data(char **ptr, char **name, long *value)
{
	/* skip the blank and check */
	char* str = *ptr;
	char* temp_name = NULL;
	long val;
	parse_t stat = PARSE_ERR;
	SKIP_BLANK(str);
	if(IS_END(str))
		return PARSE_ERR;
	/* if IS_DIGIT, then parse the digit */
	if(IS_DIGIT(str))
		stat = parse_digit(&str,&val);
	/* if IS_LETTER, then parse the symbol */
	else if(IS_LETTER(str))
		stat = parse_symbol(&str,&temp_name);
	/* set 'ptr', 'name' and 'value' */
	*ptr = str;
	*name = temp_name;
	if(stat == PARSE_DIGIT)
		*value = val;
	else 
		value = NULL;
	return stat;
}


/*
 * parse_label: parse an expected label token (e.g., 'Loop:')
 * args
 *     ptr: point to the start of string
 *     name: point to the name of symbol (should be allocated in this function)
 *
 * return
 *     PARSE_LABEL: success, move 'ptr' to the first char after token
 *                            and allocate and store name to 'name'
 *     PARSE_ERR: error, the value of 'ptr' is undefined
 */
parse_t parse_label(char **ptr, char **name)
{
	/* skip the blank and check */
	char* str = *ptr;
	char* labelname;
	int i;
	SKIP_BLANK(str);
	if(IS_END(str) || !IS_LETTER(str) )
		return PARSE_ERR;
	for(i = 0; i<strlen(str);i++){
                if(str[i]==' ' || str[i] ==',' || str[i] == '#')
                    break;
		if(str[i]==':'){
	/* allocate name and copy to it */
	        labelname = (char*)malloc(i*sizeof(char)+1);
	        memset(labelname,'\0',i*sizeof(char)+1);
	        strncpy(labelname,str,i);
	/* set 'ptr' and 'name' */
	       *ptr = str + i + 1;
	       *name = labelname;
	       return PARSE_LABEL;
               }
        }
        return PARSE_ERR;
}

/*
 * parse_line: parse a line of y86 code (e.g., 'Loop: mrmovl (%ecx), %esi')
 * (you could combine above parse_xxx functions to do it)
 * args
 *     line: point to a line_t data with a line of y86 assembly code
 *
 * return
 *     PARSE_XXX: success, fill line_t with assembled y86 code
 *     PARSE_ERR: error, try to print err information (e.g., instr type and line number)
 */
type_t parse_line(line_t *line)
{

	/* when finish parse an instruction or lable, we still need to continue check 
	 * e.g., 
	 *  Loop: mrmovl (%ebp), %ecx
	 *           call SUM  #invoke SUM function */

	char* str = line->y86asm;
	bin_t* y86bin = &(line->y86bin);
	char* label = NULL;
	instr_t* ins = NULL;
	/* skip blank and check IS_END */
	while(1){ 
		SKIP_BLANK(str);
		if(IS_END(str))
			break;
		/* is a comment ? */
		if(IS_COMMENT(str))
			break;
		/* is a label ? */
		if(line->type == TYPE_INS){
			line->type = TYPE_ERR;
			break;
		}
		if(parse_label(&str,&label) == PARSE_LABEL){
			if(add_symbol(label) == -1){
				line->type = TYPE_ERR;
                                err_print("Dup symbol:%s",label);
				break;
			}
			else    
				continue;
		}
		/* is an instruction ? */
		if(parse_instr(&str,&ins) != PARSE_INSTR){
			line->type = TYPE_ERR;
			break;
		}   
		/* set type and y86bin */
		line->type = TYPE_INS;
		y86bin->addr = vmaddr;
		y86bin->codes[0] = ins->code;
		y86bin->bytes = ins->bytes;
		/* update vmaddr */    
		vmaddr += ins->bytes;
		/* parse the rest of instruction according to the itype */
		switch(HIGH(ins->code)){
			case I_HALT:case I_NOP:case I_RET:
				continue;
			case I_RRMOVL:case I_ALU:
				{
					regid_t regA, regB;
					char delim = ',';
					if(parse_reg(&str,&regA) == PARSE_ERR){ 
						line->type = TYPE_ERR;
                                                err_print("Invalid REG");
						break;
					}
					if(parse_delim(&str,delim) == PARSE_ERR){ 
						line->type = TYPE_ERR;
                                                err_print("Invalid ','");
						break;
					}
					if(parse_reg(&str,&regB) == PARSE_ERR){
						line->type = TYPE_ERR;
                                                err_print("Invalid REG");
						break;
					}
					y86bin->codes[1]=HPACK(regA,regB);
					continue;
				}
			case I_IRMOVL:
				{
					regid_t regB;
					long val = 0;
					char* name;
					char delim = ',';
					parse_t stat = parse_imm(&str,&name,&val);
					if(stat == PARSE_ERR){
						line->type = TYPE_ERR;
                                                err_print("Invalid Immediate");
						break;
					}
					if(parse_delim(&str,delim) == PARSE_ERR){ 
						line->type = TYPE_ERR;
                                                err_print("Invalid ','");
						break;
					}
					if(parse_reg(&str,&regB) == PARSE_ERR){
						line->type = TYPE_ERR;
                                                err_print("Invalid REG");
						break;
					}
					if(stat == PARSE_DIGIT){
						y86bin->codes[1] = HPACK(0xf,regB);
						y86bin->codes[2] = (val & 0xff);
						y86bin->codes[3] = (val >> 8) & 0xff;
						y86bin->codes[4] = (val >> 16) & 0xff;
						y86bin->codes[5] = (val >> 24) & 0xff;
					}
					else{
						add_reloc(name,y86bin);
						y86bin->codes[1] = HPACK(0xf,regB);
					}
					continue;
				}
			case I_RMMOVL:
				{
					regid_t regA,regB;
					long val = 0;
					char delim = ',';
					if(parse_reg(&str,&regA) == PARSE_ERR){ 
						line->type = TYPE_ERR;
                                                err_print("Invalid REG");
						break;
					}
					if(parse_delim(&str,delim) == PARSE_ERR){ 
						line->type = TYPE_ERR;
                                                err_print("Invalid ','");
						break;
					}
					if(parse_mem(&str,&val,&regB) == PARSE_ERR){
						line->type = TYPE_ERR;
                                                err_print("Invalid MEM");
						break;
					}
					y86bin->codes[1] = HPACK(regA,regB);
					y86bin->codes[2] = (val & 0xff);
					y86bin->codes[3] = (val >> 8) & 0xff;
					y86bin->codes[4] = (val >> 16) & 0xff;
					y86bin->codes[5] = (val >> 24) & 0xff;
					continue;
				}
			case I_MRMOVL:
				{
					regid_t regA,regB;
					long val = 0;
					char delim = ',';
					if(parse_mem(&str,&val,&regB) == PARSE_ERR){
						line->type = TYPE_ERR;
                                                err_print("Invalid MEM");
						break;
					}
					if(parse_delim(&str,delim) == PARSE_ERR){ 
						line->type = TYPE_ERR;
                                                err_print("Invalid ','");
						break;
					}
					if(parse_reg(&str,&regA) == PARSE_ERR){
						line->type = TYPE_ERR;
                                                err_print("Invalid REG");
						break;
					}
					y86bin->codes[1] = HPACK(regA,regB);
					y86bin->codes[2] = (val & 0xff);
					y86bin->codes[3] = (val >> 8) & 0xff;
					y86bin->codes[4] = (val >> 16) & 0xff;
					y86bin->codes[5] = (val >> 24) & 0xff;
					continue;
				}
			case I_JMP:case I_CALL:
				{
					long val = 0;
					char* name;
					parse_t stat = parse_data(&str,&name,&val);
					if(stat == PARSE_ERR){
						line->type = TYPE_ERR;
						break;
					}
					if(stat == PARSE_DIGIT){
                                                if(val > line->y86bin.addr){ 
                                                    line->type = TYPE_ERR;
                                                    err_print("Invalid DEST");
                                                    break;
                                                }
						y86bin->codes[1] = (val & 0xff);
						y86bin->codes[2] = (val >> 8) & 0xff;
						y86bin->codes[3] = (val >> 16) & 0xff;
						y86bin->codes[4] = (val >> 24) & 0xff;
					}
					else{ 
						add_reloc(name,y86bin);
						y86bin->codes[1] = 0x0;
						y86bin->codes[2] = 0x0;
						y86bin->codes[3] = 0x0;
						y86bin->codes[4] = 0x0;
					}
					continue;
				}
			case I_PUSHL:case I_POPL:
				{
					regid_t regA;
					if(parse_reg(&str,&regA) == PARSE_ERR){ 
						line->type = TYPE_ERR;
                                                err_print("Invalid REG");
						break;
					}
					y86bin->codes[1] = HPACK(regA,0xf);
					continue;
				}
			case I_DIRECTIVE:
				{
					switch(LOW(ins->code)){
						case D_DATA:
							{
								long val;
								char* name;
								parse_t stat = parse_data(&str,&name,&val);
								if(stat == PARSE_ERR){
									line->type = TYPE_ERR;
									break;
								} 
								if(stat == PARSE_DIGIT){
									y86bin->codes[0] = (val & 0xff);
									y86bin->codes[1] = (val >> 8) & 0xff;
									y86bin->codes[2] = (val >> 16) & 0xff;
									y86bin->codes[3] = (val >> 24) & 0xff;
								}
								else{ 
									add_reloc(name,y86bin);
									y86bin->codes[0] = 0x0;
									y86bin->codes[1] = 0x0;
									y86bin->codes[2] = 0x0;
									y86bin->codes[3] = 0x0;
								}
								continue;
							}
						case D_POS:
							{
								long val = 0;
								if(parse_digit(&str,&val) == PARSE_ERR){
									line->type = TYPE_ERR;
									break;
								}
								vmaddr = val;
								y86bin->addr = val;
								continue;
							}
						case D_ALIGN:
							{
								long val = 0;
								if(parse_digit(&str,&val) == PARSE_ERR){
									line->type = TYPE_ERR;
									break;
								}
								if(vmaddr % val != 0)
									vmaddr = vmaddr - (vmaddr % val) + val;
							        y86bin->addr = vmaddr;
								continue;
							}
						default:
							line->type = TYPE_ERR;
							break;                  
					}
					break;
				}
			default:
				line->type = TYPE_ERR;
				break;  
		}        
		break; 
	}     
	return line->type;
}

/*
 * assemble: assemble an y86 file (e.g., 'asum.ys')
 * args
 *     in: point to input file (an y86 assembly file)
 *
 * return
 *     0: success, assmble the y86 file to a list of line_t
 *     -1: error, try to print err information (e.g., instr type and line number)
 */
int assemble(FILE *in)
{
	static char asm_buf[MAX_INSLEN]; /* the current line of asm code */
	line_t *line;
	int slen;
	char *y86asm;
	/* read y86 code line-by-line, and parse them to generate raw y86 binary code list */
	while (fgets(asm_buf, MAX_INSLEN, in) != NULL) {
		slen  = strlen(asm_buf);
		if ((asm_buf[slen-1] == '\n') || (asm_buf[slen-1] == '\r')) { 
			asm_buf[--slen] = '\0'; /* replace terminator */
		}

		/* store y86 assembly code */
		y86asm = (char *)malloc(sizeof(char) * (slen + 1)); // free in finit
		strcpy(y86asm, asm_buf);

		line = (line_t *)malloc(sizeof(line_t)); // free in finit
		memset(line, '\0', sizeof(line_t));

		/* set defualt */
		line->type = TYPE_COMM;
		line->y86asm = y86asm;
		line->next = NULL;

		/* add to y86 binary code list */
		y86bin_listtail->next = line;
		y86bin_listtail = line;
		y86asm_lineno ++;

		/* parse */
		if (parse_line(line) == TYPE_ERR)
			return -1;
	}

	/* skip line number information in err_print() */
	y86asm_lineno = -1;
	return 0;
}

/*
 * relocate: relocate the raw y86 binary code with symbol address
 *
 * return
 *     0: success
 *     -1: error, try to print err information (e.g., addr and symbol)
 */
int relocate(void)
{
	reloc_t *reloc = NULL;
	symbol_t *sym = NULL;
	reloc = reltab->next;
	while (reloc) {
		/* find symbol */
		sym = find_symbol(reloc->name);      
		/* relocate y86bin according itype */
		if (sym != NULL){
			reloc->y86bin->codes[reloc->y86bin->bytes-4] = (sym->addr) & 0xff;
			reloc->y86bin->codes[reloc->y86bin->bytes-3] = (sym->addr >> 8) & 0xff;
			reloc->y86bin->codes[reloc->y86bin->bytes-2] = (sym->addr >> 16) & 0xff;
			reloc->y86bin->codes[reloc->y86bin->bytes-1] = (sym->addr >> 24) & 0xff;
		}
		else
                {
                        err_print("Unknown symbol:'%s'",reloc->name);
			return -1;
                }
		/* next */
		reloc = reloc->next;
	}
	return 0;
}

/*
 * binfile: generate the y86 binary file
 * args
 *     out: point to output file (an y86 binary file)
 *
 * return
 *     0: success
 *     -1: error
 */
int binfile(FILE *out)
{
	/* prepare image with y86 binary code */
	int addr = 0;
	int bytes = 0;
	byte_t* temp;
	line_t* line = y86bin_listhead->next;
	int addr_next; 
	while(line != NULL){
		if(line->type == TYPE_ERR)
	         	return -1;
		if(line->type == TYPE_COMM){
			line = line->next;
			continue; 
		}
               /*code = line->y86bin.codes[0];
                if(code == I_JMP ||code == I_CALL){
                  byte_t* codes = (line->y86bin).codes;
                  long dest = codes[1] + (codes[2] >> 8) + (codes[3] >> 16) + (codes[4] >> 24);
                  if(dest > vmaddr){
                     err_print("Invalid Dest");
                     return -1; 
                  }
                }  */ 
		addr_next = (line->y86bin).addr;   
		/* binary write y86 code to output file (NOTE: see fwrite()) */
		if(addr_next == addr + bytes)
			fwrite((line->y86bin).codes,(line->y86bin).bytes,1,out);
		else if(addr_next > addr + bytes){
                        line_t* templine = line->next;
                        while(templine != NULL){
                           if(templine->type == TYPE_INS){    
			    temp = (byte_t*)malloc(sizeof(byte_t)*addr_next - (addr + bytes));
			    memset(temp,0,sizeof(byte_t)*addr_next - (addr + bytes));
			    fwrite(temp,sizeof(byte_t),addr_next - (addr + bytes),out);
			    free(temp);
                            break;
                           }
                           templine = templine->next;
                        }
		} 
		else if(addr_next < addr + bytes)
			return -1;
		addr = addr_next;
		bytes = (line->y86bin).bytes;
		line = line->next;
	}
	return 0;
}








/* whether print the readable output to screen or not ? */
bool_t screen = FALSE; 

static void hexstuff(char *dest, int value, int len)
{
	int i;
	for (i = 0; i < len; i++) {
		char c;
		int h = (value >> 4*i) & 0xF;
		c = h < 10 ? h + '0' : h - 10 + 'a';
		dest[len-i-1] = c;
	}
}

void print_line(line_t *line)
{
	char buf[26];

	/* line format: 0xHHH: cccccccccccc | <line> */
	if (line->type == TYPE_INS) {
		bin_t *y86bin = &line->y86bin;
		int i;

		strcpy(buf, "  0x000:              | ");

		hexstuff(buf+4, y86bin->addr, 3);
		if (y86bin->bytes > 0)
			for (i = 0; i < y86bin->bytes; i++)
				hexstuff(buf+9+2*i, y86bin->codes[i]&0xFF, 2);
	} else {
		strcpy(buf, "                      | ");
	}

	printf("%s%s\n", buf, line->y86asm);
}

/* 
 * print_screen: dump readable binary and assembly code to screen
 * (e.g., Figure 4.8 in ICS book)
 */
void print_screen(void)
{
	line_t *tmp = y86bin_listhead->next;

	/* line by line */
	while (tmp != NULL) {
		print_line(tmp);
		tmp = tmp->next;
	}
}

/* init and finit */
void init(void)
{
	reltab = (reloc_t *)malloc(sizeof(reloc_t)); // free in finit
	memset(reltab, 0, sizeof(reloc_t));

	symtab = (symbol_t *)malloc(sizeof(symbol_t)); // free in finit
	memset(symtab, 0, sizeof(symbol_t));

	y86bin_listhead = (line_t *)malloc(sizeof(line_t)); // free in finit
	memset(y86bin_listhead, 0, sizeof(line_t));
	y86bin_listtail = y86bin_listhead;
	y86asm_lineno = 0;
}

void finit(void)
{
	reloc_t *reloc = NULL;
	do {
		reloc = reltab->next;
		if (reltab->name) 
			free(reltab->name);
		free(reltab);
		reltab = reloc;
	} while (reltab);

	symbol_t *sym = NULL;
	do {
		sym = symtab->next;
		if (symtab->name) 
			free(symtab->name);
		free(symtab);
		symtab = sym;
	} while (symtab);

	line_t *ltmp = NULL;
	do {
		ltmp = y86bin_listhead->next;
		if (y86bin_listhead->y86asm) 
			free(y86bin_listhead->y86asm);
		free(y86bin_listhead);
		y86bin_listhead = ltmp;
	} while (y86bin_listhead);
}

static void usage(char *pname)
{
	printf("Usage: %s [-v] file.ys\n", pname);
	printf("   -v print the readable output to screen\n");
	exit(0);
}

int main(int argc, char *argv[])
{
	int rootlen;
	char infname[512];
	char outfname[512];
	int nextarg = 1;
	FILE *in = NULL, *out = NULL;

	if (argc < 2)
		usage(argv[0]);

	if (argv[nextarg][0] == '-') {
		char flag = argv[nextarg][1];
		switch (flag) {
			case 'v':
				screen = TRUE;
				nextarg++;
				break;
			default:
				usage(argv[0]);
		}
	}

	/* parse input file name */
	rootlen = strlen(argv[nextarg])-3;
	/* only support the .ys file */
	if (strcmp(argv[nextarg]+rootlen, ".ys"))
		usage(argv[0]);

	if (rootlen > 500) {
		err_print("File name too long");
		exit(1);
	}


	/* init */
	init();


	/* assemble .ys file */
	strncpy(infname, argv[nextarg], rootlen);
	strcpy(infname+rootlen, ".ys");
	in = fopen(infname, "r");
	if (!in) {
		err_print("Can't open input file '%s'", infname);
		exit(1);
	}

	if (assemble(in) < 0) {
		err_print("Assemble y86 code error");
		fclose(in);
		exit(1);
	}
	fclose(in);


	/* relocate binary code */
	if (relocate() < 0) {
		err_print("Relocate binary code error");
		exit(1);
	}


	/* generate .bin file */
	strncpy(outfname, argv[nextarg], rootlen);
	strcpy(outfname+rootlen, ".bin");
	out = fopen(outfname, "wb");
	if (!out) {
		err_print("Can't open output file '%s'", outfname);
		exit(1);
	}

	if (binfile(out) < 0) {
		err_print("Generate binary file error");
		fclose(out);
		exit(1);
	}
	fclose(out);

	/* print to screen (.yo file) */
	if (screen)
		print_screen(); 

	/* finit */
	finit();
	return 0;
}


