
bomb：     文件格式 elf32-i386


Disassembly of section .interp:

08048134 <.interp>:
 8048134:	2f                   	das    
 8048135:	6c                   	insb   (%dx),%es:(%edi)
 8048136:	69 62 2f 6c 64 2d 6c 	imul   $0x6c2d646c,0x2f(%edx),%esp
 804813d:	69 6e 75 78 2e 73 6f 	imul   $0x6f732e78,0x75(%esi),%ebp
 8048144:	2e 32 00             	xor    %cs:(%eax),%al

Disassembly of section .note.ABI-tag:

08048148 <.note.ABI-tag>:
 8048148:	04 00                	add    $0x0,%al
 804814a:	00 00                	add    %al,(%eax)
 804814c:	10 00                	adc    %al,(%eax)
 804814e:	00 00                	add    %al,(%eax)
 8048150:	01 00                	add    %eax,(%eax)
 8048152:	00 00                	add    %al,(%eax)
 8048154:	47                   	inc    %edi
 8048155:	4e                   	dec    %esi
 8048156:	55                   	push   %ebp
 8048157:	00 00                	add    %al,(%eax)
 8048159:	00 00                	add    %al,(%eax)
 804815b:	00 02                	add    %al,(%edx)
 804815d:	00 00                	add    %al,(%eax)
 804815f:	00 06                	add    %al,(%esi)
 8048161:	00 00                	add    %al,(%eax)
 8048163:	00 20                	add    %ah,(%eax)
 8048165:	00 00                	add    %al,(%eax)
	...

Disassembly of section .note.gnu.build-id:

08048168 <.note.gnu.build-id>:
 8048168:	04 00                	add    $0x0,%al
 804816a:	00 00                	add    %al,(%eax)
 804816c:	14 00                	adc    $0x0,%al
 804816e:	00 00                	add    %al,(%eax)
 8048170:	03 00                	add    (%eax),%eax
 8048172:	00 00                	add    %al,(%eax)
 8048174:	47                   	inc    %edi
 8048175:	4e                   	dec    %esi
 8048176:	55                   	push   %ebp
 8048177:	00 b9 5e fe e3 26    	add    %bh,0x26e3fe5e(%ecx)
 804817d:	7b 9d                	jnp    804811c <_init-0x618>
 804817f:	6e                   	outsb  %ds:(%esi),(%dx)
 8048180:	07                   	pop    %es
 8048181:	c2 c6 e0             	ret    $0xe0c6
 8048184:	ef                   	out    %eax,(%dx)
 8048185:	b4 2c                	mov    $0x2c,%ah
 8048187:	09 43 6f             	or     %eax,0x6f(%ebx)
 804818a:	8c 33                	mov    %?,(%ebx)

Disassembly of section .gnu.hash:

0804818c <.gnu.hash>:
 804818c:	03 00                	add    (%eax),%eax
 804818e:	00 00                	add    %al,(%eax)
 8048190:	23 00                	and    (%eax),%eax
 8048192:	00 00                	add    %al,(%eax)
 8048194:	01 00                	add    %eax,(%eax)
 8048196:	00 00                	add    %al,(%eax)
 8048198:	05 00 00 00 80       	add    $0x80000000,%eax
 804819d:	2b 00                	sub    (%eax),%eax
 804819f:	20 23                	and    %ah,(%ebx)
 80481a1:	00 00                	add    %al,(%eax)
 80481a3:	00 24 00             	add    %ah,(%eax,%eax,1)
 80481a6:	00 00                	add    %al,(%eax)
 80481a8:	00 00                	add    %al,(%eax)
 80481aa:	00 00                	add    %al,(%eax)
 80481ac:	29 1d 8c 1c ac 4b    	sub    %ebx,0x4bac1c8c
 80481b2:	e3 c0                	jecxz  8048174 <_init-0x5c0>
 80481b4:	67 55                	addr16 push %ebp
 80481b6:	61                   	popa   
 80481b7:	10                   	.byte 0x10

Disassembly of section .dynsym:

080481b8 <.dynsym>:
	...
 80481c8:	21 00                	and    %eax,(%eax)
	...
 80481d2:	00 00                	add    %al,(%eax)
 80481d4:	12 00                	adc    (%eax),%al
 80481d6:	00 00                	add    %al,(%eax)
 80481d8:	02 01                	add    (%ecx),%al
	...
 80481e2:	00 00                	add    %al,(%eax)
 80481e4:	12 00                	adc    (%eax),%al
 80481e6:	00 00                	add    %al,(%eax)
 80481e8:	29 00                	sub    %eax,(%eax)
	...
 80481f2:	00 00                	add    %al,(%eax)
 80481f4:	12 00                	adc    (%eax),%al
 80481f6:	00 00                	add    %al,(%eax)
 80481f8:	f0 00 00             	lock add %al,(%eax)
	...
 8048203:	00 12                	add    %dl,(%edx)
 8048205:	00 00                	add    %al,(%eax)
 8048207:	00 74 00 00          	add    %dh,0x0(%eax,%eax,1)
	...
 8048213:	00 12                	add    %dl,(%edx)
 8048215:	00 00                	add    %al,(%eax)
 8048217:	00 8c 00 00 00 00 00 	add    %cl,0x0(%eax,%eax,1)
 804821e:	00 00                	add    %al,(%eax)
 8048220:	00 00                	add    %al,(%eax)
 8048222:	00 00                	add    %al,(%eax)
 8048224:	12 00                	adc    (%eax),%al
 8048226:	00 00                	add    %al,(%eax)
 8048228:	b8 00 00 00 00       	mov    $0x0,%eax
 804822d:	00 00                	add    %al,(%eax)
 804822f:	00 00                	add    %al,(%eax)
 8048231:	00 00                	add    %al,(%eax)
 8048233:	00 12                	add    %dl,(%edx)
 8048235:	00 00                	add    %al,(%eax)
 8048237:	00 62 00             	add    %ah,0x0(%edx)
	...
 8048242:	00 00                	add    %al,(%eax)
 8048244:	12 00                	adc    (%eax),%al
 8048246:	00 00                	add    %al,(%eax)
 8048248:	09 01                	or     %eax,(%ecx)
	...
 8048252:	00 00                	add    %al,(%eax)
 8048254:	12 00                	adc    (%eax),%al
 8048256:	00 00                	add    %al,(%eax)
 8048258:	7e 00                	jle    804825a <_init-0x4da>
	...
 8048262:	00 00                	add    %al,(%eax)
 8048264:	12 00                	adc    (%eax),%al
 8048266:	00 00                	add    %al,(%eax)
 8048268:	f4                   	hlt    
	...
 8048271:	00 00                	add    %al,(%eax)
 8048273:	00 12                	add    %dl,(%edx)
 8048275:	00 00                	add    %al,(%eax)
 8048277:	00 fb                	add    %bh,%bl
	...
 8048281:	00 00                	add    %al,(%eax)
 8048283:	00 12                	add    %dl,(%edx)
 8048285:	00 00                	add    %al,(%eax)
 8048287:	00 bf 00 00 00 00    	add    %bh,0x0(%edi)
 804828d:	00 00                	add    %al,(%eax)
 804828f:	00 00                	add    %al,(%eax)
 8048291:	00 00                	add    %al,(%eax)
 8048293:	00 12                	add    %dl,(%edx)
 8048295:	00 00                	add    %al,(%eax)
 8048297:	00 30                	add    %dh,(%eax)
	...
 80482a1:	00 00                	add    %al,(%eax)
 80482a3:	00 12                	add    %dl,(%edx)
 80482a5:	00 00                	add    %al,(%eax)
 80482a7:	00 d4                	add    %dl,%ah
	...
 80482b1:	00 00                	add    %al,(%eax)
 80482b3:	00 12                	add    %dl,(%edx)
 80482b5:	00 00                	add    %al,(%eax)
 80482b7:	00 69 00             	add    %ch,0x0(%ecx)
	...
 80482c2:	00 00                	add    %al,(%eax)
 80482c4:	12 00                	adc    (%eax),%al
 80482c6:	00 00                	add    %al,(%eax)
 80482c8:	db 00                	fildl  (%eax)
	...
 80482d2:	00 00                	add    %al,(%eax)
 80482d4:	12 00                	adc    (%eax),%al
 80482d6:	00 00                	add    %al,(%eax)
 80482d8:	21 01                	and    %eax,(%ecx)
	...
 80482e2:	00 00                	add    %al,(%eax)
 80482e4:	20 00                	and    %al,(%eax)
 80482e6:	00 00                	add    %al,(%eax)
 80482e8:	37                   	aaa    
	...
 80482f1:	00 00                	add    %al,(%eax)
 80482f3:	00 12                	add    %dl,(%edx)
 80482f5:	00 00                	add    %al,(%eax)
 80482f7:	00 0f                	add    %cl,(%edi)
 80482f9:	01 00                	add    %eax,(%eax)
	...
 8048303:	00 12                	add    %dl,(%edx)
 8048305:	00 00                	add    %al,(%eax)
 8048307:	00 01                	add    %al,(%ecx)
 8048309:	01 00                	add    %eax,(%eax)
	...
 8048313:	00 12                	add    %dl,(%edx)
 8048315:	00 00                	add    %al,(%eax)
 8048317:	00 f5                	add    %dh,%ch
	...
 8048321:	00 00                	add    %al,(%eax)
 8048323:	00 12                	add    %dl,(%edx)
 8048325:	00 00                	add    %al,(%eax)
 8048327:	00 4a 00             	add    %cl,0x0(%edx)
	...
 8048332:	00 00                	add    %al,(%eax)
 8048334:	12 00                	adc    (%eax),%al
 8048336:	00 00                	add    %al,(%eax)
 8048338:	44                   	inc    %esp
	...
 8048341:	00 00                	add    %al,(%eax)
 8048343:	00 12                	add    %dl,(%edx)
 8048345:	00 00                	add    %al,(%eax)
 8048347:	00 9a 00 00 00 00    	add    %bl,0x0(%edx)
 804834d:	00 00                	add    %al,(%eax)
 804834f:	00 00                	add    %al,(%eax)
 8048351:	00 00                	add    %al,(%eax)
 8048353:	00 12                	add    %dl,(%edx)
 8048355:	00 00                	add    %al,(%eax)
 8048357:	00 b2 00 00 00 00    	add    %dh,0x0(%edx)
 804835d:	00 00                	add    %al,(%eax)
 804835f:	00 00                	add    %al,(%eax)
 8048361:	00 00                	add    %al,(%eax)
 8048363:	00 12                	add    %dl,(%edx)
 8048365:	00 00                	add    %al,(%eax)
 8048367:	00 3c 00             	add    %bh,(%eax,%eax,1)
	...
 8048372:	00 00                	add    %al,(%eax)
 8048374:	12 00                	adc    (%eax),%al
 8048376:	00 00                	add    %al,(%eax)
 8048378:	92                   	xchg   %eax,%edx
	...
 8048381:	00 00                	add    %al,(%eax)
 8048383:	00 12                	add    %dl,(%edx)
 8048385:	00 00                	add    %al,(%eax)
 8048387:	00 1a                	add    %bl,(%edx)
	...
 8048391:	00 00                	add    %al,(%eax)
 8048393:	00 12                	add    %dl,(%edx)
 8048395:	00 00                	add    %al,(%eax)
 8048397:	00 e2                	add    %ah,%dl
	...
 80483a1:	00 00                	add    %al,(%eax)
 80483a3:	00 12                	add    %dl,(%edx)
 80483a5:	00 00                	add    %al,(%eax)
 80483a7:	00 85 00 00 00 00    	add    %al,0x0(%ebp)
 80483ad:	00 00                	add    %al,(%eax)
 80483af:	00 00                	add    %al,(%eax)
 80483b1:	00 00                	add    %al,(%eax)
 80483b3:	00 12                	add    %dl,(%edx)
 80483b5:	00 00                	add    %al,(%eax)
 80483b7:	00 5a 00             	add    %bl,0x0(%edx)
	...
 80483c2:	00 00                	add    %al,(%eax)
 80483c4:	12 00                	adc    (%eax),%al
 80483c6:	00 00                	add    %al,(%eax)
 80483c8:	b9 00 00 00 00       	mov    $0x0,%ecx
 80483cd:	00 00                	add    %al,(%eax)
 80483cf:	00 00                	add    %al,(%eax)
 80483d1:	00 00                	add    %al,(%eax)
 80483d3:	00 12                	add    %dl,(%edx)
 80483d5:	00 00                	add    %al,(%eax)
 80483d7:	00 c6                	add    %al,%dh
	...
 80483e1:	00 00                	add    %al,(%eax)
 80483e3:	00 12                	add    %dl,(%edx)
 80483e5:	00 00                	add    %al,(%eax)
 80483e7:	00 ab 00 00 00 a0    	add    %ch,-0x60000000(%ebx)
 80483ed:	b7 04                	mov    $0x4,%bh
 80483ef:	08 04 00             	or     %al,(%eax,%eax,1)
 80483f2:	00 00                	add    %al,(%eax)
 80483f4:	11 00                	adc    %eax,(%eax)
 80483f6:	19 00                	sbb    %eax,(%eax)
 80483f8:	0b 00                	or     (%eax),%eax
 80483fa:	00 00                	add    %al,(%eax)
 80483fc:	2c 9a                	sub    $0x9a,%al
 80483fe:	04 08                	add    $0x8,%al
 8048400:	04 00                	add    $0x0,%al
 8048402:	00 00                	add    %al,(%eax)
 8048404:	11 00                	adc    %eax,(%eax)
 8048406:	0f 00 6e 00          	verw   0x0(%esi)
 804840a:	00 00                	add    %al,(%eax)
 804840c:	80 b7 04 08 04 00 00 	xorb   $0x0,0x40804(%edi)
 8048413:	00 11                	add    %dl,(%ecx)
 8048415:	00 19                	add    %bl,(%ecx)
	...

Disassembly of section .dynstr:

08048418 <.dynstr>:
 8048418:	00 6c 69 62          	add    %ch,0x62(%ecx,%ebp,2)
 804841c:	63 2e                	arpl   %bp,(%esi)
 804841e:	73 6f                	jae    804848f <_init-0x2a5>
 8048420:	2e 36 00 5f 49       	cs add %bl,%ss:0x49(%edi)
 8048425:	4f                   	dec    %edi
 8048426:	5f                   	pop    %edi
 8048427:	73 74                	jae    804849d <_init-0x297>
 8048429:	64 69 6e 5f 75 73 65 	imul   $0x64657375,%fs:0x5f(%esi),%ebp
 8048430:	64 
 8048431:	00 73 6f             	add    %dh,0x6f(%ebx)
 8048434:	63 6b 65             	arpl   %bp,0x65(%ebx)
 8048437:	74 00                	je     8048439 <_init-0x2fb>
 8048439:	63 75 73             	arpl   %si,0x73(%ebp)
 804843c:	65 72 69             	gs jb  80484a8 <_init-0x28c>
 804843f:	64 00 66 66          	add    %ah,%fs:0x66(%esi)
 8048443:	6c                   	insb   (%dx),%es:(%edi)
 8048444:	75 73                	jne    80484b9 <_init-0x27b>
 8048446:	68 00 73 74 72       	push   $0x72747300
 804844b:	63 70 79             	arpl   %si,0x79(%eax)
 804844e:	00 65 78             	add    %ah,0x78(%ebp)
 8048451:	69 74 00 73 70 72 69 	imul   $0x6e697270,0x73(%eax,%eax,1),%esi
 8048458:	6e 
 8048459:	74 66                	je     80484c1 <_init-0x273>
 804845b:	00 66 6f             	add    %ah,0x6f(%esi)
 804845e:	70 65                	jo     80484c5 <_init-0x26f>
 8048460:	6e                   	outsb  %ds:(%esi),(%dx)
 8048461:	00 5f 5f             	add    %bl,0x5f(%edi)
 8048464:	69 73 6f 63 39 39 5f 	imul   $0x5f393963,0x6f(%ebx),%esi
 804846b:	73 73                	jae    80484e0 <_init-0x254>
 804846d:	63 61 6e             	arpl   %sp,0x6e(%ecx)
 8048470:	66 00 63 6f          	data16 add %ah,0x6f(%ebx)
 8048474:	6e                   	outsb  %ds:(%esi),(%dx)
 8048475:	6e                   	outsb  %ds:(%esi),(%dx)
 8048476:	65 63 74 00 73       	arpl   %si,%gs:0x73(%eax,%eax,1)
 804847b:	69 67 6e 61 6c 00 70 	imul   $0x70006c61,0x6e(%edi),%esp
 8048482:	75 74                	jne    80484f8 <_init-0x23c>
 8048484:	73 00                	jae    8048486 <_init-0x2ae>
 8048486:	73 74                	jae    80484fc <_init-0x238>
 8048488:	64 69 6e 00 69 6e 65 	imul   $0x74656e69,%fs:0x0(%esi),%ebp
 804848f:	74 
 8048490:	5f                   	pop    %edi
 8048491:	70 74                	jo     8048507 <_init-0x22d>
 8048493:	6f                   	outsl  %ds:(%esi),(%dx)
 8048494:	6e                   	outsb  %ds:(%esi),(%dx)
 8048495:	00 72 65             	add    %dh,0x65(%edx)
 8048498:	77 69                	ja     8048503 <_init-0x231>
 804849a:	6e                   	outsb  %ds:(%esi),(%dx)
 804849b:	64 00 73 74          	add    %dh,%fs:0x74(%ebx)
 804849f:	72 74                	jb     8048515 <_init-0x21f>
 80484a1:	6f                   	outsl  %ds:(%esi),(%dx)
 80484a2:	6c                   	insb   (%dx),%es:(%edi)
 80484a3:	00 66 67             	add    %ah,0x67(%esi)
 80484a6:	65 74 73             	gs je  804851c <_init-0x218>
 80484a9:	00 74 6d 70          	add    %dh,0x70(%ebp,%ebp,2)
 80484ad:	66 69 6c 65 00 5f 5f 	imul   $0x5f5f,0x0(%ebp,%eiz,2),%bp
 80484b4:	65 72 72             	gs jb  8048529 <_init-0x20b>
 80484b7:	6e                   	outsb  %ds:(%esi),(%dx)
 80484b8:	6f                   	outsl  %ds:(%esi),(%dx)
 80484b9:	5f                   	pop    %edi
 80484ba:	6c                   	insb   (%dx),%es:(%edi)
 80484bb:	6f                   	outsl  %ds:(%esi),(%dx)
 80484bc:	63 61 74             	arpl   %sp,0x74(%ecx)
 80484bf:	69 6f 6e 00 73 74 64 	imul   $0x64747300,0x6e(%edi),%ebp
 80484c6:	6f                   	outsl  %ds:(%esi),(%dx)
 80484c7:	75 74                	jne    804853d <_init-0x1f7>
 80484c9:	00 66 70             	add    %ah,0x70(%esi)
 80484cc:	75 74                	jne    8048542 <_init-0x1f2>
 80484ce:	63 00                	arpl   %ax,(%eax)
 80484d0:	66 63 6c 6f 73       	data16 arpl %bp,0x73(%edi,%ebp,2)
 80484d5:	65 00 73 74          	add    %dh,%gs:0x74(%ebx)
 80484d9:	72 63                	jb     804853e <_init-0x1f6>
 80484db:	61                   	popa   
 80484dc:	74 00                	je     80484de <_init-0x256>
 80484de:	5f                   	pop    %edi
 80484df:	5f                   	pop    %edi
 80484e0:	63 74 79 70          	arpl   %si,0x70(%ecx,%edi,2)
 80484e4:	65 5f                	gs pop %edi
 80484e6:	62 5f 6c             	bound  %ebx,0x6c(%edi)
 80484e9:	6f                   	outsl  %ds:(%esi),(%dx)
 80484ea:	63 00                	arpl   %ax,(%eax)
 80484ec:	67 65 74 65          	addr16 gs je 8048555 <_init-0x1df>
 80484f0:	6e                   	outsb  %ds:(%esi),(%dx)
 80484f1:	76 00                	jbe    80484f3 <_init-0x241>
 80484f3:	73 79                	jae    804856e <_init-0x1c6>
 80484f5:	73 74                	jae    804856b <_init-0x1c9>
 80484f7:	65 6d                	gs insl (%dx),%es:(%edi)
 80484f9:	00 67 65             	add    %ah,0x65(%edi)
 80484fc:	74 68                	je     8048566 <_init-0x1ce>
 80484fe:	6f                   	outsl  %ds:(%esi),(%dx)
 80484ff:	73 74                	jae    8048575 <_init-0x1bf>
 8048501:	62 79 6e             	bound  %edi,0x6e(%ecx)
 8048504:	61                   	popa   
 8048505:	6d                   	insl   (%dx),%es:(%edi)
 8048506:	65 00 64 75 70       	add    %ah,%gs:0x70(%ebp,%esi,2)
 804850b:	00 66 77             	add    %ah,0x77(%esi)
 804850e:	72 69                	jb     8048579 <_init-0x1bb>
 8048510:	74 65                	je     8048577 <_init-0x1bd>
 8048512:	00 62 63             	add    %ah,0x63(%edx)
 8048515:	6f                   	outsl  %ds:(%esi),(%dx)
 8048516:	70 79                	jo     8048591 <_init-0x1a3>
 8048518:	00 66 70             	add    %ah,0x70(%esi)
 804851b:	72 69                	jb     8048586 <_init-0x1ae>
 804851d:	6e                   	outsb  %ds:(%esi),(%dx)
 804851e:	74 66                	je     8048586 <_init-0x1ae>
 8048520:	00 73 6c             	add    %dh,0x6c(%ebx)
 8048523:	65 65 70 00          	gs gs jo 8048527 <_init-0x20d>
 8048527:	5f                   	pop    %edi
 8048528:	5f                   	pop    %edi
 8048529:	6c                   	insb   (%dx),%es:(%edi)
 804852a:	69 62 63 5f 73 74 61 	imul   $0x6174735f,0x63(%edx),%esp
 8048531:	72 74                	jb     80485a7 <_init-0x18d>
 8048533:	5f                   	pop    %edi
 8048534:	6d                   	insl   (%dx),%es:(%edi)
 8048535:	61                   	popa   
 8048536:	69 6e 00 5f 5f 67 6d 	imul   $0x6d675f5f,0x0(%esi),%ebp
 804853d:	6f                   	outsl  %ds:(%esi),(%dx)
 804853e:	6e                   	outsb  %ds:(%esi),(%dx)
 804853f:	5f                   	pop    %edi
 8048540:	73 74                	jae    80485b6 <_init-0x17e>
 8048542:	61                   	popa   
 8048543:	72 74                	jb     80485b9 <_init-0x17b>
 8048545:	5f                   	pop    %edi
 8048546:	5f                   	pop    %edi
 8048547:	00 47 4c             	add    %al,0x4c(%edi)
 804854a:	49                   	dec    %ecx
 804854b:	42                   	inc    %edx
 804854c:	43                   	inc    %ebx
 804854d:	5f                   	pop    %edi
 804854e:	32 2e                	xor    (%esi),%ch
 8048550:	33 00                	xor    (%eax),%eax
 8048552:	47                   	inc    %edi
 8048553:	4c                   	dec    %esp
 8048554:	49                   	dec    %ecx
 8048555:	42                   	inc    %edx
 8048556:	43                   	inc    %ebx
 8048557:	5f                   	pop    %edi
 8048558:	32 2e                	xor    (%esi),%ch
 804855a:	37                   	aaa    
 804855b:	00 47 4c             	add    %al,0x4c(%edi)
 804855e:	49                   	dec    %ecx
 804855f:	42                   	inc    %edx
 8048560:	43                   	inc    %ebx
 8048561:	5f                   	pop    %edi
 8048562:	32 2e                	xor    (%esi),%ch
 8048564:	31 00                	xor    %eax,(%eax)
 8048566:	47                   	inc    %edi
 8048567:	4c                   	dec    %esp
 8048568:	49                   	dec    %ecx
 8048569:	42                   	inc    %edx
 804856a:	43                   	inc    %ebx
 804856b:	5f                   	pop    %edi
 804856c:	32 2e                	xor    (%esi),%ch
 804856e:	30 00                	xor    %al,(%eax)

Disassembly of section .gnu.version:

08048570 <.gnu.version>:
 8048570:	00 00                	add    %al,(%eax)
 8048572:	02 00                	add    (%eax),%al
 8048574:	02 00                	add    (%eax),%al
 8048576:	02 00                	add    (%eax),%al
 8048578:	02 00                	add    (%eax),%al
 804857a:	02 00                	add    (%eax),%al
 804857c:	02 00                	add    (%eax),%al
 804857e:	03 00                	add    (%eax),%eax
 8048580:	02 00                	add    (%eax),%al
 8048582:	02 00                	add    (%eax),%al
 8048584:	02 00                	add    (%eax),%al
 8048586:	02 00                	add    (%eax),%al
 8048588:	02 00                	add    (%eax),%al
 804858a:	02 00                	add    (%eax),%al
 804858c:	02 00                	add    (%eax),%al
 804858e:	02 00                	add    (%eax),%al
 8048590:	02 00                	add    (%eax),%al
 8048592:	02 00                	add    (%eax),%al
 8048594:	00 00                	add    %al,(%eax)
 8048596:	02 00                	add    (%eax),%al
 8048598:	02 00                	add    (%eax),%al
 804859a:	02 00                	add    (%eax),%al
 804859c:	02 00                	add    (%eax),%al
 804859e:	04 00                	add    $0x0,%al
 80485a0:	03 00                	add    (%eax),%eax
 80485a2:	02 00                	add    (%eax),%al
 80485a4:	02 00                	add    (%eax),%al
 80485a6:	02 00                	add    (%eax),%al
 80485a8:	03 00                	add    (%eax),%eax
 80485aa:	02 00                	add    (%eax),%al
 80485ac:	02 00                	add    (%eax),%al
 80485ae:	02 00                	add    (%eax),%al
 80485b0:	02 00                	add    (%eax),%al
 80485b2:	02 00                	add    (%eax),%al
 80485b4:	05 00 02 00 01       	add    $0x1000200,%eax
 80485b9:	00 02                	add    %al,(%edx)
	...

Disassembly of section .gnu.version_r:

080485bc <.gnu.version_r>:
 80485bc:	01 00                	add    %eax,(%eax)
 80485be:	04 00                	add    $0x0,%al
 80485c0:	01 00                	add    %eax,(%eax)
 80485c2:	00 00                	add    %al,(%eax)
 80485c4:	10 00                	adc    %al,(%eax)
 80485c6:	00 00                	add    %al,(%eax)
 80485c8:	00 00                	add    %al,(%eax)
 80485ca:	00 00                	add    %al,(%eax)
 80485cc:	13 69 69             	adc    0x69(%ecx),%ebp
 80485cf:	0d 00 00 05 00       	or     $0x50000,%eax
 80485d4:	30 01                	xor    %al,(%ecx)
 80485d6:	00 00                	add    %al,(%eax)
 80485d8:	10 00                	adc    %al,(%eax)
 80485da:	00 00                	add    %al,(%eax)
 80485dc:	17                   	pop    %ss
 80485dd:	69 69 0d 00 00 04 00 	imul   $0x40000,0xd(%ecx),%ebp
 80485e4:	3a 01                	cmp    (%ecx),%al
 80485e6:	00 00                	add    %al,(%eax)
 80485e8:	10 00                	adc    %al,(%eax)
 80485ea:	00 00                	add    %al,(%eax)
 80485ec:	11 69 69             	adc    %ebp,0x69(%ecx)
 80485ef:	0d 00 00 03 00       	or     $0x30000,%eax
 80485f4:	44                   	inc    %esp
 80485f5:	01 00                	add    %eax,(%eax)
 80485f7:	00 10                	add    %dl,(%eax)
 80485f9:	00 00                	add    %al,(%eax)
 80485fb:	00 10                	add    %dl,(%eax)
 80485fd:	69 69 0d 00 00 02 00 	imul   $0x20000,0xd(%ecx),%ebp
 8048604:	4e                   	dec    %esi
 8048605:	01 00                	add    %eax,(%eax)
 8048607:	00 00                	add    %al,(%eax)
 8048609:	00 00                	add    %al,(%eax)
	...

Disassembly of section .rel.dyn:

0804860c <.rel.dyn>:
 804860c:	f4                   	hlt    
 804860d:	b0 04                	mov    $0x4,%al
 804860f:	08 06                	or     %al,(%esi)
 8048611:	12 00                	adc    (%eax),%al
 8048613:	00 80 b7 04 08 05    	add    %al,0x50804b7(%eax)
 8048619:	25 00 00 a0 b7       	and    $0xb7a00000,%eax
 804861e:	04 08                	add    $0x8,%al
 8048620:	05                   	.byte 0x5
 8048621:	23 00                	and    (%eax),%eax
	...

Disassembly of section .rel.plt:

08048624 <.rel.plt>:
 8048624:	04 b1                	add    $0xb1,%al
 8048626:	04 08                	add    $0x8,%al
 8048628:	07                   	pop    %es
 8048629:	01 00                	add    %eax,(%eax)
 804862b:	00 08                	add    %cl,(%eax)
 804862d:	b1 04                	mov    $0x4,%cl
 804862f:	08 07                	or     %al,(%edi)
 8048631:	02 00                	add    (%eax),%al
 8048633:	00 0c b1             	add    %cl,(%ecx,%esi,4)
 8048636:	04 08                	add    $0x8,%al
 8048638:	07                   	pop    %es
 8048639:	03 00                	add    (%eax),%eax
 804863b:	00 10                	add    %dl,(%eax)
 804863d:	b1 04                	mov    $0x4,%cl
 804863f:	08 07                	or     %al,(%edi)
 8048641:	04 00                	add    $0x0,%al
 8048643:	00 14 b1             	add    %dl,(%ecx,%esi,4)
 8048646:	04 08                	add    $0x8,%al
 8048648:	07                   	pop    %es
 8048649:	05 00 00 18 b1       	add    $0xb1180000,%eax
 804864e:	04 08                	add    $0x8,%al
 8048650:	07                   	pop    %es
 8048651:	06                   	push   %es
 8048652:	00 00                	add    %al,(%eax)
 8048654:	1c b1                	sbb    $0xb1,%al
 8048656:	04 08                	add    $0x8,%al
 8048658:	07                   	pop    %es
 8048659:	07                   	pop    %es
 804865a:	00 00                	add    %al,(%eax)
 804865c:	20 b1 04 08 07 08    	and    %dh,0x8070804(%ecx)
 8048662:	00 00                	add    %al,(%eax)
 8048664:	24 b1                	and    $0xb1,%al
 8048666:	04 08                	add    $0x8,%al
 8048668:	07                   	pop    %es
 8048669:	09 00                	or     %eax,(%eax)
 804866b:	00 28                	add    %ch,(%eax)
 804866d:	b1 04                	mov    $0x4,%cl
 804866f:	08 07                	or     %al,(%edi)
 8048671:	0a 00                	or     (%eax),%al
 8048673:	00 2c b1             	add    %ch,(%ecx,%esi,4)
 8048676:	04 08                	add    $0x8,%al
 8048678:	07                   	pop    %es
 8048679:	0b 00                	or     (%eax),%eax
 804867b:	00 30                	add    %dh,(%eax)
 804867d:	b1 04                	mov    $0x4,%cl
 804867f:	08 07                	or     %al,(%edi)
 8048681:	0c 00                	or     $0x0,%al
 8048683:	00 34 b1             	add    %dh,(%ecx,%esi,4)
 8048686:	04 08                	add    $0x8,%al
 8048688:	07                   	pop    %es
 8048689:	0d 00 00 38 b1       	or     $0xb1380000,%eax
 804868e:	04 08                	add    $0x8,%al
 8048690:	07                   	pop    %es
 8048691:	0e                   	push   %cs
 8048692:	00 00                	add    %al,(%eax)
 8048694:	3c b1                	cmp    $0xb1,%al
 8048696:	04 08                	add    $0x8,%al
 8048698:	07                   	pop    %es
 8048699:	0f 00 00             	sldt   (%eax)
 804869c:	40                   	inc    %eax
 804869d:	b1 04                	mov    $0x4,%cl
 804869f:	08 07                	or     %al,(%edi)
 80486a1:	10 00                	adc    %al,(%eax)
 80486a3:	00 44 b1 04          	add    %al,0x4(%ecx,%esi,4)
 80486a7:	08 07                	or     %al,(%edi)
 80486a9:	11 00                	adc    %eax,(%eax)
 80486ab:	00 48 b1             	add    %cl,-0x4f(%eax)
 80486ae:	04 08                	add    $0x8,%al
 80486b0:	07                   	pop    %es
 80486b1:	12 00                	adc    (%eax),%al
 80486b3:	00 4c b1 04          	add    %cl,0x4(%ecx,%esi,4)
 80486b7:	08 07                	or     %al,(%edi)
 80486b9:	13 00                	adc    (%eax),%eax
 80486bb:	00 50 b1             	add    %dl,-0x4f(%eax)
 80486be:	04 08                	add    $0x8,%al
 80486c0:	07                   	pop    %es
 80486c1:	14 00                	adc    $0x0,%al
 80486c3:	00 54 b1 04          	add    %dl,0x4(%ecx,%esi,4)
 80486c7:	08 07                	or     %al,(%edi)
 80486c9:	15 00 00 58 b1       	adc    $0xb1580000,%eax
 80486ce:	04 08                	add    $0x8,%al
 80486d0:	07                   	pop    %es
 80486d1:	16                   	push   %ss
 80486d2:	00 00                	add    %al,(%eax)
 80486d4:	5c                   	pop    %esp
 80486d5:	b1 04                	mov    $0x4,%cl
 80486d7:	08 07                	or     %al,(%edi)
 80486d9:	17                   	pop    %ss
 80486da:	00 00                	add    %al,(%eax)
 80486dc:	60                   	pusha  
 80486dd:	b1 04                	mov    $0x4,%cl
 80486df:	08 07                	or     %al,(%edi)
 80486e1:	18 00                	sbb    %al,(%eax)
 80486e3:	00 64 b1 04          	add    %ah,0x4(%ecx,%esi,4)
 80486e7:	08 07                	or     %al,(%edi)
 80486e9:	19 00                	sbb    %eax,(%eax)
 80486eb:	00 68 b1             	add    %ch,-0x4f(%eax)
 80486ee:	04 08                	add    $0x8,%al
 80486f0:	07                   	pop    %es
 80486f1:	1a 00                	sbb    (%eax),%al
 80486f3:	00 6c b1 04          	add    %ch,0x4(%ecx,%esi,4)
 80486f7:	08 07                	or     %al,(%edi)
 80486f9:	1b 00                	sbb    (%eax),%eax
 80486fb:	00 70 b1             	add    %dh,-0x4f(%eax)
 80486fe:	04 08                	add    $0x8,%al
 8048700:	07                   	pop    %es
 8048701:	1c 00                	sbb    $0x0,%al
 8048703:	00 74 b1 04          	add    %dh,0x4(%ecx,%esi,4)
 8048707:	08 07                	or     %al,(%edi)
 8048709:	1d 00 00 78 b1       	sbb    $0xb1780000,%eax
 804870e:	04 08                	add    $0x8,%al
 8048710:	07                   	pop    %es
 8048711:	1e                   	push   %ds
 8048712:	00 00                	add    %al,(%eax)
 8048714:	7c b1                	jl     80486c7 <_init-0x6d>
 8048716:	04 08                	add    $0x8,%al
 8048718:	07                   	pop    %es
 8048719:	1f                   	pop    %ds
 804871a:	00 00                	add    %al,(%eax)
 804871c:	80 b1 04 08 07 20 00 	xorb   $0x0,0x20070804(%ecx)
 8048723:	00 84 b1 04 08 07 21 	add    %al,0x21070804(%ecx,%esi,4)
 804872a:	00 00                	add    %al,(%eax)
 804872c:	88 b1 04 08 07 22    	mov    %dh,0x22070804(%ecx)
	...

Disassembly of section .init:

08048734 <_init>:
 8048734:	53                   	push   %ebx
 8048735:	83 ec 08             	sub    $0x8,%esp
 8048738:	e8 83 02 00 00       	call   80489c0 <__x86.get_pc_thunk.bx>
 804873d:	81 c3 bb 29 00 00    	add    $0x29bb,%ebx
 8048743:	8b 83 fc ff ff ff    	mov    -0x4(%ebx),%eax
 8048749:	85 c0                	test   %eax,%eax
 804874b:	74 05                	je     8048752 <_init+0x1e>
 804874d:	e8 2e 01 00 00       	call   8048880 <__gmon_start__@plt>
 8048752:	83 c4 08             	add    $0x8,%esp
 8048755:	5b                   	pop    %ebx
 8048756:	c3                   	ret    

Disassembly of section .plt:

08048760 <cuserid@plt-0x10>:
 8048760:	ff 35 fc b0 04 08    	pushl  0x804b0fc
 8048766:	ff 25 00 b1 04 08    	jmp    *0x804b100
 804876c:	00 00                	add    %al,(%eax)
	...

08048770 <cuserid@plt>:
 8048770:	ff 25 04 b1 04 08    	jmp    *0x804b104
 8048776:	68 00 00 00 00       	push   $0x0
 804877b:	e9 e0 ff ff ff       	jmp    8048760 <_init+0x2c>

08048780 <printf@plt>:
 8048780:	ff 25 08 b1 04 08    	jmp    *0x804b108
 8048786:	68 08 00 00 00       	push   $0x8
 804878b:	e9 d0 ff ff ff       	jmp    8048760 <_init+0x2c>

08048790 <fflush@plt>:
 8048790:	ff 25 0c b1 04 08    	jmp    *0x804b10c
 8048796:	68 10 00 00 00       	push   $0x10
 804879b:	e9 c0 ff ff ff       	jmp    8048760 <_init+0x2c>

080487a0 <dup@plt>:
 80487a0:	ff 25 10 b1 04 08    	jmp    *0x804b110
 80487a6:	68 18 00 00 00       	push   $0x18
 80487ab:	e9 b0 ff ff ff       	jmp    8048760 <_init+0x2c>

080487b0 <inet_pton@plt>:
 80487b0:	ff 25 14 b1 04 08    	jmp    *0x804b114
 80487b6:	68 20 00 00 00       	push   $0x20
 80487bb:	e9 a0 ff ff ff       	jmp    8048760 <_init+0x2c>

080487c0 <fgets@plt>:
 80487c0:	ff 25 18 b1 04 08    	jmp    *0x804b118
 80487c6:	68 28 00 00 00       	push   $0x28
 80487cb:	e9 90 ff ff ff       	jmp    8048760 <_init+0x2c>

080487d0 <fclose@plt>:
 80487d0:	ff 25 1c b1 04 08    	jmp    *0x804b11c
 80487d6:	68 30 00 00 00       	push   $0x30
 80487db:	e9 80 ff ff ff       	jmp    8048760 <_init+0x2c>

080487e0 <signal@plt>:
 80487e0:	ff 25 20 b1 04 08    	jmp    *0x804b120
 80487e6:	68 38 00 00 00       	push   $0x38
 80487eb:	e9 70 ff ff ff       	jmp    8048760 <_init+0x2c>

080487f0 <sleep@plt>:
 80487f0:	ff 25 24 b1 04 08    	jmp    *0x804b124
 80487f6:	68 40 00 00 00       	push   $0x40
 80487fb:	e9 60 ff ff ff       	jmp    8048760 <_init+0x2c>

08048800 <rewind@plt>:
 8048800:	ff 25 28 b1 04 08    	jmp    *0x804b128
 8048806:	68 48 00 00 00       	push   $0x48
 804880b:	e9 50 ff ff ff       	jmp    8048760 <_init+0x2c>

08048810 <fwrite@plt>:
 8048810:	ff 25 2c b1 04 08    	jmp    *0x804b12c
 8048816:	68 50 00 00 00       	push   $0x50
 804881b:	e9 40 ff ff ff       	jmp    8048760 <_init+0x2c>

08048820 <bcopy@plt>:
 8048820:	ff 25 30 b1 04 08    	jmp    *0x804b130
 8048826:	68 58 00 00 00       	push   $0x58
 804882b:	e9 30 ff ff ff       	jmp    8048760 <_init+0x2c>

08048830 <strcat@plt>:
 8048830:	ff 25 34 b1 04 08    	jmp    *0x804b134
 8048836:	68 60 00 00 00       	push   $0x60
 804883b:	e9 20 ff ff ff       	jmp    8048760 <_init+0x2c>

08048840 <strcpy@plt>:
 8048840:	ff 25 38 b1 04 08    	jmp    *0x804b138
 8048846:	68 68 00 00 00       	push   $0x68
 804884b:	e9 10 ff ff ff       	jmp    8048760 <_init+0x2c>

08048850 <getenv@plt>:
 8048850:	ff 25 3c b1 04 08    	jmp    *0x804b13c
 8048856:	68 70 00 00 00       	push   $0x70
 804885b:	e9 00 ff ff ff       	jmp    8048760 <_init+0x2c>

08048860 <puts@plt>:
 8048860:	ff 25 40 b1 04 08    	jmp    *0x804b140
 8048866:	68 78 00 00 00       	push   $0x78
 804886b:	e9 f0 fe ff ff       	jmp    8048760 <_init+0x2c>

08048870 <system@plt>:
 8048870:	ff 25 44 b1 04 08    	jmp    *0x804b144
 8048876:	68 80 00 00 00       	push   $0x80
 804887b:	e9 e0 fe ff ff       	jmp    8048760 <_init+0x2c>

08048880 <__gmon_start__@plt>:
 8048880:	ff 25 48 b1 04 08    	jmp    *0x804b148
 8048886:	68 88 00 00 00       	push   $0x88
 804888b:	e9 d0 fe ff ff       	jmp    8048760 <_init+0x2c>

08048890 <exit@plt>:
 8048890:	ff 25 4c b1 04 08    	jmp    *0x804b14c
 8048896:	68 90 00 00 00       	push   $0x90
 804889b:	e9 c0 fe ff ff       	jmp    8048760 <_init+0x2c>

080488a0 <__libc_start_main@plt>:
 80488a0:	ff 25 50 b1 04 08    	jmp    *0x804b150
 80488a6:	68 98 00 00 00       	push   $0x98
 80488ab:	e9 b0 fe ff ff       	jmp    8048760 <_init+0x2c>

080488b0 <fprintf@plt>:
 80488b0:	ff 25 54 b1 04 08    	jmp    *0x804b154
 80488b6:	68 a0 00 00 00       	push   $0xa0
 80488bb:	e9 a0 fe ff ff       	jmp    8048760 <_init+0x2c>

080488c0 <write@plt>:
 80488c0:	ff 25 58 b1 04 08    	jmp    *0x804b158
 80488c6:	68 a8 00 00 00       	push   $0xa8
 80488cb:	e9 90 fe ff ff       	jmp    8048760 <_init+0x2c>

080488d0 <__isoc99_sscanf@plt>:
 80488d0:	ff 25 5c b1 04 08    	jmp    *0x804b15c
 80488d6:	68 b0 00 00 00       	push   $0xb0
 80488db:	e9 80 fe ff ff       	jmp    8048760 <_init+0x2c>

080488e0 <fopen@plt>:
 80488e0:	ff 25 60 b1 04 08    	jmp    *0x804b160
 80488e6:	68 b8 00 00 00       	push   $0xb8
 80488eb:	e9 70 fe ff ff       	jmp    8048760 <_init+0x2c>

080488f0 <__errno_location@plt>:
 80488f0:	ff 25 64 b1 04 08    	jmp    *0x804b164
 80488f6:	68 c0 00 00 00       	push   $0xc0
 80488fb:	e9 60 fe ff ff       	jmp    8048760 <_init+0x2c>

08048900 <fputc@plt>:
 8048900:	ff 25 68 b1 04 08    	jmp    *0x804b168
 8048906:	68 c8 00 00 00       	push   $0xc8
 804890b:	e9 50 fe ff ff       	jmp    8048760 <_init+0x2c>

08048910 <sprintf@plt>:
 8048910:	ff 25 6c b1 04 08    	jmp    *0x804b16c
 8048916:	68 d0 00 00 00       	push   $0xd0
 804891b:	e9 40 fe ff ff       	jmp    8048760 <_init+0x2c>

08048920 <tmpfile@plt>:
 8048920:	ff 25 70 b1 04 08    	jmp    *0x804b170
 8048926:	68 d8 00 00 00       	push   $0xd8
 804892b:	e9 30 fe ff ff       	jmp    8048760 <_init+0x2c>

08048930 <socket@plt>:
 8048930:	ff 25 74 b1 04 08    	jmp    *0x804b174
 8048936:	68 e0 00 00 00       	push   $0xe0
 804893b:	e9 20 fe ff ff       	jmp    8048760 <_init+0x2c>

08048940 <gethostbyname@plt>:
 8048940:	ff 25 78 b1 04 08    	jmp    *0x804b178
 8048946:	68 e8 00 00 00       	push   $0xe8
 804894b:	e9 10 fe ff ff       	jmp    8048760 <_init+0x2c>

08048950 <strtol@plt>:
 8048950:	ff 25 7c b1 04 08    	jmp    *0x804b17c
 8048956:	68 f0 00 00 00       	push   $0xf0
 804895b:	e9 00 fe ff ff       	jmp    8048760 <_init+0x2c>

08048960 <connect@plt>:
 8048960:	ff 25 80 b1 04 08    	jmp    *0x804b180
 8048966:	68 f8 00 00 00       	push   $0xf8
 804896b:	e9 f0 fd ff ff       	jmp    8048760 <_init+0x2c>

08048970 <close@plt>:
 8048970:	ff 25 84 b1 04 08    	jmp    *0x804b184
 8048976:	68 00 01 00 00       	push   $0x100
 804897b:	e9 e0 fd ff ff       	jmp    8048760 <_init+0x2c>

08048980 <__ctype_b_loc@plt>:
 8048980:	ff 25 88 b1 04 08    	jmp    *0x804b188
 8048986:	68 08 01 00 00       	push   $0x108
 804898b:	e9 d0 fd ff ff       	jmp    8048760 <_init+0x2c>

Disassembly of section .text:

08048990 <_start>:
 8048990:	31 ed                	xor    %ebp,%ebp
 8048992:	5e                   	pop    %esi
 8048993:	89 e1                	mov    %esp,%ecx
 8048995:	83 e4 f0             	and    $0xfffffff0,%esp
 8048998:	50                   	push   %eax
 8048999:	54                   	push   %esp
 804899a:	52                   	push   %edx
 804899b:	68 10 9a 04 08       	push   $0x8049a10
 80489a0:	68 a0 99 04 08       	push   $0x80499a0
 80489a5:	51                   	push   %ecx
 80489a6:	56                   	push   %esi
 80489a7:	68 8b 8a 04 08       	push   $0x8048a8b
 80489ac:	e8 ef fe ff ff       	call   80488a0 <__libc_start_main@plt>
 80489b1:	f4                   	hlt    
 80489b2:	66 90                	xchg   %ax,%ax
 80489b4:	66 90                	xchg   %ax,%ax
 80489b6:	66 90                	xchg   %ax,%ax
 80489b8:	66 90                	xchg   %ax,%ax
 80489ba:	66 90                	xchg   %ax,%ax
 80489bc:	66 90                	xchg   %ax,%ax
 80489be:	66 90                	xchg   %ax,%ax

080489c0 <__x86.get_pc_thunk.bx>:
 80489c0:	8b 1c 24             	mov    (%esp),%ebx
 80489c3:	c3                   	ret    
 80489c4:	66 90                	xchg   %ax,%ax
 80489c6:	66 90                	xchg   %ax,%ax
 80489c8:	66 90                	xchg   %ax,%ax
 80489ca:	66 90                	xchg   %ax,%ax
 80489cc:	66 90                	xchg   %ax,%ax
 80489ce:	66 90                	xchg   %ax,%ax

080489d0 <deregister_tm_clones>:
 80489d0:	b8 47 b7 04 08       	mov    $0x804b747,%eax
 80489d5:	2d 44 b7 04 08       	sub    $0x804b744,%eax
 80489da:	83 f8 06             	cmp    $0x6,%eax
 80489dd:	76 1a                	jbe    80489f9 <deregister_tm_clones+0x29>
 80489df:	b8 00 00 00 00       	mov    $0x0,%eax
 80489e4:	85 c0                	test   %eax,%eax
 80489e6:	74 11                	je     80489f9 <deregister_tm_clones+0x29>
 80489e8:	55                   	push   %ebp
 80489e9:	89 e5                	mov    %esp,%ebp
 80489eb:	83 ec 14             	sub    $0x14,%esp
 80489ee:	68 44 b7 04 08       	push   $0x804b744
 80489f3:	ff d0                	call   *%eax
 80489f5:	83 c4 10             	add    $0x10,%esp
 80489f8:	c9                   	leave  
 80489f9:	f3 c3                	repz ret 
 80489fb:	90                   	nop
 80489fc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

08048a00 <register_tm_clones>:
 8048a00:	b8 44 b7 04 08       	mov    $0x804b744,%eax
 8048a05:	2d 44 b7 04 08       	sub    $0x804b744,%eax
 8048a0a:	c1 f8 02             	sar    $0x2,%eax
 8048a0d:	89 c2                	mov    %eax,%edx
 8048a0f:	c1 ea 1f             	shr    $0x1f,%edx
 8048a12:	01 d0                	add    %edx,%eax
 8048a14:	d1 f8                	sar    %eax
 8048a16:	74 1b                	je     8048a33 <register_tm_clones+0x33>
 8048a18:	ba 00 00 00 00       	mov    $0x0,%edx
 8048a1d:	85 d2                	test   %edx,%edx
 8048a1f:	74 12                	je     8048a33 <register_tm_clones+0x33>
 8048a21:	55                   	push   %ebp
 8048a22:	89 e5                	mov    %esp,%ebp
 8048a24:	83 ec 10             	sub    $0x10,%esp
 8048a27:	50                   	push   %eax
 8048a28:	68 44 b7 04 08       	push   $0x804b744
 8048a2d:	ff d2                	call   *%edx
 8048a2f:	83 c4 10             	add    $0x10,%esp
 8048a32:	c9                   	leave  
 8048a33:	f3 c3                	repz ret 
 8048a35:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8048a39:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

08048a40 <__do_global_dtors_aux>:
 8048a40:	80 3d a4 b7 04 08 00 	cmpb   $0x0,0x804b7a4
 8048a47:	75 13                	jne    8048a5c <__do_global_dtors_aux+0x1c>
 8048a49:	55                   	push   %ebp
 8048a4a:	89 e5                	mov    %esp,%ebp
 8048a4c:	83 ec 08             	sub    $0x8,%esp
 8048a4f:	e8 7c ff ff ff       	call   80489d0 <deregister_tm_clones>
 8048a54:	c6 05 a4 b7 04 08 01 	movb   $0x1,0x804b7a4
 8048a5b:	c9                   	leave  
 8048a5c:	f3 c3                	repz ret 
 8048a5e:	66 90                	xchg   %ax,%ax

08048a60 <frame_dummy>:
 8048a60:	b8 08 b0 04 08       	mov    $0x804b008,%eax
 8048a65:	8b 10                	mov    (%eax),%edx
 8048a67:	85 d2                	test   %edx,%edx
 8048a69:	75 05                	jne    8048a70 <frame_dummy+0x10>
 8048a6b:	eb 93                	jmp    8048a00 <register_tm_clones>
 8048a6d:	8d 76 00             	lea    0x0(%esi),%esi
 8048a70:	ba 00 00 00 00       	mov    $0x0,%edx
 8048a75:	85 d2                	test   %edx,%edx
 8048a77:	74 f2                	je     8048a6b <frame_dummy+0xb>
 8048a79:	55                   	push   %ebp
 8048a7a:	89 e5                	mov    %esp,%ebp
 8048a7c:	83 ec 14             	sub    $0x14,%esp
 8048a7f:	50                   	push   %eax
 8048a80:	ff d2                	call   *%edx
 8048a82:	83 c4 10             	add    $0x10,%esp
 8048a85:	c9                   	leave  
 8048a86:	e9 75 ff ff ff       	jmp    8048a00 <register_tm_clones>

08048a8b <main>:
 8048a8b:	8d 4c 24 04          	lea    0x4(%esp),%ecx
 8048a8f:	83 e4 f0             	and    $0xfffffff0,%esp
 8048a92:	ff 71 fc             	pushl  -0x4(%ecx)
 8048a95:	55                   	push   %ebp
 8048a96:	89 e5                	mov    %esp,%ebp
 8048a98:	53                   	push   %ebx
 8048a99:	51                   	push   %ecx
 8048a9a:	8b 01                	mov    (%ecx),%eax
 8048a9c:	8b 59 04             	mov    0x4(%ecx),%ebx
 8048a9f:	83 f8 01             	cmp    $0x1,%eax
 8048aa2:	75 0c                	jne    8048ab0 <main+0x25>
 8048aa4:	a1 80 b7 04 08       	mov    0x804b780,%eax
 8048aa9:	a3 ac b7 04 08       	mov    %eax,0x804b7ac
 8048aae:	eb 5a                	jmp    8048b0a <main+0x7f>
 8048ab0:	83 f8 02             	cmp    $0x2,%eax
 8048ab3:	75 3a                	jne    8048aef <main+0x64>
 8048ab5:	83 ec 08             	sub    $0x8,%esp
 8048ab8:	68 07 9e 04 08       	push   $0x8049e07
 8048abd:	ff 73 04             	pushl  0x4(%ebx)
 8048ac0:	e8 1b fe ff ff       	call   80488e0 <fopen@plt>
 8048ac5:	a3 ac b7 04 08       	mov    %eax,0x804b7ac
 8048aca:	83 c4 10             	add    $0x10,%esp
 8048acd:	85 c0                	test   %eax,%eax
 8048acf:	75 39                	jne    8048b0a <main+0x7f>
 8048ad1:	83 ec 04             	sub    $0x4,%esp
 8048ad4:	ff 73 04             	pushl  0x4(%ebx)
 8048ad7:	ff 33                	pushl  (%ebx)
 8048ad9:	68 30 9a 04 08       	push   $0x8049a30
 8048ade:	e8 9d fc ff ff       	call   8048780 <printf@plt>
 8048ae3:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8048aea:	e8 a1 fd ff ff       	call   8048890 <exit@plt>
 8048aef:	83 ec 08             	sub    $0x8,%esp
 8048af2:	ff 33                	pushl  (%ebx)
 8048af4:	68 4d 9a 04 08       	push   $0x8049a4d
 8048af9:	e8 82 fc ff ff       	call   8048780 <printf@plt>
 8048afe:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8048b05:	e8 86 fd ff ff       	call   8048890 <exit@plt>
 8048b0a:	e8 82 06 00 00       	call   8049191 <initialize_bomb>
 8048b0f:	83 ec 0c             	sub    $0xc,%esp
 8048b12:	68 b4 9a 04 08       	push   $0x8049ab4
 8048b17:	e8 44 fd ff ff       	call   8048860 <puts@plt>
 8048b1c:	c7 04 24 f0 9a 04 08 	movl   $0x8049af0,(%esp)
 8048b23:	e8 38 fd ff ff       	call   8048860 <puts@plt>
 8048b28:	e8 17 0d 00 00       	call   8049844 <read_line>
 8048b2d:	89 04 24             	mov    %eax,(%esp)
 8048b30:	e8 ad 00 00 00       	call   8048be2 <phase_1>
 8048b35:	e8 d1 0d 00 00       	call   804990b <phase_defused>
 8048b3a:	c7 04 24 1c 9b 04 08 	movl   $0x8049b1c,(%esp)
 8048b41:	e8 1a fd ff ff       	call   8048860 <puts@plt>
 8048b46:	e8 f9 0c 00 00       	call   8049844 <read_line>
 8048b4b:	89 04 24             	mov    %eax,(%esp)
 8048b4e:	e8 b0 00 00 00       	call   8048c03 <phase_2>
 8048b53:	e8 b3 0d 00 00       	call   804990b <phase_defused>
 8048b58:	c7 04 24 67 9a 04 08 	movl   $0x8049a67,(%esp)
 8048b5f:	e8 fc fc ff ff       	call   8048860 <puts@plt>
 8048b64:	e8 db 0c 00 00       	call   8049844 <read_line>
 8048b69:	89 04 24             	mov    %eax,(%esp)
 8048b6c:	e8 db 00 00 00       	call   8048c4c <phase_3>
 8048b71:	e8 95 0d 00 00       	call   804990b <phase_defused>
 8048b76:	c7 04 24 85 9a 04 08 	movl   $0x8049a85,(%esp)
 8048b7d:	e8 de fc ff ff       	call   8048860 <puts@plt>
 8048b82:	e8 bd 0c 00 00       	call   8049844 <read_line>
 8048b87:	89 04 24             	mov    %eax,(%esp)
 8048b8a:	e8 37 02 00 00       	call   8048dc6 <phase_4>
 8048b8f:	e8 77 0d 00 00       	call   804990b <phase_defused>
 8048b94:	c7 04 24 48 9b 04 08 	movl   $0x8049b48,(%esp)
 8048b9b:	e8 c0 fc ff ff       	call   8048860 <puts@plt>
 8048ba0:	e8 9f 0c 00 00       	call   8049844 <read_line>
 8048ba5:	89 04 24             	mov    %eax,(%esp)
 8048ba8:	e8 62 02 00 00       	call   8048e0f <phase_5>
 8048bad:	e8 59 0d 00 00       	call   804990b <phase_defused>
 8048bb2:	c7 04 24 94 9a 04 08 	movl   $0x8049a94,(%esp)
 8048bb9:	e8 a2 fc ff ff       	call   8048860 <puts@plt>
 8048bbe:	e8 81 0c 00 00       	call   8049844 <read_line>
 8048bc3:	89 04 24             	mov    %eax,(%esp)
 8048bc6:	e8 01 03 00 00       	call   8048ecc <phase_6>
 8048bcb:	e8 3b 0d 00 00       	call   804990b <phase_defused>
 8048bd0:	83 c4 10             	add    $0x10,%esp
 8048bd3:	b8 00 00 00 00       	mov    $0x0,%eax
 8048bd8:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8048bdb:	59                   	pop    %ecx
 8048bdc:	5b                   	pop    %ebx
 8048bdd:	5d                   	pop    %ebp
 8048bde:	8d 61 fc             	lea    -0x4(%ecx),%esp
 8048be1:	c3                   	ret    

08048be2 <phase_1>:
 8048be2:	83 ec 14             	sub    $0x14,%esp
 8048be5:	68 6c 9b 04 08       	push   $0x8049b6c
 8048bea:	ff 74 24 1c          	pushl  0x1c(%esp)
 8048bee:	e8 5d 04 00 00       	call   8049050 <strings_not_equal>
 8048bf3:	83 c4 10             	add    $0x10,%esp
 8048bf6:	85 c0                	test   %eax,%eax
 8048bf8:	74 05                	je     8048bff <phase_1+0x1d>
 8048bfa:	e8 cd 0b 00 00       	call   80497cc <explode_bomb>
 8048bff:	83 c4 0c             	add    $0xc,%esp
 8048c02:	c3                   	ret    

08048c03 <phase_2>:
 8048c03:	55                   	push   %ebp
 8048c04:	57                   	push   %edi
 8048c05:	56                   	push   %esi
 8048c06:	53                   	push   %ebx
 8048c07:	83 ec 34             	sub    $0x34,%esp
 8048c0a:	8d 5c 24 10          	lea    0x10(%esp),%ebx
 8048c0e:	53                   	push   %ebx
 8048c0f:	ff 74 24 4c          	pushl  0x4c(%esp)
 8048c13:	e8 f1 0b 00 00       	call   8049809 <read_six_numbers>
 8048c18:	8d 6c 24 24          	lea    0x24(%esp),%ebp
 8048c1c:	83 c4 10             	add    $0x10,%esp
 8048c1f:	be 00 00 00 00       	mov    $0x0,%esi
 8048c24:	89 df                	mov    %ebx,%edi
 8048c26:	8b 43 0c             	mov    0xc(%ebx),%eax
 8048c29:	39 03                	cmp    %eax,(%ebx)
 8048c2b:	74 05                	je     8048c32 <phase_2+0x2f>
 8048c2d:	e8 9a 0b 00 00       	call   80497cc <explode_bomb>
 8048c32:	03 37                	add    (%edi),%esi
 8048c34:	83 c3 04             	add    $0x4,%ebx
 8048c37:	39 eb                	cmp    %ebp,%ebx
 8048c39:	75 e9                	jne    8048c24 <phase_2+0x21>
 8048c3b:	85 f6                	test   %esi,%esi
 8048c3d:	75 05                	jne    8048c44 <phase_2+0x41>
 8048c3f:	e8 88 0b 00 00       	call   80497cc <explode_bomb>
 8048c44:	83 c4 2c             	add    $0x2c,%esp
 8048c47:	5b                   	pop    %ebx
 8048c48:	5e                   	pop    %esi
 8048c49:	5f                   	pop    %edi
 8048c4a:	5d                   	pop    %ebp
 8048c4b:	c3                   	ret    

08048c4c <phase_3>:
 8048c4c:	83 ec 28             	sub    $0x28,%esp
 8048c4f:	8d 44 24 14          	lea    0x14(%esp),%eax
 8048c53:	50                   	push   %eax
 8048c54:	8d 44 24 17          	lea    0x17(%esp),%eax
 8048c58:	50                   	push   %eax
 8048c59:	8d 44 24 20          	lea    0x20(%esp),%eax
 8048c5d:	50                   	push   %eax
 8048c5e:	68 b6 9b 04 08       	push   $0x8049bb6
 8048c63:	ff 74 24 3c          	pushl  0x3c(%esp)
 8048c67:	e8 64 fc ff ff       	call   80488d0 <__isoc99_sscanf@plt>
 8048c6c:	83 c4 20             	add    $0x20,%esp
 8048c6f:	83 f8 02             	cmp    $0x2,%eax
 8048c72:	7f 05                	jg     8048c79 <phase_3+0x2d>
 8048c74:	e8 53 0b 00 00       	call   80497cc <explode_bomb>
 8048c79:	83 7c 24 0c 07       	cmpl   $0x7,0xc(%esp)
 8048c7e:	0f 87 f2 00 00 00    	ja     8048d76 <phase_3+0x12a>
 8048c84:	8b 44 24 0c          	mov    0xc(%esp),%eax
 8048c88:	ff 24 85 c8 9b 04 08 	jmp    *0x8049bc8(,%eax,4)
 8048c8f:	b8 65 00 00 00       	mov    $0x65,%eax
 8048c94:	81 7c 24 08 da 03 00 	cmpl   $0x3da,0x8(%esp)
 8048c9b:	00 
 8048c9c:	0f 84 de 00 00 00    	je     8048d80 <phase_3+0x134>
 8048ca2:	e8 25 0b 00 00       	call   80497cc <explode_bomb>
 8048ca7:	b8 65 00 00 00       	mov    $0x65,%eax
 8048cac:	e9 cf 00 00 00       	jmp    8048d80 <phase_3+0x134>
 8048cb1:	b8 71 00 00 00       	mov    $0x71,%eax
 8048cb6:	81 7c 24 08 b9 01 00 	cmpl   $0x1b9,0x8(%esp)
 8048cbd:	00 
 8048cbe:	0f 84 bc 00 00 00    	je     8048d80 <phase_3+0x134>
 8048cc4:	e8 03 0b 00 00       	call   80497cc <explode_bomb>
 8048cc9:	b8 71 00 00 00       	mov    $0x71,%eax
 8048cce:	e9 ad 00 00 00       	jmp    8048d80 <phase_3+0x134>
 8048cd3:	b8 79 00 00 00       	mov    $0x79,%eax
 8048cd8:	81 7c 24 08 b9 00 00 	cmpl   $0xb9,0x8(%esp)
 8048cdf:	00 
 8048ce0:	0f 84 9a 00 00 00    	je     8048d80 <phase_3+0x134>
 8048ce6:	e8 e1 0a 00 00       	call   80497cc <explode_bomb>
 8048ceb:	b8 79 00 00 00       	mov    $0x79,%eax
 8048cf0:	e9 8b 00 00 00       	jmp    8048d80 <phase_3+0x134>
 8048cf5:	b8 62 00 00 00       	mov    $0x62,%eax
 8048cfa:	83 7c 24 08 6b       	cmpl   $0x6b,0x8(%esp)
 8048cff:	74 7f                	je     8048d80 <phase_3+0x134>
 8048d01:	e8 c6 0a 00 00       	call   80497cc <explode_bomb>
 8048d06:	b8 62 00 00 00       	mov    $0x62,%eax
 8048d0b:	eb 73                	jmp    8048d80 <phase_3+0x134>
 8048d0d:	b8 7a 00 00 00       	mov    $0x7a,%eax
 8048d12:	81 7c 24 08 56 01 00 	cmpl   $0x156,0x8(%esp)
 8048d19:	00 
 8048d1a:	74 64                	je     8048d80 <phase_3+0x134>
 8048d1c:	e8 ab 0a 00 00       	call   80497cc <explode_bomb>
 8048d21:	b8 7a 00 00 00       	mov    $0x7a,%eax
 8048d26:	eb 58                	jmp    8048d80 <phase_3+0x134>
 8048d28:	b8 76 00 00 00       	mov    $0x76,%eax
 8048d2d:	83 7c 24 08 64       	cmpl   $0x64,0x8(%esp)
 8048d32:	74 4c                	je     8048d80 <phase_3+0x134>
 8048d34:	e8 93 0a 00 00       	call   80497cc <explode_bomb>
 8048d39:	b8 76 00 00 00       	mov    $0x76,%eax
 8048d3e:	eb 40                	jmp    8048d80 <phase_3+0x134>
 8048d40:	b8 6f 00 00 00       	mov    $0x6f,%eax
 8048d45:	81 7c 24 08 e9 02 00 	cmpl   $0x2e9,0x8(%esp)
 8048d4c:	00 
 8048d4d:	74 31                	je     8048d80 <phase_3+0x134>
 8048d4f:	e8 78 0a 00 00       	call   80497cc <explode_bomb>
 8048d54:	b8 6f 00 00 00       	mov    $0x6f,%eax
 8048d59:	eb 25                	jmp    8048d80 <phase_3+0x134>
 8048d5b:	b8 71 00 00 00       	mov    $0x71,%eax
 8048d60:	81 7c 24 08 a8 01 00 	cmpl   $0x1a8,0x8(%esp)
 8048d67:	00 
 8048d68:	74 16                	je     8048d80 <phase_3+0x134>
 8048d6a:	e8 5d 0a 00 00       	call   80497cc <explode_bomb>
 8048d6f:	b8 71 00 00 00       	mov    $0x71,%eax
 8048d74:	eb 0a                	jmp    8048d80 <phase_3+0x134>
 8048d76:	e8 51 0a 00 00       	call   80497cc <explode_bomb>
 8048d7b:	b8 6b 00 00 00       	mov    $0x6b,%eax
 8048d80:	3a 44 24 07          	cmp    0x7(%esp),%al
 8048d84:	74 05                	je     8048d8b <phase_3+0x13f>
 8048d86:	e8 41 0a 00 00       	call   80497cc <explode_bomb>
 8048d8b:	83 c4 1c             	add    $0x1c,%esp
 8048d8e:	c3                   	ret    

08048d8f <func4>:
 8048d8f:	56                   	push   %esi
 8048d90:	53                   	push   %ebx
 8048d91:	83 ec 04             	sub    $0x4,%esp
 8048d94:	8b 5c 24 10          	mov    0x10(%esp),%ebx
 8048d98:	b8 01 00 00 00       	mov    $0x1,%eax
 8048d9d:	83 fb 01             	cmp    $0x1,%ebx
 8048da0:	7e 1e                	jle    8048dc0 <func4+0x31>
 8048da2:	83 ec 0c             	sub    $0xc,%esp
 8048da5:	8d 43 ff             	lea    -0x1(%ebx),%eax
 8048da8:	50                   	push   %eax
 8048da9:	e8 e1 ff ff ff       	call   8048d8f <func4>
 8048dae:	89 c6                	mov    %eax,%esi
 8048db0:	83 eb 02             	sub    $0x2,%ebx
 8048db3:	89 1c 24             	mov    %ebx,(%esp)
 8048db6:	e8 d4 ff ff ff       	call   8048d8f <func4>
 8048dbb:	83 c4 10             	add    $0x10,%esp
 8048dbe:	01 f0                	add    %esi,%eax
 8048dc0:	83 c4 04             	add    $0x4,%esp
 8048dc3:	5b                   	pop    %ebx
 8048dc4:	5e                   	pop    %esi
 8048dc5:	c3                   	ret    

08048dc6 <phase_4>:
 8048dc6:	83 ec 20             	sub    $0x20,%esp
 8048dc9:	8d 44 24 10          	lea    0x10(%esp),%eax
 8048dcd:	50                   	push   %eax
 8048dce:	68 bc 9b 04 08       	push   $0x8049bbc
 8048dd3:	ff 74 24 2c          	pushl  0x2c(%esp)
 8048dd7:	e8 f4 fa ff ff       	call   80488d0 <__isoc99_sscanf@plt>
 8048ddc:	83 c4 10             	add    $0x10,%esp
 8048ddf:	83 f8 01             	cmp    $0x1,%eax
 8048de2:	75 07                	jne    8048deb <phase_4+0x25>
 8048de4:	83 7c 24 0c 00       	cmpl   $0x0,0xc(%esp)
 8048de9:	7f 05                	jg     8048df0 <phase_4+0x2a>
 8048deb:	e8 dc 09 00 00       	call   80497cc <explode_bomb>
 8048df0:	83 ec 0c             	sub    $0xc,%esp
 8048df3:	ff 74 24 18          	pushl  0x18(%esp)
 8048df7:	e8 93 ff ff ff       	call   8048d8f <func4>
 8048dfc:	83 c4 10             	add    $0x10,%esp
 8048dff:	3d 2f 45 00 00       	cmp    $0x452f,%eax
 8048e04:	74 05                	je     8048e0b <phase_4+0x45>
 8048e06:	e8 c1 09 00 00       	call   80497cc <explode_bomb>
 8048e0b:	83 c4 1c             	add    $0x1c,%esp
 8048e0e:	c3                   	ret    

08048e0f <phase_5>:
 8048e0f:	53                   	push   %ebx
 8048e10:	83 ec 24             	sub    $0x24,%esp
 8048e13:	8b 5c 24 2c          	mov    0x2c(%esp),%ebx
 8048e17:	53                   	push   %ebx
 8048e18:	e8 14 02 00 00       	call   8049031 <string_length>
 8048e1d:	83 c4 10             	add    $0x10,%esp
 8048e20:	83 f8 06             	cmp    $0x6,%eax
 8048e23:	74 46                	je     8048e6b <phase_5+0x5c>
 8048e25:	e8 a2 09 00 00       	call   80497cc <explode_bomb>
 8048e2a:	eb 3f                	jmp    8048e6b <phase_5+0x5c>
 8048e2c:	0f b6 14 03          	movzbl (%ebx,%eax,1),%edx
 8048e30:	83 e2 0f             	and    $0xf,%edx
 8048e33:	0f b6 92 e8 9b 04 08 	movzbl 0x8049be8(%edx),%edx
 8048e3a:	88 54 04 09          	mov    %dl,0x9(%esp,%eax,1)
 8048e3e:	83 c0 01             	add    $0x1,%eax
 8048e41:	83 f8 06             	cmp    $0x6,%eax
 8048e44:	75 e6                	jne    8048e2c <phase_5+0x1d>
 8048e46:	c6 44 24 0f 00       	movb   $0x0,0xf(%esp)
 8048e4b:	83 ec 08             	sub    $0x8,%esp
 8048e4e:	68 bf 9b 04 08       	push   $0x8049bbf
 8048e53:	8d 44 24 15          	lea    0x15(%esp),%eax
 8048e57:	50                   	push   %eax
 8048e58:	e8 f3 01 00 00       	call   8049050 <strings_not_equal>
 8048e5d:	83 c4 10             	add    $0x10,%esp
 8048e60:	85 c0                	test   %eax,%eax
 8048e62:	74 0e                	je     8048e72 <phase_5+0x63>
 8048e64:	e8 63 09 00 00       	call   80497cc <explode_bomb>
 8048e69:	eb 07                	jmp    8048e72 <phase_5+0x63>
 8048e6b:	b8 00 00 00 00       	mov    $0x0,%eax
 8048e70:	eb ba                	jmp    8048e2c <phase_5+0x1d>
 8048e72:	83 c4 18             	add    $0x18,%esp
 8048e75:	5b                   	pop    %ebx
 8048e76:	c3                   	ret    

08048e77 <fun6>:
 8048e77:	56                   	push   %esi
 8048e78:	53                   	push   %ebx
 8048e79:	8b 44 24 0c          	mov    0xc(%esp),%eax
 8048e7d:	8b 70 08             	mov    0x8(%eax),%esi
 8048e80:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8048e87:	85 f6                	test   %esi,%esi
 8048e89:	75 2c                	jne    8048eb7 <fun6+0x40>
 8048e8b:	eb 3c                	jmp    8048ec9 <fun6+0x52>
 8048e8d:	89 d1                	mov    %edx,%ecx
 8048e8f:	8b 51 08             	mov    0x8(%ecx),%edx
 8048e92:	85 d2                	test   %edx,%edx
 8048e94:	74 04                	je     8048e9a <fun6+0x23>
 8048e96:	39 1a                	cmp    %ebx,(%edx)
 8048e98:	7f f3                	jg     8048e8d <fun6+0x16>
 8048e9a:	39 d1                	cmp    %edx,%ecx
 8048e9c:	74 05                	je     8048ea3 <fun6+0x2c>
 8048e9e:	89 71 08             	mov    %esi,0x8(%ecx)
 8048ea1:	eb 08                	jmp    8048eab <fun6+0x34>
 8048ea3:	89 f0                	mov    %esi,%eax
 8048ea5:	eb 04                	jmp    8048eab <fun6+0x34>
 8048ea7:	89 c2                	mov    %eax,%edx
 8048ea9:	89 f0                	mov    %esi,%eax
 8048eab:	8b 4e 08             	mov    0x8(%esi),%ecx
 8048eae:	89 56 08             	mov    %edx,0x8(%esi)
 8048eb1:	85 c9                	test   %ecx,%ecx
 8048eb3:	74 14                	je     8048ec9 <fun6+0x52>
 8048eb5:	89 ce                	mov    %ecx,%esi
 8048eb7:	85 c0                	test   %eax,%eax
 8048eb9:	74 ec                	je     8048ea7 <fun6+0x30>
 8048ebb:	8b 1e                	mov    (%esi),%ebx
 8048ebd:	89 c1                	mov    %eax,%ecx
 8048ebf:	39 18                	cmp    %ebx,(%eax)
 8048ec1:	7f cc                	jg     8048e8f <fun6+0x18>
 8048ec3:	89 c2                	mov    %eax,%edx
 8048ec5:	89 f0                	mov    %esi,%eax
 8048ec7:	eb e2                	jmp    8048eab <fun6+0x34>
 8048ec9:	5b                   	pop    %ebx
 8048eca:	5e                   	pop    %esi
 8048ecb:	c3                   	ret    

08048ecc <phase_6>:
 8048ecc:	83 ec 10             	sub    $0x10,%esp
 8048ecf:	6a 0a                	push   $0xa
 8048ed1:	6a 00                	push   $0x0
 8048ed3:	ff 74 24 1c          	pushl  0x1c(%esp)
 8048ed7:	e8 74 fa ff ff       	call   8048950 <strtol@plt>
 8048edc:	a3 b4 b2 04 08       	mov    %eax,0x804b2b4
 8048ee1:	c7 04 24 b4 b2 04 08 	movl   $0x804b2b4,(%esp)
 8048ee8:	e8 8a ff ff ff       	call   8048e77 <fun6>
 8048eed:	83 c4 10             	add    $0x10,%esp
 8048ef0:	ba 08 00 00 00       	mov    $0x8,%edx
 8048ef5:	8b 40 08             	mov    0x8(%eax),%eax
 8048ef8:	83 ea 01             	sub    $0x1,%edx
 8048efb:	75 f8                	jne    8048ef5 <phase_6+0x29>
 8048efd:	8b 0d b4 b2 04 08    	mov    0x804b2b4,%ecx
 8048f03:	39 08                	cmp    %ecx,(%eax)
 8048f05:	74 05                	je     8048f0c <phase_6+0x40>
 8048f07:	e8 c0 08 00 00       	call   80497cc <explode_bomb>
 8048f0c:	83 c4 0c             	add    $0xc,%esp
 8048f0f:	c3                   	ret    

08048f10 <fun7>:
 8048f10:	53                   	push   %ebx
 8048f11:	83 ec 08             	sub    $0x8,%esp
 8048f14:	8b 54 24 10          	mov    0x10(%esp),%edx
 8048f18:	8b 4c 24 14          	mov    0x14(%esp),%ecx
 8048f1c:	85 d2                	test   %edx,%edx
 8048f1e:	74 37                	je     8048f57 <fun7+0x47>
 8048f20:	8b 1a                	mov    (%edx),%ebx
 8048f22:	39 cb                	cmp    %ecx,%ebx
 8048f24:	7e 13                	jle    8048f39 <fun7+0x29>
 8048f26:	83 ec 08             	sub    $0x8,%esp
 8048f29:	51                   	push   %ecx
 8048f2a:	ff 72 04             	pushl  0x4(%edx)
 8048f2d:	e8 de ff ff ff       	call   8048f10 <fun7>
 8048f32:	83 c4 10             	add    $0x10,%esp
 8048f35:	01 c0                	add    %eax,%eax
 8048f37:	eb 23                	jmp    8048f5c <fun7+0x4c>
 8048f39:	b8 00 00 00 00       	mov    $0x0,%eax
 8048f3e:	39 cb                	cmp    %ecx,%ebx
 8048f40:	74 1a                	je     8048f5c <fun7+0x4c>
 8048f42:	83 ec 08             	sub    $0x8,%esp
 8048f45:	51                   	push   %ecx
 8048f46:	ff 72 08             	pushl  0x8(%edx)
 8048f49:	e8 c2 ff ff ff       	call   8048f10 <fun7>
 8048f4e:	83 c4 10             	add    $0x10,%esp
 8048f51:	8d 44 00 01          	lea    0x1(%eax,%eax,1),%eax
 8048f55:	eb 05                	jmp    8048f5c <fun7+0x4c>
 8048f57:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8048f5c:	83 c4 08             	add    $0x8,%esp
 8048f5f:	5b                   	pop    %ebx
 8048f60:	c3                   	ret    

08048f61 <secret_phase>:
 8048f61:	53                   	push   %ebx
 8048f62:	83 ec 08             	sub    $0x8,%esp
 8048f65:	e8 da 08 00 00       	call   8049844 <read_line>
 8048f6a:	83 ec 04             	sub    $0x4,%esp
 8048f6d:	6a 0a                	push   $0xa
 8048f6f:	6a 00                	push   $0x0
 8048f71:	50                   	push   %eax
 8048f72:	e8 d9 f9 ff ff       	call   8048950 <strtol@plt>
 8048f77:	89 c3                	mov    %eax,%ebx
 8048f79:	8d 40 ff             	lea    -0x1(%eax),%eax
 8048f7c:	83 c4 10             	add    $0x10,%esp
 8048f7f:	3d e8 03 00 00       	cmp    $0x3e8,%eax
 8048f84:	76 05                	jbe    8048f8b <secret_phase+0x2a>
 8048f86:	e8 41 08 00 00       	call   80497cc <explode_bomb>
 8048f8b:	83 ec 08             	sub    $0x8,%esp
 8048f8e:	53                   	push   %ebx
 8048f8f:	68 00 b2 04 08       	push   $0x804b200
 8048f94:	e8 77 ff ff ff       	call   8048f10 <fun7>
 8048f99:	83 c4 10             	add    $0x10,%esp
 8048f9c:	83 f8 02             	cmp    $0x2,%eax
 8048f9f:	74 05                	je     8048fa6 <secret_phase+0x45>
 8048fa1:	e8 26 08 00 00       	call   80497cc <explode_bomb>
 8048fa6:	83 ec 0c             	sub    $0xc,%esp
 8048fa9:	68 90 9b 04 08       	push   $0x8049b90
 8048fae:	e8 ad f8 ff ff       	call   8048860 <puts@plt>
 8048fb3:	e8 53 09 00 00       	call   804990b <phase_defused>
 8048fb8:	83 c4 18             	add    $0x18,%esp
 8048fbb:	5b                   	pop    %ebx
 8048fbc:	c3                   	ret    

08048fbd <sig_handler>:
 8048fbd:	83 ec 18             	sub    $0x18,%esp
 8048fc0:	68 f8 9b 04 08       	push   $0x8049bf8
 8048fc5:	e8 96 f8 ff ff       	call   8048860 <puts@plt>
 8048fca:	c7 04 24 03 00 00 00 	movl   $0x3,(%esp)
 8048fd1:	e8 1a f8 ff ff       	call   80487f0 <sleep@plt>
 8048fd6:	c7 04 24 24 9d 04 08 	movl   $0x8049d24,(%esp)
 8048fdd:	e8 9e f7 ff ff       	call   8048780 <printf@plt>
 8048fe2:	83 c4 04             	add    $0x4,%esp
 8048fe5:	ff 35 a0 b7 04 08    	pushl  0x804b7a0
 8048feb:	e8 a0 f7 ff ff       	call   8048790 <fflush@plt>
 8048ff0:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8048ff7:	e8 f4 f7 ff ff       	call   80487f0 <sleep@plt>
 8048ffc:	c7 04 24 2c 9d 04 08 	movl   $0x8049d2c,(%esp)
 8049003:	e8 58 f8 ff ff       	call   8048860 <puts@plt>
 8049008:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 804900f:	e8 7c f8 ff ff       	call   8048890 <exit@plt>

08049014 <invalid_phase>:
 8049014:	83 ec 14             	sub    $0x14,%esp
 8049017:	ff 74 24 18          	pushl  0x18(%esp)
 804901b:	68 34 9d 04 08       	push   $0x8049d34
 8049020:	e8 5b f7 ff ff       	call   8048780 <printf@plt>
 8049025:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 804902c:	e8 5f f8 ff ff       	call   8048890 <exit@plt>

08049031 <string_length>:
 8049031:	8b 54 24 04          	mov    0x4(%esp),%edx
 8049035:	80 3a 00             	cmpb   $0x0,(%edx)
 8049038:	74 10                	je     804904a <string_length+0x19>
 804903a:	b8 00 00 00 00       	mov    $0x0,%eax
 804903f:	83 c0 01             	add    $0x1,%eax
 8049042:	80 3c 02 00          	cmpb   $0x0,(%edx,%eax,1)
 8049046:	75 f7                	jne    804903f <string_length+0xe>
 8049048:	f3 c3                	repz ret 
 804904a:	b8 00 00 00 00       	mov    $0x0,%eax
 804904f:	c3                   	ret    

08049050 <strings_not_equal>:
 8049050:	57                   	push   %edi
 8049051:	56                   	push   %esi
 8049052:	53                   	push   %ebx
 8049053:	8b 5c 24 10          	mov    0x10(%esp),%ebx
 8049057:	8b 74 24 14          	mov    0x14(%esp),%esi
 804905b:	53                   	push   %ebx
 804905c:	e8 d0 ff ff ff       	call   8049031 <string_length>
 8049061:	89 c7                	mov    %eax,%edi
 8049063:	89 34 24             	mov    %esi,(%esp)
 8049066:	e8 c6 ff ff ff       	call   8049031 <string_length>
 804906b:	83 c4 04             	add    $0x4,%esp
 804906e:	ba 01 00 00 00       	mov    $0x1,%edx
 8049073:	39 c7                	cmp    %eax,%edi
 8049075:	75 38                	jne    80490af <strings_not_equal+0x5f>
 8049077:	0f b6 03             	movzbl (%ebx),%eax
 804907a:	84 c0                	test   %al,%al
 804907c:	74 1e                	je     804909c <strings_not_equal+0x4c>
 804907e:	3a 06                	cmp    (%esi),%al
 8049080:	74 06                	je     8049088 <strings_not_equal+0x38>
 8049082:	eb 1f                	jmp    80490a3 <strings_not_equal+0x53>
 8049084:	3a 06                	cmp    (%esi),%al
 8049086:	75 22                	jne    80490aa <strings_not_equal+0x5a>
 8049088:	83 c3 01             	add    $0x1,%ebx
 804908b:	83 c6 01             	add    $0x1,%esi
 804908e:	0f b6 03             	movzbl (%ebx),%eax
 8049091:	84 c0                	test   %al,%al
 8049093:	75 ef                	jne    8049084 <strings_not_equal+0x34>
 8049095:	ba 00 00 00 00       	mov    $0x0,%edx
 804909a:	eb 13                	jmp    80490af <strings_not_equal+0x5f>
 804909c:	ba 00 00 00 00       	mov    $0x0,%edx
 80490a1:	eb 0c                	jmp    80490af <strings_not_equal+0x5f>
 80490a3:	ba 01 00 00 00       	mov    $0x1,%edx
 80490a8:	eb 05                	jmp    80490af <strings_not_equal+0x5f>
 80490aa:	ba 01 00 00 00       	mov    $0x1,%edx
 80490af:	89 d0                	mov    %edx,%eax
 80490b1:	5b                   	pop    %ebx
 80490b2:	5e                   	pop    %esi
 80490b3:	5f                   	pop    %edi
 80490b4:	c3                   	ret    

080490b5 <open_clientfd>:
 80490b5:	56                   	push   %esi
 80490b6:	53                   	push   %ebx
 80490b7:	83 ec 18             	sub    $0x18,%esp
 80490ba:	6a 00                	push   $0x0
 80490bc:	6a 01                	push   $0x1
 80490be:	6a 02                	push   $0x2
 80490c0:	e8 6b f8 ff ff       	call   8048930 <socket@plt>
 80490c5:	89 c3                	mov    %eax,%ebx
 80490c7:	83 c4 10             	add    $0x10,%esp
 80490ca:	85 c0                	test   %eax,%eax
 80490cc:	79 19                	jns    80490e7 <open_clientfd+0x32>
 80490ce:	83 ec 0c             	sub    $0xc,%esp
 80490d1:	68 45 9d 04 08       	push   $0x8049d45
 80490d6:	e8 85 f7 ff ff       	call   8048860 <puts@plt>
 80490db:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 80490e2:	e8 a9 f7 ff ff       	call   8048890 <exit@plt>
 80490e7:	83 ec 0c             	sub    $0xc,%esp
 80490ea:	ff 74 24 2c          	pushl  0x2c(%esp)
 80490ee:	e8 4d f8 ff ff       	call   8048940 <gethostbyname@plt>
 80490f3:	83 c4 10             	add    $0x10,%esp
 80490f6:	85 c0                	test   %eax,%eax
 80490f8:	75 19                	jne    8049113 <open_clientfd+0x5e>
 80490fa:	83 ec 0c             	sub    $0xc,%esp
 80490fd:	68 53 9d 04 08       	push   $0x8049d53
 8049102:	e8 59 f7 ff ff       	call   8048860 <puts@plt>
 8049107:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 804910e:	e8 7d f7 ff ff       	call   8048890 <exit@plt>
 8049113:	89 e6                	mov    %esp,%esi
 8049115:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 804911c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8049123:	00 
 8049124:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 804912b:	00 
 804912c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8049133:	00 
 8049134:	66 c7 04 24 02 00    	movw   $0x2,(%esp)
 804913a:	83 ec 04             	sub    $0x4,%esp
 804913d:	ff 70 0c             	pushl  0xc(%eax)
 8049140:	8d 54 24 0c          	lea    0xc(%esp),%edx
 8049144:	52                   	push   %edx
 8049145:	8b 40 10             	mov    0x10(%eax),%eax
 8049148:	ff 30                	pushl  (%eax)
 804914a:	e8 d1 f6 ff ff       	call   8048820 <bcopy@plt>
 804914f:	0f b7 44 24 34       	movzwl 0x34(%esp),%eax
 8049154:	66 c1 c8 08          	ror    $0x8,%ax
 8049158:	66 89 44 24 12       	mov    %ax,0x12(%esp)
 804915d:	83 c4 0c             	add    $0xc,%esp
 8049160:	6a 10                	push   $0x10
 8049162:	56                   	push   %esi
 8049163:	53                   	push   %ebx
 8049164:	e8 f7 f7 ff ff       	call   8048960 <connect@plt>
 8049169:	83 c4 10             	add    $0x10,%esp
 804916c:	85 c0                	test   %eax,%eax
 804916e:	79 19                	jns    8049189 <open_clientfd+0xd4>
 8049170:	83 ec 0c             	sub    $0xc,%esp
 8049173:	68 61 9d 04 08       	push   $0x8049d61
 8049178:	e8 e3 f6 ff ff       	call   8048860 <puts@plt>
 804917d:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8049184:	e8 07 f7 ff ff       	call   8048890 <exit@plt>
 8049189:	89 d8                	mov    %ebx,%eax
 804918b:	83 c4 14             	add    $0x14,%esp
 804918e:	5b                   	pop    %ebx
 804918f:	5e                   	pop    %esi
 8049190:	c3                   	ret    

08049191 <initialize_bomb>:
 8049191:	83 ec 14             	sub    $0x14,%esp
 8049194:	68 bd 8f 04 08       	push   $0x8048fbd
 8049199:	6a 02                	push   $0x2
 804919b:	e8 40 f6 ff ff       	call   80487e0 <signal@plt>
 80491a0:	83 c4 08             	add    $0x8,%esp
 80491a3:	6a 50                	push   $0x50
 80491a5:	68 6f 9d 04 08       	push   $0x8049d6f
 80491aa:	e8 06 ff ff ff       	call   80490b5 <open_clientfd>
 80491af:	89 04 24             	mov    %eax,(%esp)
 80491b2:	e8 b9 f7 ff ff       	call   8048970 <close@plt>
 80491b7:	83 c4 1c             	add    $0x1c,%esp
 80491ba:	c3                   	ret    

080491bb <blank_line>:
 80491bb:	56                   	push   %esi
 80491bc:	53                   	push   %ebx
 80491bd:	83 ec 04             	sub    $0x4,%esp
 80491c0:	8b 74 24 10          	mov    0x10(%esp),%esi
 80491c4:	eb 14                	jmp    80491da <blank_line+0x1f>
 80491c6:	e8 b5 f7 ff ff       	call   8048980 <__ctype_b_loc@plt>
 80491cb:	83 c6 01             	add    $0x1,%esi
 80491ce:	0f be db             	movsbl %bl,%ebx
 80491d1:	8b 00                	mov    (%eax),%eax
 80491d3:	f6 44 58 01 20       	testb  $0x20,0x1(%eax,%ebx,2)
 80491d8:	74 0e                	je     80491e8 <blank_line+0x2d>
 80491da:	0f b6 1e             	movzbl (%esi),%ebx
 80491dd:	84 db                	test   %bl,%bl
 80491df:	75 e5                	jne    80491c6 <blank_line+0xb>
 80491e1:	b8 01 00 00 00       	mov    $0x1,%eax
 80491e6:	eb 05                	jmp    80491ed <blank_line+0x32>
 80491e8:	b8 00 00 00 00       	mov    $0x0,%eax
 80491ed:	83 c4 04             	add    $0x4,%esp
 80491f0:	5b                   	pop    %ebx
 80491f1:	5e                   	pop    %esi
 80491f2:	c3                   	ret    

080491f3 <skip>:
 80491f3:	53                   	push   %ebx
 80491f4:	83 ec 08             	sub    $0x8,%esp
 80491f7:	83 ec 04             	sub    $0x4,%esp
 80491fa:	ff 35 ac b7 04 08    	pushl  0x804b7ac
 8049200:	6a 50                	push   $0x50
 8049202:	a1 a8 b7 04 08       	mov    0x804b7a8,%eax
 8049207:	8d 04 80             	lea    (%eax,%eax,4),%eax
 804920a:	c1 e0 04             	shl    $0x4,%eax
 804920d:	05 c0 b7 04 08       	add    $0x804b7c0,%eax
 8049212:	50                   	push   %eax
 8049213:	e8 a8 f5 ff ff       	call   80487c0 <fgets@plt>
 8049218:	89 c3                	mov    %eax,%ebx
 804921a:	83 c4 10             	add    $0x10,%esp
 804921d:	85 c0                	test   %eax,%eax
 804921f:	74 10                	je     8049231 <skip+0x3e>
 8049221:	83 ec 0c             	sub    $0xc,%esp
 8049224:	50                   	push   %eax
 8049225:	e8 91 ff ff ff       	call   80491bb <blank_line>
 804922a:	83 c4 10             	add    $0x10,%esp
 804922d:	85 c0                	test   %eax,%eax
 804922f:	75 c6                	jne    80491f7 <skip+0x4>
 8049231:	89 d8                	mov    %ebx,%eax
 8049233:	83 c4 08             	add    $0x8,%esp
 8049236:	5b                   	pop    %ebx
 8049237:	c3                   	ret    

08049238 <writen>:
 8049238:	55                   	push   %ebp
 8049239:	57                   	push   %edi
 804923a:	56                   	push   %esi
 804923b:	53                   	push   %ebx
 804923c:	83 ec 0c             	sub    $0xc,%esp
 804923f:	8b 7c 24 20          	mov    0x20(%esp),%edi
 8049243:	8b 74 24 24          	mov    0x24(%esp),%esi
 8049247:	8b 6c 24 28          	mov    0x28(%esp),%ebp
 804924b:	85 ed                	test   %ebp,%ebp
 804924d:	74 29                	je     8049278 <writen+0x40>
 804924f:	89 eb                	mov    %ebp,%ebx
 8049251:	83 ec 04             	sub    $0x4,%esp
 8049254:	53                   	push   %ebx
 8049255:	56                   	push   %esi
 8049256:	57                   	push   %edi
 8049257:	e8 64 f6 ff ff       	call   80488c0 <write@plt>
 804925c:	83 c4 10             	add    $0x10,%esp
 804925f:	85 c0                	test   %eax,%eax
 8049261:	7f 0f                	jg     8049272 <writen+0x3a>
 8049263:	e8 88 f6 ff ff       	call   80488f0 <__errno_location@plt>
 8049268:	83 38 04             	cmpl   $0x4,(%eax)
 804926b:	75 0f                	jne    804927c <writen+0x44>
 804926d:	b8 00 00 00 00       	mov    $0x0,%eax
 8049272:	01 c6                	add    %eax,%esi
 8049274:	29 c3                	sub    %eax,%ebx
 8049276:	75 d9                	jne    8049251 <writen+0x19>
 8049278:	89 e8                	mov    %ebp,%eax
 804927a:	eb 05                	jmp    8049281 <writen+0x49>
 804927c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8049281:	83 c4 0c             	add    $0xc,%esp
 8049284:	5b                   	pop    %ebx
 8049285:	5e                   	pop    %esi
 8049286:	5f                   	pop    %edi
 8049287:	5d                   	pop    %ebp
 8049288:	c3                   	ret    

08049289 <send_msg>:
 8049289:	55                   	push   %ebp
 804928a:	57                   	push   %edi
 804928b:	56                   	push   %esi
 804928c:	53                   	push   %ebx
 804928d:	81 ec 80 24 00 00    	sub    $0x2480,%esp
 8049293:	6a 00                	push   $0x0
 8049295:	6a 01                	push   $0x1
 8049297:	6a 02                	push   $0x2
 8049299:	e8 92 f6 ff ff       	call   8048930 <socket@plt>
 804929e:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 80492a2:	83 c4 10             	add    $0x10,%esp
 80492a5:	85 c0                	test   %eax,%eax
 80492a7:	79 30                	jns    80492d9 <send_msg+0x50>
 80492a9:	83 ec 04             	sub    $0x4,%esp
 80492ac:	68 8f 9d 04 08       	push   $0x8049d8f
 80492b1:	68 49 9a 04 08       	push   $0x8049a49
 80492b6:	ff 35 a0 b7 04 08    	pushl  0x804b7a0
 80492bc:	e8 ef f5 ff ff       	call   80488b0 <fprintf@plt>
 80492c1:	83 c4 04             	add    $0x4,%esp
 80492c4:	ff 74 24 18          	pushl  0x18(%esp)
 80492c8:	e8 a3 f6 ff ff       	call   8048970 <close@plt>
 80492cd:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 80492d4:	e8 b7 f5 ff ff       	call   8048890 <exit@plt>
 80492d9:	c7 84 24 64 24 00 00 	movl   $0x0,0x2464(%esp)
 80492e0:	00 00 00 00 
 80492e4:	c7 84 24 68 24 00 00 	movl   $0x0,0x2468(%esp)
 80492eb:	00 00 00 00 
 80492ef:	c7 84 24 6c 24 00 00 	movl   $0x0,0x246c(%esp)
 80492f6:	00 00 00 00 
 80492fa:	66 c7 84 24 60 24 00 	movw   $0x2,0x2460(%esp)
 8049301:	00 02 00 
 8049304:	66 c7 84 24 62 24 00 	movw   $0x7ac8,0x2462(%esp)
 804930b:	00 c8 7a 
 804930e:	83 ec 04             	sub    $0x4,%esp
 8049311:	8d 84 24 68 24 00 00 	lea    0x2468(%esp),%eax
 8049318:	50                   	push   %eax
 8049319:	68 6f 9d 04 08       	push   $0x8049d6f
 804931e:	6a 02                	push   $0x2
 8049320:	e8 8b f4 ff ff       	call   80487b0 <inet_pton@plt>
 8049325:	83 c4 10             	add    $0x10,%esp
 8049328:	85 c0                	test   %eax,%eax
 804932a:	79 3b                	jns    8049367 <send_msg+0xde>
 804932c:	83 ec 04             	sub    $0x4,%esp
 804932f:	68 03 9e 04 08       	push   $0x8049e03
 8049334:	68 49 9a 04 08       	push   $0x8049a49
 8049339:	ff 35 a0 b7 04 08    	pushl  0x804b7a0
 804933f:	e8 6c f5 ff ff       	call   80488b0 <fprintf@plt>
 8049344:	83 c4 10             	add    $0x10,%esp
 8049347:	83 7c 24 0c 00       	cmpl   $0x0,0xc(%esp)
 804934c:	74 0f                	je     804935d <send_msg+0xd4>
 804934e:	83 ec 0c             	sub    $0xc,%esp
 8049351:	ff 74 24 18          	pushl  0x18(%esp)
 8049355:	e8 16 f6 ff ff       	call   8048970 <close@plt>
 804935a:	83 c4 10             	add    $0x10,%esp
 804935d:	83 ec 0c             	sub    $0xc,%esp
 8049360:	6a 01                	push   $0x1
 8049362:	e8 29 f5 ff ff       	call   8048890 <exit@plt>
 8049367:	83 ec 04             	sub    $0x4,%esp
 804936a:	6a 10                	push   $0x10
 804936c:	8d 84 24 68 24 00 00 	lea    0x2468(%esp),%eax
 8049373:	50                   	push   %eax
 8049374:	ff 74 24 18          	pushl  0x18(%esp)
 8049378:	e8 e3 f5 ff ff       	call   8048960 <connect@plt>
 804937d:	83 c4 10             	add    $0x10,%esp
 8049380:	85 c0                	test   %eax,%eax
 8049382:	79 3b                	jns    80493bf <send_msg+0x136>
 8049384:	83 ec 04             	sub    $0x4,%esp
 8049387:	68 9c 9d 04 08       	push   $0x8049d9c
 804938c:	68 49 9a 04 08       	push   $0x8049a49
 8049391:	ff 35 a0 b7 04 08    	pushl  0x804b7a0
 8049397:	e8 14 f5 ff ff       	call   80488b0 <fprintf@plt>
 804939c:	83 c4 10             	add    $0x10,%esp
 804939f:	83 7c 24 0c 00       	cmpl   $0x0,0xc(%esp)
 80493a4:	74 0f                	je     80493b5 <send_msg+0x12c>
 80493a6:	83 ec 0c             	sub    $0xc,%esp
 80493a9:	ff 74 24 18          	pushl  0x18(%esp)
 80493ad:	e8 be f5 ff ff       	call   8048970 <close@plt>
 80493b2:	83 c4 10             	add    $0x10,%esp
 80493b5:	83 ec 0c             	sub    $0xc,%esp
 80493b8:	6a 01                	push   $0x1
 80493ba:	e8 d1 f4 ff ff       	call   8048890 <exit@plt>
 80493bf:	8d 74 24 60          	lea    0x60(%esp),%esi
 80493c3:	c7 44 24 60 53 75 62 	movl   $0x6a627553,0x60(%esp)
 80493ca:	6a 
 80493cb:	c7 44 24 64 65 63 74 	movl   $0x3a746365,0x64(%esp)
 80493d2:	3a 
 80493d3:	c7 44 24 68 20 42 6f 	movl   $0x6d6f4220,0x68(%esp)
 80493da:	6d 
 80493db:	c7 44 24 6c 62 20 6e 	movl   $0x6f6e2062,0x6c(%esp)
 80493e2:	6f 
 80493e3:	c7 44 24 70 74 69 66 	movl   $0x69666974,0x70(%esp)
 80493ea:	69 
 80493eb:	c7 44 24 74 63 61 74 	movl   $0x69746163,0x74(%esp)
 80493f2:	69 
 80493f3:	c7 44 24 78 6f 6e 0a 	movl   $0xa6e6f,0x78(%esp)
 80493fa:	00 
 80493fb:	83 ec 08             	sub    $0x8,%esp
 80493fe:	56                   	push   %esi
 80493ff:	8d 9c 24 6c 04 00 00 	lea    0x46c(%esp),%ebx
 8049406:	53                   	push   %ebx
 8049407:	e8 24 f4 ff ff       	call   8048830 <strcat@plt>
 804940c:	66 c7 44 24 70 0a 00 	movw   $0xa,0x70(%esp)
 8049413:	83 c4 08             	add    $0x8,%esp
 8049416:	56                   	push   %esi
 8049417:	53                   	push   %ebx
 8049418:	e8 13 f4 ff ff       	call   8048830 <strcat@plt>
 804941d:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8049424:	e8 47 f3 ff ff       	call   8048770 <cuserid@plt>
 8049429:	83 c4 10             	add    $0x10,%esp
 804942c:	85 c0                	test   %eax,%eax
 804942e:	75 16                	jne    8049446 <send_msg+0x1bd>
 8049430:	c7 44 24 10 6e 6f 62 	movl   $0x6f626f6e,0x10(%esp)
 8049437:	6f 
 8049438:	66 c7 44 24 14 64 79 	movw   $0x7964,0x14(%esp)
 804943f:	c6 44 24 16 00       	movb   $0x0,0x16(%esp)
 8049444:	eb 11                	jmp    8049457 <send_msg+0x1ce>
 8049446:	83 ec 08             	sub    $0x8,%esp
 8049449:	50                   	push   %eax
 804944a:	8d 44 24 1c          	lea    0x1c(%esp),%eax
 804944e:	50                   	push   %eax
 804944f:	e8 ec f3 ff ff       	call   8048840 <strcpy@plt>
 8049454:	83 c4 10             	add    $0x10,%esp
 8049457:	8b 15 a8 b7 04 08    	mov    0x804b7a8,%edx
 804945d:	b8 7e 9d 04 08       	mov    $0x8049d7e,%eax
 8049462:	83 bc 24 90 24 00 00 	cmpl   $0x0,0x2490(%esp)
 8049469:	00 
 804946a:	75 05                	jne    8049471 <send_msg+0x1e8>
 804946c:	b8 86 9d 04 08       	mov    $0x8049d86,%eax
 8049471:	83 ec 04             	sub    $0x4,%esp
 8049474:	52                   	push   %edx
 8049475:	50                   	push   %eax
 8049476:	8d 44 24 1c          	lea    0x1c(%esp),%eax
 804947a:	50                   	push   %eax
 804947b:	ff 35 40 b7 04 08    	pushl  0x804b740
 8049481:	68 40 b3 04 08       	push   $0x804b340
 8049486:	68 aa 9d 04 08       	push   $0x8049daa
 804948b:	8d 5c 24 7c          	lea    0x7c(%esp),%ebx
 804948f:	53                   	push   %ebx
 8049490:	e8 7b f4 ff ff       	call   8048910 <sprintf@plt>
 8049495:	83 c4 18             	add    $0x18,%esp
 8049498:	53                   	push   %ebx
 8049499:	8d 84 24 6c 04 00 00 	lea    0x46c(%esp),%eax
 80494a0:	50                   	push   %eax
 80494a1:	e8 8a f3 ff ff       	call   8048830 <strcat@plt>
 80494a6:	83 c4 10             	add    $0x10,%esp
 80494a9:	83 3d a8 b7 04 08 00 	cmpl   $0x0,0x804b7a8
 80494b0:	7e 50                	jle    8049502 <send_msg+0x279>
 80494b2:	be c0 b7 04 08       	mov    $0x804b7c0,%esi
 80494b7:	bb 00 00 00 00       	mov    $0x0,%ebx
 80494bc:	8d 6c 24 10          	lea    0x10(%esp),%ebp
 80494c0:	8d 7c 24 60          	lea    0x60(%esp),%edi
 80494c4:	83 c3 01             	add    $0x1,%ebx
 80494c7:	83 ec 04             	sub    $0x4,%esp
 80494ca:	56                   	push   %esi
 80494cb:	53                   	push   %ebx
 80494cc:	55                   	push   %ebp
 80494cd:	ff 35 40 b7 04 08    	pushl  0x804b740
 80494d3:	68 40 b3 04 08       	push   $0x804b340
 80494d8:	68 c6 9d 04 08       	push   $0x8049dc6
 80494dd:	57                   	push   %edi
 80494de:	e8 2d f4 ff ff       	call   8048910 <sprintf@plt>
 80494e3:	83 c4 18             	add    $0x18,%esp
 80494e6:	57                   	push   %edi
 80494e7:	8d 84 24 6c 04 00 00 	lea    0x46c(%esp),%eax
 80494ee:	50                   	push   %eax
 80494ef:	e8 3c f3 ff ff       	call   8048830 <strcat@plt>
 80494f4:	83 c6 50             	add    $0x50,%esi
 80494f7:	83 c4 10             	add    $0x10,%esp
 80494fa:	39 1d a8 b7 04 08    	cmp    %ebx,0x804b7a8
 8049500:	7f c2                	jg     80494c4 <send_msg+0x23b>
 8049502:	8d 9c 24 60 04 00 00 	lea    0x460(%esp),%ebx
 8049509:	be ff ff ff ff       	mov    $0xffffffff,%esi
 804950e:	89 df                	mov    %ebx,%edi
 8049510:	bd 00 00 00 00       	mov    $0x0,%ebp
 8049515:	89 f1                	mov    %esi,%ecx
 8049517:	89 e8                	mov    %ebp,%eax
 8049519:	f2 ae                	repnz scas %es:(%edi),%al
 804951b:	f7 d1                	not    %ecx
 804951d:	83 e9 01             	sub    $0x1,%ecx
 8049520:	83 ec 04             	sub    $0x4,%esp
 8049523:	51                   	push   %ecx
 8049524:	53                   	push   %ebx
 8049525:	ff 74 24 18          	pushl  0x18(%esp)
 8049529:	e8 0a fd ff ff       	call   8049238 <writen>
 804952e:	89 c2                	mov    %eax,%edx
 8049530:	89 df                	mov    %ebx,%edi
 8049532:	89 f1                	mov    %esi,%ecx
 8049534:	89 e8                	mov    %ebp,%eax
 8049536:	f2 ae                	repnz scas %es:(%edi),%al
 8049538:	f7 d1                	not    %ecx
 804953a:	83 e9 01             	sub    $0x1,%ecx
 804953d:	83 c4 10             	add    $0x10,%esp
 8049540:	39 ca                	cmp    %ecx,%edx
 8049542:	73 3b                	jae    804957f <send_msg+0x2f6>
 8049544:	83 ec 04             	sub    $0x4,%esp
 8049547:	68 e2 9d 04 08       	push   $0x8049de2
 804954c:	68 49 9a 04 08       	push   $0x8049a49
 8049551:	ff 35 a0 b7 04 08    	pushl  0x804b7a0
 8049557:	e8 54 f3 ff ff       	call   80488b0 <fprintf@plt>
 804955c:	83 c4 10             	add    $0x10,%esp
 804955f:	83 7c 24 0c 00       	cmpl   $0x0,0xc(%esp)
 8049564:	74 0f                	je     8049575 <send_msg+0x2ec>
 8049566:	83 ec 0c             	sub    $0xc,%esp
 8049569:	ff 74 24 18          	pushl  0x18(%esp)
 804956d:	e8 fe f3 ff ff       	call   8048970 <close@plt>
 8049572:	83 c4 10             	add    $0x10,%esp
 8049575:	83 ec 0c             	sub    $0xc,%esp
 8049578:	6a 01                	push   $0x1
 804957a:	e8 11 f3 ff ff       	call   8048890 <exit@plt>
 804957f:	83 ec 0c             	sub    $0xc,%esp
 8049582:	ff 74 24 18          	pushl  0x18(%esp)
 8049586:	e8 e5 f3 ff ff       	call   8048970 <close@plt>
 804958b:	81 c4 8c 24 00 00    	add    $0x248c,%esp
 8049591:	5b                   	pop    %ebx
 8049592:	5e                   	pop    %esi
 8049593:	5f                   	pop    %edi
 8049594:	5d                   	pop    %ebp
 8049595:	c3                   	ret    

08049596 <send_msg_2>:
 8049596:	55                   	push   %ebp
 8049597:	57                   	push   %edi
 8049598:	56                   	push   %esi
 8049599:	53                   	push   %ebx
 804959a:	83 ec 78             	sub    $0x78,%esp
 804959d:	6a 00                	push   $0x0
 804959f:	e8 fc f1 ff ff       	call   80487a0 <dup@plt>
 80495a4:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 80495a8:	83 c4 10             	add    $0x10,%esp
 80495ab:	83 f8 ff             	cmp    $0xffffffff,%eax
 80495ae:	75 19                	jne    80495c9 <send_msg_2+0x33>
 80495b0:	83 ec 0c             	sub    $0xc,%esp
 80495b3:	68 f5 9d 04 08       	push   $0x8049df5
 80495b8:	e8 a3 f2 ff ff       	call   8048860 <puts@plt>
 80495bd:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 80495c4:	e8 c7 f2 ff ff       	call   8048890 <exit@plt>
 80495c9:	83 ec 0c             	sub    $0xc,%esp
 80495cc:	6a 00                	push   $0x0
 80495ce:	e8 9d f3 ff ff       	call   8048970 <close@plt>
 80495d3:	83 c4 10             	add    $0x10,%esp
 80495d6:	83 f8 ff             	cmp    $0xffffffff,%eax
 80495d9:	75 19                	jne    80495f4 <send_msg_2+0x5e>
 80495db:	83 ec 0c             	sub    $0xc,%esp
 80495de:	68 09 9e 04 08       	push   $0x8049e09
 80495e3:	e8 78 f2 ff ff       	call   8048860 <puts@plt>
 80495e8:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 80495ef:	e8 9c f2 ff ff       	call   8048890 <exit@plt>
 80495f4:	e8 27 f3 ff ff       	call   8048920 <tmpfile@plt>
 80495f9:	89 c7                	mov    %eax,%edi
 80495fb:	85 c0                	test   %eax,%eax
 80495fd:	75 19                	jne    8049618 <send_msg_2+0x82>
 80495ff:	83 ec 0c             	sub    $0xc,%esp
 8049602:	68 1c 9e 04 08       	push   $0x8049e1c
 8049607:	e8 54 f2 ff ff       	call   8048860 <puts@plt>
 804960c:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8049613:	e8 78 f2 ff ff       	call   8048890 <exit@plt>
 8049618:	50                   	push   %eax
 8049619:	6a 1b                	push   $0x1b
 804961b:	6a 01                	push   $0x1
 804961d:	68 31 9e 04 08       	push   $0x8049e31
 8049622:	e8 e9 f1 ff ff       	call   8048810 <fwrite@plt>
 8049627:	83 c4 08             	add    $0x8,%esp
 804962a:	57                   	push   %edi
 804962b:	6a 0a                	push   $0xa
 804962d:	e8 ce f2 ff ff       	call   8048900 <fputc@plt>
 8049632:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8049639:	e8 32 f1 ff ff       	call   8048770 <cuserid@plt>
 804963e:	83 c4 10             	add    $0x10,%esp
 8049641:	85 c0                	test   %eax,%eax
 8049643:	75 16                	jne    804965b <send_msg_2+0xc5>
 8049645:	c7 44 24 10 6e 6f 62 	movl   $0x6f626f6e,0x10(%esp)
 804964c:	6f 
 804964d:	66 c7 44 24 14 64 79 	movw   $0x7964,0x14(%esp)
 8049654:	c6 44 24 16 00       	movb   $0x0,0x16(%esp)
 8049659:	eb 11                	jmp    804966c <send_msg_2+0xd6>
 804965b:	83 ec 08             	sub    $0x8,%esp
 804965e:	50                   	push   %eax
 804965f:	8d 44 24 1c          	lea    0x1c(%esp),%eax
 8049663:	50                   	push   %eax
 8049664:	e8 d7 f1 ff ff       	call   8048840 <strcpy@plt>
 8049669:	83 c4 10             	add    $0x10,%esp
 804966c:	8b 15 a8 b7 04 08    	mov    0x804b7a8,%edx
 8049672:	b8 7e 9d 04 08       	mov    $0x8049d7e,%eax
 8049677:	83 bc 24 80 00 00 00 	cmpl   $0x0,0x80(%esp)
 804967e:	00 
 804967f:	75 05                	jne    8049686 <send_msg_2+0xf0>
 8049681:	b8 86 9d 04 08       	mov    $0x8049d86,%eax
 8049686:	83 ec 04             	sub    $0x4,%esp
 8049689:	52                   	push   %edx
 804968a:	50                   	push   %eax
 804968b:	8d 44 24 1c          	lea    0x1c(%esp),%eax
 804968f:	50                   	push   %eax
 8049690:	ff 35 40 b7 04 08    	pushl  0x804b740
 8049696:	68 40 b3 04 08       	push   $0x804b340
 804969b:	68 aa 9d 04 08       	push   $0x8049daa
 80496a0:	57                   	push   %edi
 80496a1:	e8 0a f2 ff ff       	call   80488b0 <fprintf@plt>
 80496a6:	83 c4 20             	add    $0x20,%esp
 80496a9:	83 3d a8 b7 04 08 00 	cmpl   $0x0,0x804b7a8
 80496b0:	7e 3b                	jle    80496ed <send_msg_2+0x157>
 80496b2:	be c0 b7 04 08       	mov    $0x804b7c0,%esi
 80496b7:	bb 00 00 00 00       	mov    $0x0,%ebx
 80496bc:	8d 6c 24 10          	lea    0x10(%esp),%ebp
 80496c0:	83 c3 01             	add    $0x1,%ebx
 80496c3:	83 ec 04             	sub    $0x4,%esp
 80496c6:	56                   	push   %esi
 80496c7:	53                   	push   %ebx
 80496c8:	55                   	push   %ebp
 80496c9:	ff 35 40 b7 04 08    	pushl  0x804b740
 80496cf:	68 40 b3 04 08       	push   $0x804b340
 80496d4:	68 c6 9d 04 08       	push   $0x8049dc6
 80496d9:	57                   	push   %edi
 80496da:	e8 d1 f1 ff ff       	call   80488b0 <fprintf@plt>
 80496df:	83 c6 50             	add    $0x50,%esi
 80496e2:	83 c4 20             	add    $0x20,%esp
 80496e5:	39 1d a8 b7 04 08    	cmp    %ebx,0x804b7a8
 80496eb:	7f d3                	jg     80496c0 <send_msg_2+0x12a>
 80496ed:	83 ec 0c             	sub    $0xc,%esp
 80496f0:	57                   	push   %edi
 80496f1:	e8 0a f1 ff ff       	call   8048800 <rewind@plt>
 80496f6:	c7 04 24 4d 9e 04 08 	movl   $0x8049e4d,(%esp)
 80496fd:	68 57 9e 04 08       	push   $0x8049e57
 8049702:	68 5f 9e 04 08       	push   $0x8049e5f
 8049707:	68 76 9e 04 08       	push   $0x8049e76
 804970c:	68 00 be 04 08       	push   $0x804be00
 8049711:	e8 fa f1 ff ff       	call   8048910 <sprintf@plt>
 8049716:	83 c4 14             	add    $0x14,%esp
 8049719:	68 00 be 04 08       	push   $0x804be00
 804971e:	e8 4d f1 ff ff       	call   8048870 <system@plt>
 8049723:	83 c4 10             	add    $0x10,%esp
 8049726:	85 c0                	test   %eax,%eax
 8049728:	74 19                	je     8049743 <send_msg_2+0x1ad>
 804972a:	83 ec 0c             	sub    $0xc,%esp
 804972d:	68 7f 9e 04 08       	push   $0x8049e7f
 8049732:	e8 29 f1 ff ff       	call   8048860 <puts@plt>
 8049737:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 804973e:	e8 4d f1 ff ff       	call   8048890 <exit@plt>
 8049743:	83 ec 0c             	sub    $0xc,%esp
 8049746:	57                   	push   %edi
 8049747:	e8 84 f0 ff ff       	call   80487d0 <fclose@plt>
 804974c:	83 c4 10             	add    $0x10,%esp
 804974f:	85 c0                	test   %eax,%eax
 8049751:	74 19                	je     804976c <send_msg_2+0x1d6>
 8049753:	83 ec 0c             	sub    $0xc,%esp
 8049756:	68 99 9e 04 08       	push   $0x8049e99
 804975b:	e8 00 f1 ff ff       	call   8048860 <puts@plt>
 8049760:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8049767:	e8 24 f1 ff ff       	call   8048890 <exit@plt>
 804976c:	83 ec 0c             	sub    $0xc,%esp
 804976f:	ff 74 24 18          	pushl  0x18(%esp)
 8049773:	e8 28 f0 ff ff       	call   80487a0 <dup@plt>
 8049778:	83 c4 10             	add    $0x10,%esp
 804977b:	85 c0                	test   %eax,%eax
 804977d:	74 19                	je     8049798 <send_msg_2+0x202>
 804977f:	83 ec 0c             	sub    $0xc,%esp
 8049782:	68 b2 9e 04 08       	push   $0x8049eb2
 8049787:	e8 d4 f0 ff ff       	call   8048860 <puts@plt>
 804978c:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8049793:	e8 f8 f0 ff ff       	call   8048890 <exit@plt>
 8049798:	83 ec 0c             	sub    $0xc,%esp
 804979b:	ff 74 24 18          	pushl  0x18(%esp)
 804979f:	e8 cc f1 ff ff       	call   8048970 <close@plt>
 80497a4:	83 c4 10             	add    $0x10,%esp
 80497a7:	85 c0                	test   %eax,%eax
 80497a9:	74 19                	je     80497c4 <send_msg_2+0x22e>
 80497ab:	83 ec 0c             	sub    $0xc,%esp
 80497ae:	68 cd 9e 04 08       	push   $0x8049ecd
 80497b3:	e8 a8 f0 ff ff       	call   8048860 <puts@plt>
 80497b8:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 80497bf:	e8 cc f0 ff ff       	call   8048890 <exit@plt>
 80497c4:	83 c4 6c             	add    $0x6c,%esp
 80497c7:	5b                   	pop    %ebx
 80497c8:	5e                   	pop    %esi
 80497c9:	5f                   	pop    %edi
 80497ca:	5d                   	pop    %ebp
 80497cb:	c3                   	ret    

080497cc <explode_bomb>:
 80497cc:	83 ec 18             	sub    $0x18,%esp
 80497cf:	68 e4 9e 04 08       	push   $0x8049ee4
 80497d4:	e8 87 f0 ff ff       	call   8048860 <puts@plt>
 80497d9:	c7 04 24 ed 9e 04 08 	movl   $0x8049eed,(%esp)
 80497e0:	e8 7b f0 ff ff       	call   8048860 <puts@plt>
 80497e5:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 80497ec:	e8 98 fa ff ff       	call   8049289 <send_msg>
 80497f1:	c7 04 24 30 9c 04 08 	movl   $0x8049c30,(%esp)
 80497f8:	e8 63 f0 ff ff       	call   8048860 <puts@plt>
 80497fd:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8049804:	e8 87 f0 ff ff       	call   8048890 <exit@plt>

08049809 <read_six_numbers>:
 8049809:	83 ec 0c             	sub    $0xc,%esp
 804980c:	8b 44 24 14          	mov    0x14(%esp),%eax
 8049810:	8d 50 14             	lea    0x14(%eax),%edx
 8049813:	52                   	push   %edx
 8049814:	8d 50 10             	lea    0x10(%eax),%edx
 8049817:	52                   	push   %edx
 8049818:	8d 50 0c             	lea    0xc(%eax),%edx
 804981b:	52                   	push   %edx
 804981c:	8d 50 08             	lea    0x8(%eax),%edx
 804981f:	52                   	push   %edx
 8049820:	8d 50 04             	lea    0x4(%eax),%edx
 8049823:	52                   	push   %edx
 8049824:	50                   	push   %eax
 8049825:	68 04 9f 04 08       	push   $0x8049f04
 804982a:	ff 74 24 2c          	pushl  0x2c(%esp)
 804982e:	e8 9d f0 ff ff       	call   80488d0 <__isoc99_sscanf@plt>
 8049833:	83 c4 20             	add    $0x20,%esp
 8049836:	83 f8 05             	cmp    $0x5,%eax
 8049839:	7f 05                	jg     8049840 <read_six_numbers+0x37>
 804983b:	e8 8c ff ff ff       	call   80497cc <explode_bomb>
 8049840:	83 c4 0c             	add    $0xc,%esp
 8049843:	c3                   	ret    

08049844 <read_line>:
 8049844:	57                   	push   %edi
 8049845:	56                   	push   %esi
 8049846:	53                   	push   %ebx
 8049847:	e8 a7 f9 ff ff       	call   80491f3 <skip>
 804984c:	85 c0                	test   %eax,%eax
 804984e:	75 62                	jne    80498b2 <read_line+0x6e>
 8049850:	a1 80 b7 04 08       	mov    0x804b780,%eax
 8049855:	39 05 ac b7 04 08    	cmp    %eax,0x804b7ac
 804985b:	75 12                	jne    804986f <read_line+0x2b>
 804985d:	83 ec 0c             	sub    $0xc,%esp
 8049860:	68 16 9f 04 08       	push   $0x8049f16
 8049865:	e8 f6 ef ff ff       	call   8048860 <puts@plt>
 804986a:	e8 5d ff ff ff       	call   80497cc <explode_bomb>
 804986f:	83 ec 0c             	sub    $0xc,%esp
 8049872:	68 34 9f 04 08       	push   $0x8049f34
 8049877:	e8 d4 ef ff ff       	call   8048850 <getenv@plt>
 804987c:	83 c4 10             	add    $0x10,%esp
 804987f:	85 c0                	test   %eax,%eax
 8049881:	74 0a                	je     804988d <read_line+0x49>
 8049883:	83 ec 0c             	sub    $0xc,%esp
 8049886:	6a 00                	push   $0x0
 8049888:	e8 03 f0 ff ff       	call   8048890 <exit@plt>
 804988d:	a1 80 b7 04 08       	mov    0x804b780,%eax
 8049892:	a3 ac b7 04 08       	mov    %eax,0x804b7ac
 8049897:	e8 57 f9 ff ff       	call   80491f3 <skip>
 804989c:	85 c0                	test   %eax,%eax
 804989e:	75 12                	jne    80498b2 <read_line+0x6e>
 80498a0:	83 ec 0c             	sub    $0xc,%esp
 80498a3:	68 16 9f 04 08       	push   $0x8049f16
 80498a8:	e8 b3 ef ff ff       	call   8048860 <puts@plt>
 80498ad:	e8 1a ff ff ff       	call   80497cc <explode_bomb>
 80498b2:	8b 1d a8 b7 04 08    	mov    0x804b7a8,%ebx
 80498b8:	8d 34 9b             	lea    (%ebx,%ebx,4),%esi
 80498bb:	c1 e6 04             	shl    $0x4,%esi
 80498be:	81 c6 c0 b7 04 08    	add    $0x804b7c0,%esi
 80498c4:	89 f7                	mov    %esi,%edi
 80498c6:	b8 00 00 00 00       	mov    $0x0,%eax
 80498cb:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
 80498d0:	f2 ae                	repnz scas %es:(%edi),%al
 80498d2:	f7 d1                	not    %ecx
 80498d4:	83 e9 01             	sub    $0x1,%ecx
 80498d7:	83 f9 4f             	cmp    $0x4f,%ecx
 80498da:	75 12                	jne    80498ee <read_line+0xaa>
 80498dc:	83 ec 0c             	sub    $0xc,%esp
 80498df:	68 3f 9f 04 08       	push   $0x8049f3f
 80498e4:	e8 77 ef ff ff       	call   8048860 <puts@plt>
 80498e9:	e8 de fe ff ff       	call   80497cc <explode_bomb>
 80498ee:	8d 04 9b             	lea    (%ebx,%ebx,4),%eax
 80498f1:	c1 e0 04             	shl    $0x4,%eax
 80498f4:	c6 84 01 bf b7 04 08 	movb   $0x0,0x804b7bf(%ecx,%eax,1)
 80498fb:	00 
 80498fc:	83 c3 01             	add    $0x1,%ebx
 80498ff:	89 1d a8 b7 04 08    	mov    %ebx,0x804b7a8
 8049905:	89 f0                	mov    %esi,%eax
 8049907:	5b                   	pop    %ebx
 8049908:	5e                   	pop    %esi
 8049909:	5f                   	pop    %edi
 804990a:	c3                   	ret    

0804990b <phase_defused>:
 804990b:	83 ec 78             	sub    $0x78,%esp
 804990e:	6a 01                	push   $0x1
 8049910:	e8 74 f9 ff ff       	call   8049289 <send_msg>
 8049915:	83 c4 10             	add    $0x10,%esp
 8049918:	83 3d a8 b7 04 08 06 	cmpl   $0x6,0x804b7a8
 804991f:	75 77                	jne    8049998 <phase_defused+0x8d>
 8049921:	8d 44 24 10          	lea    0x10(%esp),%eax
 8049925:	50                   	push   %eax
 8049926:	8d 44 24 10          	lea    0x10(%esp),%eax
 804992a:	50                   	push   %eax
 804992b:	68 5a 9f 04 08       	push   $0x8049f5a
 8049930:	68 b0 b8 04 08       	push   $0x804b8b0
 8049935:	e8 96 ef ff ff       	call   80488d0 <__isoc99_sscanf@plt>
 804993a:	83 c4 10             	add    $0x10,%esp
 804993d:	83 f8 02             	cmp    $0x2,%eax
 8049940:	75 3a                	jne    804997c <phase_defused+0x71>
 8049942:	83 ec 08             	sub    $0x8,%esp
 8049945:	68 60 9f 04 08       	push   $0x8049f60
 804994a:	8d 44 24 1c          	lea    0x1c(%esp),%eax
 804994e:	50                   	push   %eax
 804994f:	e8 fc f6 ff ff       	call   8049050 <strings_not_equal>
 8049954:	83 c4 10             	add    $0x10,%esp
 8049957:	85 c0                	test   %eax,%eax
 8049959:	75 21                	jne    804997c <phase_defused+0x71>
 804995b:	83 ec 0c             	sub    $0xc,%esp
 804995e:	68 54 9c 04 08       	push   $0x8049c54
 8049963:	e8 f8 ee ff ff       	call   8048860 <puts@plt>
 8049968:	c7 04 24 7c 9c 04 08 	movl   $0x8049c7c,(%esp)
 804996f:	e8 ec ee ff ff       	call   8048860 <puts@plt>
 8049974:	e8 e8 f5 ff ff       	call   8048f61 <secret_phase>
 8049979:	83 c4 10             	add    $0x10,%esp
 804997c:	83 ec 0c             	sub    $0xc,%esp
 804997f:	68 b4 9c 04 08       	push   $0x8049cb4
 8049984:	e8 d7 ee ff ff       	call   8048860 <puts@plt>
 8049989:	c7 04 24 e0 9c 04 08 	movl   $0x8049ce0,(%esp)
 8049990:	e8 cb ee ff ff       	call   8048860 <puts@plt>
 8049995:	83 c4 10             	add    $0x10,%esp
 8049998:	83 c4 6c             	add    $0x6c,%esp
 804999b:	c3                   	ret    
 804999c:	66 90                	xchg   %ax,%ax
 804999e:	66 90                	xchg   %ax,%ax

080499a0 <__libc_csu_init>:
 80499a0:	55                   	push   %ebp
 80499a1:	57                   	push   %edi
 80499a2:	31 ff                	xor    %edi,%edi
 80499a4:	56                   	push   %esi
 80499a5:	53                   	push   %ebx
 80499a6:	e8 15 f0 ff ff       	call   80489c0 <__x86.get_pc_thunk.bx>
 80499ab:	81 c3 4d 17 00 00    	add    $0x174d,%ebx
 80499b1:	83 ec 1c             	sub    $0x1c,%esp
 80499b4:	8b 6c 24 30          	mov    0x30(%esp),%ebp
 80499b8:	8d b3 0c ff ff ff    	lea    -0xf4(%ebx),%esi
 80499be:	e8 71 ed ff ff       	call   8048734 <_init>
 80499c3:	8d 83 08 ff ff ff    	lea    -0xf8(%ebx),%eax
 80499c9:	29 c6                	sub    %eax,%esi
 80499cb:	c1 fe 02             	sar    $0x2,%esi
 80499ce:	85 f6                	test   %esi,%esi
 80499d0:	74 27                	je     80499f9 <__libc_csu_init+0x59>
 80499d2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 80499d8:	8b 44 24 38          	mov    0x38(%esp),%eax
 80499dc:	89 2c 24             	mov    %ebp,(%esp)
 80499df:	89 44 24 08          	mov    %eax,0x8(%esp)
 80499e3:	8b 44 24 34          	mov    0x34(%esp),%eax
 80499e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 80499eb:	ff 94 bb 08 ff ff ff 	call   *-0xf8(%ebx,%edi,4)
 80499f2:	83 c7 01             	add    $0x1,%edi
 80499f5:	39 f7                	cmp    %esi,%edi
 80499f7:	75 df                	jne    80499d8 <__libc_csu_init+0x38>
 80499f9:	83 c4 1c             	add    $0x1c,%esp
 80499fc:	5b                   	pop    %ebx
 80499fd:	5e                   	pop    %esi
 80499fe:	5f                   	pop    %edi
 80499ff:	5d                   	pop    %ebp
 8049a00:	c3                   	ret    
 8049a01:	eb 0d                	jmp    8049a10 <__libc_csu_fini>
 8049a03:	90                   	nop
 8049a04:	90                   	nop
 8049a05:	90                   	nop
 8049a06:	90                   	nop
 8049a07:	90                   	nop
 8049a08:	90                   	nop
 8049a09:	90                   	nop
 8049a0a:	90                   	nop
 8049a0b:	90                   	nop
 8049a0c:	90                   	nop
 8049a0d:	90                   	nop
 8049a0e:	90                   	nop
 8049a0f:	90                   	nop

08049a10 <__libc_csu_fini>:
 8049a10:	f3 c3                	repz ret 

Disassembly of section .fini:

08049a14 <_fini>:
 8049a14:	53                   	push   %ebx
 8049a15:	83 ec 08             	sub    $0x8,%esp
 8049a18:	e8 a3 ef ff ff       	call   80489c0 <__x86.get_pc_thunk.bx>
 8049a1d:	81 c3 db 16 00 00    	add    $0x16db,%ebx
 8049a23:	83 c4 08             	add    $0x8,%esp
 8049a26:	5b                   	pop    %ebx
 8049a27:	c3                   	ret    

Disassembly of section .rodata:

08049a28 <_fp_hw>:
 8049a28:	03 00                	add    (%eax),%eax
	...

08049a2c <_IO_stdin_used>:
 8049a2c:	01 00                	add    %eax,(%eax)
 8049a2e:	02 00                	add    (%eax),%al
 8049a30:	25 73 3a 20 45       	and    $0x45203a73,%eax
 8049a35:	72 72                	jb     8049aa9 <_IO_stdin_used+0x7d>
 8049a37:	6f                   	outsl  %ds:(%esi),(%dx)
 8049a38:	72 3a                	jb     8049a74 <_IO_stdin_used+0x48>
 8049a3a:	20 43 6f             	and    %al,0x6f(%ebx)
 8049a3d:	75 6c                	jne    8049aab <_IO_stdin_used+0x7f>
 8049a3f:	64 6e                	outsb  %fs:(%esi),(%dx)
 8049a41:	27                   	daa    
 8049a42:	74 20                	je     8049a64 <_IO_stdin_used+0x38>
 8049a44:	6f                   	outsl  %ds:(%esi),(%dx)
 8049a45:	70 65                	jo     8049aac <_IO_stdin_used+0x80>
 8049a47:	6e                   	outsb  %ds:(%esi),(%dx)
 8049a48:	20 25 73 0a 00 55    	and    %ah,0x55000a73
 8049a4e:	73 61                	jae    8049ab1 <_IO_stdin_used+0x85>
 8049a50:	67 65 3a 20          	cmp    %gs:(%bx,%si),%ah
 8049a54:	25 73 20 5b 3c       	and    $0x3c5b2073,%eax
 8049a59:	69 6e 70 75 74 5f 66 	imul   $0x665f7475,0x70(%esi),%ebp
 8049a60:	69 6c 65 3e 5d 0a 00 	imul   $0x54000a5d,0x3e(%ebp,%eiz,2),%ebp
 8049a67:	54 
 8049a68:	68 61 74 27 73       	push   $0x73277461
 8049a6d:	20 6e 75             	and    %ch,0x75(%esi)
 8049a70:	6d                   	insl   (%dx),%es:(%edi)
 8049a71:	62 65 72             	bound  %esp,0x72(%ebp)
 8049a74:	20 32                	and    %dh,(%edx)
 8049a76:	2e 20 20             	and    %ah,%cs:(%eax)
 8049a79:	4b                   	dec    %ebx
 8049a7a:	65 65 70 20          	gs gs jo 8049a9e <_IO_stdin_used+0x72>
 8049a7e:	67 6f                	outsl  %ds:(%si),(%dx)
 8049a80:	69 6e 67 21 00 48 61 	imul   $0x61480021,0x67(%esi),%ebp
 8049a87:	6c                   	insb   (%dx),%es:(%edi)
 8049a88:	66 77 61             	data16 ja 8049aec <_IO_stdin_used+0xc0>
 8049a8b:	79 20                	jns    8049aad <_IO_stdin_used+0x81>
 8049a8d:	74 68                	je     8049af7 <_IO_stdin_used+0xcb>
 8049a8f:	65 72 65             	gs jb  8049af7 <_IO_stdin_used+0xcb>
 8049a92:	21 00                	and    %eax,(%eax)
 8049a94:	47                   	inc    %edi
 8049a95:	6f                   	outsl  %ds:(%esi),(%dx)
 8049a96:	6f                   	outsl  %ds:(%esi),(%dx)
 8049a97:	64 20 77 6f          	and    %dh,%fs:0x6f(%edi)
 8049a9b:	72 6b                	jb     8049b08 <_IO_stdin_used+0xdc>
 8049a9d:	21 20                	and    %esp,(%eax)
 8049a9f:	20 4f 6e             	and    %cl,0x6e(%edi)
 8049aa2:	20 74 6f 20          	and    %dh,0x20(%edi,%ebp,2)
 8049aa6:	74 68                	je     8049b10 <_IO_stdin_used+0xe4>
 8049aa8:	65 20 6e 65          	and    %ch,%gs:0x65(%esi)
 8049aac:	78 74                	js     8049b22 <_IO_stdin_used+0xf6>
 8049aae:	2e 2e 2e 00 00       	cs cs add %al,%cs:(%eax)
 8049ab3:	00 57 65             	add    %dl,0x65(%edi)
 8049ab6:	6c                   	insb   (%dx),%es:(%edi)
 8049ab7:	63 6f 6d             	arpl   %bp,0x6d(%edi)
 8049aba:	65 20 74 6f 20       	and    %dh,%gs:0x20(%edi,%ebp,2)
 8049abf:	6d                   	insl   (%dx),%es:(%edi)
 8049ac0:	79 20                	jns    8049ae2 <_IO_stdin_used+0xb6>
 8049ac2:	66 69 65 6e 64 69    	imul   $0x6964,0x6e(%ebp),%sp
 8049ac8:	73 68                	jae    8049b32 <_IO_stdin_used+0x106>
 8049aca:	20 6c 69 74          	and    %ch,0x74(%ecx,%ebp,2)
 8049ace:	74 6c                	je     8049b3c <_IO_stdin_used+0x110>
 8049ad0:	65 20 62 6f          	and    %ah,%gs:0x6f(%edx)
 8049ad4:	6d                   	insl   (%dx),%es:(%edi)
 8049ad5:	62 2e                	bound  %ebp,(%esi)
 8049ad7:	20 59 6f             	and    %bl,0x6f(%ecx)
 8049ada:	75 20                	jne    8049afc <_IO_stdin_used+0xd0>
 8049adc:	68 61 76 65 20       	push   $0x20657661
 8049ae1:	36 20 70 68          	and    %dh,%ss:0x68(%eax)
 8049ae5:	61                   	popa   
 8049ae6:	73 65                	jae    8049b4d <_IO_stdin_used+0x121>
 8049ae8:	73 20                	jae    8049b0a <_IO_stdin_used+0xde>
 8049aea:	77 69                	ja     8049b55 <_IO_stdin_used+0x129>
 8049aec:	74 68                	je     8049b56 <_IO_stdin_used+0x12a>
 8049aee:	00 00                	add    %al,(%eax)
 8049af0:	77 68                	ja     8049b5a <_IO_stdin_used+0x12e>
 8049af2:	69 63 68 20 74 6f 20 	imul   $0x206f7420,0x68(%ebx),%esp
 8049af9:	62 6c 6f 77          	bound  %ebp,0x77(%edi,%ebp,2)
 8049afd:	20 79 6f             	and    %bh,0x6f(%ecx)
 8049b00:	75 72                	jne    8049b74 <_IO_stdin_used+0x148>
 8049b02:	73 65                	jae    8049b69 <_IO_stdin_used+0x13d>
 8049b04:	6c                   	insb   (%dx),%es:(%edi)
 8049b05:	66 20 75 70          	data16 and %dh,0x70(%ebp)
 8049b09:	2e 20 48 61          	and    %cl,%cs:0x61(%eax)
 8049b0d:	76 65                	jbe    8049b74 <_IO_stdin_used+0x148>
 8049b0f:	20 61 20             	and    %ah,0x20(%ecx)
 8049b12:	6e                   	outsb  %ds:(%esi),(%dx)
 8049b13:	69 63 65 20 64 61 79 	imul   $0x79616420,0x65(%ebx),%esp
 8049b1a:	21 00                	and    %eax,(%eax)
 8049b1c:	50                   	push   %eax
 8049b1d:	68 61 73 65 20       	push   $0x20657361
 8049b22:	31 20                	xor    %esp,(%eax)
 8049b24:	64 65 66 75 73       	fs gs data16 jne 8049b9c <_IO_stdin_used+0x170>
 8049b29:	65 64 2e 20 48 6f    	gs fs and %cl,%cs:0x6f(%eax)
 8049b2f:	77 20                	ja     8049b51 <_IO_stdin_used+0x125>
 8049b31:	61                   	popa   
 8049b32:	62 6f 75             	bound  %ebp,0x75(%edi)
 8049b35:	74 20                	je     8049b57 <_IO_stdin_used+0x12b>
 8049b37:	74 68                	je     8049ba1 <_IO_stdin_used+0x175>
 8049b39:	65 20 6e 65          	and    %ch,%gs:0x65(%esi)
 8049b3d:	78 74                	js     8049bb3 <_IO_stdin_used+0x187>
 8049b3f:	20 6f 6e             	and    %ch,0x6e(%edi)
 8049b42:	65 3f                	gs aas 
 8049b44:	00 00                	add    %al,(%eax)
 8049b46:	00 00                	add    %al,(%eax)
 8049b48:	53                   	push   %ebx
 8049b49:	6f                   	outsl  %ds:(%esi),(%dx)
 8049b4a:	20 79 6f             	and    %bh,0x6f(%ecx)
 8049b4d:	75 20                	jne    8049b6f <_IO_stdin_used+0x143>
 8049b4f:	67 6f                	outsl  %ds:(%si),(%dx)
 8049b51:	74 20                	je     8049b73 <_IO_stdin_used+0x147>
 8049b53:	74 68                	je     8049bbd <_IO_stdin_used+0x191>
 8049b55:	61                   	popa   
 8049b56:	74 20                	je     8049b78 <_IO_stdin_used+0x14c>
 8049b58:	6f                   	outsl  %ds:(%esi),(%dx)
 8049b59:	6e                   	outsb  %ds:(%esi),(%dx)
 8049b5a:	65 2e 20 20          	gs and %ah,%cs:(%eax)
 8049b5e:	54                   	push   %esp
 8049b5f:	72 79                	jb     8049bda <_IO_stdin_used+0x1ae>
 8049b61:	20 74 68 69          	and    %dh,0x69(%eax,%ebp,2)
 8049b65:	73 20                	jae    8049b87 <_IO_stdin_used+0x15b>
 8049b67:	6f                   	outsl  %ds:(%esi),(%dx)
 8049b68:	6e                   	outsb  %ds:(%esi),(%dx)
 8049b69:	65 2e 00 54 68 65    	gs add %dl,%cs:0x65(%eax,%ebp,2)
 8049b6f:	20 66 75             	and    %ah,0x75(%esi)
 8049b72:	74 75                	je     8049be9 <array.2846+0x1>
 8049b74:	72 65                	jb     8049bdb <_IO_stdin_used+0x1af>
 8049b76:	20 77 69             	and    %dh,0x69(%edi)
 8049b79:	6c                   	insb   (%dx),%es:(%edi)
 8049b7a:	6c                   	insb   (%dx),%es:(%edi)
 8049b7b:	20 62 65             	and    %ah,0x65(%edx)
 8049b7e:	20 62 65             	and    %ah,0x65(%edx)
 8049b81:	74 74                	je     8049bf7 <array.2846+0xf>
 8049b83:	65 72 20             	gs jb  8049ba6 <_IO_stdin_used+0x17a>
 8049b86:	74 6f                	je     8049bf7 <array.2846+0xf>
 8049b88:	6d                   	insl   (%dx),%es:(%edi)
 8049b89:	6f                   	outsl  %ds:(%esi),(%dx)
 8049b8a:	72 72                	jb     8049bfe <array.2846+0x16>
 8049b8c:	6f                   	outsl  %ds:(%esi),(%dx)
 8049b8d:	77 2e                	ja     8049bbd <_IO_stdin_used+0x191>
 8049b8f:	00 57 6f             	add    %dl,0x6f(%edi)
 8049b92:	77 21                	ja     8049bb5 <_IO_stdin_used+0x189>
 8049b94:	20 59 6f             	and    %bl,0x6f(%ecx)
 8049b97:	75 27                	jne    8049bc0 <_IO_stdin_used+0x194>
 8049b99:	76 65                	jbe    8049c00 <array.2846+0x18>
 8049b9b:	20 64 65 66          	and    %ah,0x66(%ebp,%eiz,2)
 8049b9f:	75 73                	jne    8049c14 <array.2846+0x2c>
 8049ba1:	65 64 20 74 68 65    	gs and %dh,%fs:0x65(%eax,%ebp,2)
 8049ba7:	20 73 65             	and    %dh,0x65(%ebx)
 8049baa:	63 72 65             	arpl   %si,0x65(%edx)
 8049bad:	74 20                	je     8049bcf <_IO_stdin_used+0x1a3>
 8049baf:	73 74                	jae    8049c25 <array.2846+0x3d>
 8049bb1:	61                   	popa   
 8049bb2:	67 65 21 00          	and    %eax,%gs:(%bx,%si)
 8049bb6:	25 64 20 25 63       	and    $0x63252064,%eax
 8049bbb:	20 25 64 00 73 61    	and    %ah,0x61730064
 8049bc1:	69 6e 74 73 00 00 00 	imul   $0x73,0x74(%esi),%ebp
 8049bc8:	8f                   	(bad)  
 8049bc9:	8c 04 08             	mov    %es,(%eax,%ecx,1)
 8049bcc:	b1 8c                	mov    $0x8c,%cl
 8049bce:	04 08                	add    $0x8,%al
 8049bd0:	d3 8c 04 08 f5 8c 04 	rorl   %cl,0x48cf508(%esp,%eax,1)
 8049bd7:	08 0d 8d 04 08 28    	or     %cl,0x2808048d
 8049bdd:	8d 04 08             	lea    (%eax,%ecx,1),%eax
 8049be0:	40                   	inc    %eax
 8049be1:	8d 04 08             	lea    (%eax,%ecx,1),%eax
 8049be4:	5b                   	pop    %ebx
 8049be5:	8d 04 08             	lea    (%eax,%ecx,1),%eax

08049be8 <array.2846>:
 8049be8:	69 73 72 76 65 61 77 	imul   $0x77616576,0x72(%ebx),%esi
 8049bef:	68 6f 62 70 6e       	push   $0x6e70626f
 8049bf4:	75 74                	jne    8049c6a <array.2846+0x82>
 8049bf6:	66 67 53             	addr16 push %bx
 8049bf9:	6f                   	outsl  %ds:(%esi),(%dx)
 8049bfa:	20 79 6f             	and    %bh,0x6f(%ecx)
 8049bfd:	75 20                	jne    8049c1f <array.2846+0x37>
 8049bff:	74 68                	je     8049c69 <array.2846+0x81>
 8049c01:	69 6e 6b 20 79 6f 75 	imul   $0x756f7920,0x6b(%esi),%ebp
 8049c08:	20 63 61             	and    %ah,0x61(%ebx)
 8049c0b:	6e                   	outsb  %ds:(%esi),(%dx)
 8049c0c:	20 73 74             	and    %dh,0x74(%ebx)
 8049c0f:	6f                   	outsl  %ds:(%esi),(%dx)
 8049c10:	70 20                	jo     8049c32 <array.2846+0x4a>
 8049c12:	74 68                	je     8049c7c <array.2846+0x94>
 8049c14:	65 20 62 6f          	and    %ah,%gs:0x6f(%edx)
 8049c18:	6d                   	insl   (%dx),%es:(%edi)
 8049c19:	62 20                	bound  %esp,(%eax)
 8049c1b:	77 69                	ja     8049c86 <array.2846+0x9e>
 8049c1d:	74 68                	je     8049c87 <array.2846+0x9f>
 8049c1f:	20 63 74             	and    %ah,0x74(%ebx)
 8049c22:	72 6c                	jb     8049c90 <array.2846+0xa8>
 8049c24:	2d 63 2c 20 64       	sub    $0x64202c63,%eax
 8049c29:	6f                   	outsl  %ds:(%esi),(%dx)
 8049c2a:	20 79 6f             	and    %bh,0x6f(%ecx)
 8049c2d:	75 3f                	jne    8049c6e <array.2846+0x86>
 8049c2f:	00 59 6f             	add    %bl,0x6f(%ecx)
 8049c32:	75 72                	jne    8049ca6 <array.2846+0xbe>
 8049c34:	20 69 6e             	and    %ch,0x6e(%ecx)
 8049c37:	73 74                	jae    8049cad <array.2846+0xc5>
 8049c39:	72 75                	jb     8049cb0 <array.2846+0xc8>
 8049c3b:	63 74 6f 72          	arpl   %si,0x72(%edi,%ebp,2)
 8049c3f:	20 68 61             	and    %ch,0x61(%eax)
 8049c42:	73 20                	jae    8049c64 <array.2846+0x7c>
 8049c44:	62 65 65             	bound  %esp,0x65(%ebp)
 8049c47:	6e                   	outsb  %ds:(%esi),(%dx)
 8049c48:	20 6e 6f             	and    %ch,0x6f(%esi)
 8049c4b:	74 69                	je     8049cb6 <array.2846+0xce>
 8049c4d:	66 69 65 64 2e 00    	imul   $0x2e,0x64(%ebp),%sp
 8049c53:	00 43 75             	add    %al,0x75(%ebx)
 8049c56:	72 73                	jb     8049ccb <array.2846+0xe3>
 8049c58:	65 73 2c             	gs jae 8049c87 <array.2846+0x9f>
 8049c5b:	20 79 6f             	and    %bh,0x6f(%ecx)
 8049c5e:	75 27                	jne    8049c87 <array.2846+0x9f>
 8049c60:	76 65                	jbe    8049cc7 <array.2846+0xdf>
 8049c62:	20 66 6f             	and    %ah,0x6f(%esi)
 8049c65:	75 6e                	jne    8049cd5 <array.2846+0xed>
 8049c67:	64 20 74 68 65       	and    %dh,%fs:0x65(%eax,%ebp,2)
 8049c6c:	20 73 65             	and    %dh,0x65(%ebx)
 8049c6f:	63 72 65             	arpl   %si,0x65(%edx)
 8049c72:	74 20                	je     8049c94 <array.2846+0xac>
 8049c74:	70 68                	jo     8049cde <array.2846+0xf6>
 8049c76:	61                   	popa   
 8049c77:	73 65                	jae    8049cde <array.2846+0xf6>
 8049c79:	21 00                	and    %eax,(%eax)
 8049c7b:	00 42 75             	add    %al,0x75(%edx)
 8049c7e:	74 20                	je     8049ca0 <array.2846+0xb8>
 8049c80:	66 69 6e 64 69 6e    	imul   $0x6e69,0x64(%esi),%bp
 8049c86:	67 20 69 74          	and    %ch,0x74(%bx,%di)
 8049c8a:	20 61 6e             	and    %ah,0x6e(%ecx)
 8049c8d:	64 20 73 6f          	and    %dh,%fs:0x6f(%ebx)
 8049c91:	6c                   	insb   (%dx),%es:(%edi)
 8049c92:	76 69                	jbe    8049cfd <array.2846+0x115>
 8049c94:	6e                   	outsb  %ds:(%esi),(%dx)
 8049c95:	67 20 69 74          	and    %ch,0x74(%bx,%di)
 8049c99:	20 61 72             	and    %ah,0x72(%ecx)
 8049c9c:	65 20 71 75          	and    %dh,%gs:0x75(%ecx)
 8049ca0:	69 74 65 20 64 69 66 	imul   $0x66666964,0x20(%ebp,%eiz,2),%esi
 8049ca7:	66 
 8049ca8:	65 72 65             	gs jb  8049d10 <array.2846+0x128>
 8049cab:	6e                   	outsb  %ds:(%esi),(%dx)
 8049cac:	74 2e                	je     8049cdc <array.2846+0xf4>
 8049cae:	2e 2e 00 00          	cs add %al,%cs:(%eax)
 8049cb2:	00 00                	add    %al,(%eax)
 8049cb4:	43                   	inc    %ebx
 8049cb5:	6f                   	outsl  %ds:(%esi),(%dx)
 8049cb6:	6e                   	outsb  %ds:(%esi),(%dx)
 8049cb7:	67 72 61             	addr16 jb 8049d1b <array.2846+0x133>
 8049cba:	74 75                	je     8049d31 <array.2846+0x149>
 8049cbc:	6c                   	insb   (%dx),%es:(%edi)
 8049cbd:	61                   	popa   
 8049cbe:	74 69                	je     8049d29 <array.2846+0x141>
 8049cc0:	6f                   	outsl  %ds:(%esi),(%dx)
 8049cc1:	6e                   	outsb  %ds:(%esi),(%dx)
 8049cc2:	73 21                	jae    8049ce5 <array.2846+0xfd>
 8049cc4:	20 59 6f             	and    %bl,0x6f(%ecx)
 8049cc7:	75 27                	jne    8049cf0 <array.2846+0x108>
 8049cc9:	76 65                	jbe    8049d30 <array.2846+0x148>
 8049ccb:	20 64 65 66          	and    %ah,0x66(%ebp,%eiz,2)
 8049ccf:	75 73                	jne    8049d44 <array.2846+0x15c>
 8049cd1:	65 64 20 74 68 65    	gs and %dh,%fs:0x65(%eax,%ebp,2)
 8049cd7:	20 62 6f             	and    %ah,0x6f(%edx)
 8049cda:	6d                   	insl   (%dx),%es:(%edi)
 8049cdb:	62 21                	bound  %esp,(%ecx)
 8049cdd:	00 00                	add    %al,(%eax)
 8049cdf:	00 59 6f             	add    %bl,0x6f(%ecx)
 8049ce2:	75 72                	jne    8049d56 <array.2846+0x16e>
 8049ce4:	20 69 6e             	and    %ch,0x6e(%ecx)
 8049ce7:	73 74                	jae    8049d5d <array.2846+0x175>
 8049ce9:	72 75                	jb     8049d60 <array.2846+0x178>
 8049ceb:	63 74 6f 72          	arpl   %si,0x72(%edi,%ebp,2)
 8049cef:	20 68 61             	and    %ch,0x61(%eax)
 8049cf2:	73 20                	jae    8049d14 <array.2846+0x12c>
 8049cf4:	62 65 65             	bound  %esp,0x65(%ebp)
 8049cf7:	6e                   	outsb  %ds:(%esi),(%dx)
 8049cf8:	20 6e 6f             	and    %ch,0x6f(%esi)
 8049cfb:	74 69                	je     8049d66 <array.2846+0x17e>
 8049cfd:	66 69 65 64 20 61    	imul   $0x6120,0x64(%ebp),%sp
 8049d03:	6e                   	outsb  %ds:(%esi),(%dx)
 8049d04:	64 20 77 69          	and    %dh,%fs:0x69(%edi)
 8049d08:	6c                   	insb   (%dx),%es:(%edi)
 8049d09:	6c                   	insb   (%dx),%es:(%edi)
 8049d0a:	20 76 65             	and    %dh,0x65(%esi)
 8049d0d:	72 69                	jb     8049d78 <array.2846+0x190>
 8049d0f:	66 79 20             	data16 jns 8049d32 <array.2846+0x14a>
 8049d12:	79 6f                	jns    8049d83 <array.2846+0x19b>
 8049d14:	75 72                	jne    8049d88 <array.2846+0x1a0>
 8049d16:	20 73 6f             	and    %dh,0x6f(%ebx)
 8049d19:	6c                   	insb   (%dx),%es:(%edi)
 8049d1a:	75 74                	jne    8049d90 <array.2846+0x1a8>
 8049d1c:	69 6f 6e 2e 00 00 00 	imul   $0x2e,0x6e(%edi),%ebp
 8049d23:	00 57 65             	add    %dl,0x65(%edi)
 8049d26:	6c                   	insb   (%dx),%es:(%edi)
 8049d27:	6c                   	insb   (%dx),%es:(%edi)
 8049d28:	2e 2e 2e 00 4f 4b    	cs cs add %cl,%cs:0x4b(%edi)
 8049d2e:	2e 20 3a             	and    %bh,%cs:(%edx)
 8049d31:	2d 29 00 49 6e       	sub    $0x6e490029,%eax
 8049d36:	76 61                	jbe    8049d99 <array.2846+0x1b1>
 8049d38:	6c                   	insb   (%dx),%es:(%edi)
 8049d39:	69 64 20 70 68 61 73 	imul   $0x65736168,0x70(%eax,%eiz,1),%esp
 8049d40:	65 
 8049d41:	25 73 0a 00 42       	and    $0x42000a73,%eax
 8049d46:	61                   	popa   
 8049d47:	64 20 68 6f          	and    %ch,%fs:0x6f(%eax)
 8049d4b:	73 74                	jae    8049dc1 <array.2846+0x1d9>
 8049d4d:	20 28                	and    %ch,(%eax)
 8049d4f:	31 29                	xor    %ebp,(%ecx)
 8049d51:	2e 00 42 61          	add    %al,%cs:0x61(%edx)
 8049d55:	64 20 68 6f          	and    %ch,%fs:0x6f(%eax)
 8049d59:	73 74                	jae    8049dcf <array.2846+0x1e7>
 8049d5b:	20 28                	and    %ch,(%eax)
 8049d5d:	32 29                	xor    (%ecx),%ch
 8049d5f:	2e 00 42 61          	add    %al,%cs:0x61(%edx)
 8049d63:	64 20 68 6f          	and    %ch,%fs:0x6f(%eax)
 8049d67:	73 74                	jae    8049ddd <array.2846+0x1f5>
 8049d69:	20 28                	and    %ch,(%eax)
 8049d6b:	33 29                	xor    (%ecx),%ebp
 8049d6d:	2e 00 32             	add    %dh,%cs:(%edx)
 8049d70:	30 32                	xor    %dh,(%edx)
 8049d72:	2e 31 32             	xor    %esi,%cs:(%edx)
 8049d75:	30 2e                	xor    %ch,(%esi)
 8049d77:	34 30                	xor    $0x30,%al
 8049d79:	2e 31 38             	xor    %edi,%cs:(%eax)
 8049d7c:	38 00                	cmp    %al,(%eax)
 8049d7e:	64 65 66 75 73       	fs gs data16 jne 8049df6 <array.2846+0x20e>
 8049d83:	65 64 00 65 78       	gs add %ah,%fs:0x78(%ebp)
 8049d88:	70 6c                	jo     8049df6 <array.2846+0x20e>
 8049d8a:	6f                   	outsl  %ds:(%esi),(%dx)
 8049d8b:	64 65 64 00 73 6f    	fs gs add %dh,%fs:0x6f(%ebx)
 8049d91:	63 6b 65             	arpl   %bp,0x65(%ebx)
 8049d94:	74 20                	je     8049db6 <array.2846+0x1ce>
 8049d96:	65 72 72             	gs jb  8049e0b <array.2846+0x223>
 8049d99:	6f                   	outsl  %ds:(%esi),(%dx)
 8049d9a:	72 00                	jb     8049d9c <array.2846+0x1b4>
 8049d9c:	63 6f 6e             	arpl   %bp,0x6e(%edi)
 8049d9f:	6e                   	outsb  %ds:(%esi),(%dx)
 8049da0:	65 63 74 20 65       	arpl   %si,%gs:0x65(%eax,%eiz,1)
 8049da5:	72 72                	jb     8049e19 <array.2846+0x231>
 8049da7:	6f                   	outsl  %ds:(%esi),(%dx)
 8049da8:	72 00                	jb     8049daa <array.2846+0x1c2>
 8049daa:	62 6f 6d             	bound  %ebp,0x6d(%edi)
 8049dad:	62 2d 68 65 61 64    	bound  %ebp,0x64616568
 8049db3:	65 72 3a             	gs jb  8049df0 <array.2846+0x208>
 8049db6:	25 73 3a 25 64       	and    $0x64253a73,%eax
 8049dbb:	3a 25 73 3a 25 73    	cmp    0x73253a73,%ah
 8049dc1:	3a 25 64 0a 00 62    	cmp    0x62000a64,%ah
 8049dc7:	6f                   	outsl  %ds:(%esi),(%dx)
 8049dc8:	6d                   	insl   (%dx),%es:(%edi)
 8049dc9:	62 2d 73 74 72 69    	bound  %ebp,0x69727473
 8049dcf:	6e                   	outsb  %ds:(%esi),(%dx)
 8049dd0:	67 3a 25             	cmp    (%di),%ah
 8049dd3:	73 3a                	jae    8049e0f <array.2846+0x227>
 8049dd5:	25 64 3a 25 73       	and    $0x73253a64,%eax
 8049dda:	3a 25 64 3a 25 73    	cmp    0x73253a64,%ah
 8049de0:	0a 00                	or     (%eax),%al
 8049de2:	73 6f                	jae    8049e53 <array.2846+0x26b>
 8049de4:	63 6b 65             	arpl   %bp,0x65(%ebx)
 8049de7:	74 20                	je     8049e09 <array.2846+0x221>
 8049de9:	77 72                	ja     8049e5d <array.2846+0x275>
 8049deb:	69 74 65 20 65 72 72 	imul   $0x6f727265,0x20(%ebp,%eiz,2),%esi
 8049df2:	6f 
 8049df3:	72 00                	jb     8049df5 <array.2846+0x20d>
 8049df5:	45                   	inc    %ebp
 8049df6:	52                   	push   %edx
 8049df7:	52                   	push   %edx
 8049df8:	4f                   	dec    %edi
 8049df9:	52                   	push   %edx
 8049dfa:	3a 20                	cmp    (%eax),%ah
 8049dfc:	64 75 70             	fs jne 8049e6f <array.2846+0x287>
 8049dff:	28 30                	sub    %dh,(%eax)
 8049e01:	29 20                	sub    %esp,(%eax)
 8049e03:	65 72 72             	gs jb  8049e78 <array.2846+0x290>
 8049e06:	6f                   	outsl  %ds:(%esi),(%dx)
 8049e07:	72 00                	jb     8049e09 <array.2846+0x221>
 8049e09:	45                   	inc    %ebp
 8049e0a:	52                   	push   %edx
 8049e0b:	52                   	push   %edx
 8049e0c:	4f                   	dec    %edi
 8049e0d:	52                   	push   %edx
 8049e0e:	3a 20                	cmp    (%eax),%ah
 8049e10:	63 6c 6f 73          	arpl   %bp,0x73(%edi,%ebp,2)
 8049e14:	65 20 65 72          	and    %ah,%gs:0x72(%ebp)
 8049e18:	72 6f                	jb     8049e89 <array.2846+0x2a1>
 8049e1a:	72 00                	jb     8049e1c <array.2846+0x234>
 8049e1c:	45                   	inc    %ebp
 8049e1d:	52                   	push   %edx
 8049e1e:	52                   	push   %edx
 8049e1f:	4f                   	dec    %edi
 8049e20:	52                   	push   %edx
 8049e21:	3a 20                	cmp    (%eax),%ah
 8049e23:	74 6d                	je     8049e92 <array.2846+0x2aa>
 8049e25:	70 66                	jo     8049e8d <array.2846+0x2a5>
 8049e27:	69 6c 65 20 65 72 72 	imul   $0x6f727265,0x20(%ebp,%eiz,2),%ebp
 8049e2e:	6f 
 8049e2f:	72 00                	jb     8049e31 <array.2846+0x249>
 8049e31:	53                   	push   %ebx
 8049e32:	75 62                	jne    8049e96 <array.2846+0x2ae>
 8049e34:	6a 65                	push   $0x65
 8049e36:	63 74 3a 20          	arpl   %si,0x20(%edx,%edi,1)
 8049e3a:	42                   	inc    %edx
 8049e3b:	6f                   	outsl  %ds:(%esi),(%dx)
 8049e3c:	6d                   	insl   (%dx),%es:(%edi)
 8049e3d:	62 20                	bound  %esp,(%eax)
 8049e3f:	6e                   	outsb  %ds:(%esi),(%dx)
 8049e40:	6f                   	outsl  %ds:(%esi),(%dx)
 8049e41:	74 69                	je     8049eac <array.2846+0x2c4>
 8049e43:	66 69 63 61 74 69    	imul   $0x6974,0x61(%ebx),%sp
 8049e49:	6f                   	outsl  %ds:(%esi),(%dx)
 8049e4a:	6e                   	outsb  %ds:(%esi),(%dx)
 8049e4b:	0a 00                	or     (%eax),%al
 8049e4d:	6c                   	insb   (%dx),%es:(%edi)
 8049e4e:	6f                   	outsl  %ds:(%esi),(%dx)
 8049e4f:	63 61 6c             	arpl   %sp,0x6c(%ecx)
 8049e52:	68 6f 73 74 00       	push   $0x74736f
 8049e57:	69 63 73 62 6f 6d 62 	imul   $0x626d6f62,0x73(%ebx),%esp
 8049e5e:	00 2f                	add    %ch,(%edi)
 8049e60:	75 73                	jne    8049ed5 <array.2846+0x2ed>
 8049e62:	72 2f                	jb     8049e93 <array.2846+0x2ab>
 8049e64:	73 62                	jae    8049ec8 <array.2846+0x2e0>
 8049e66:	69 6e 2f 73 65 6e 64 	imul   $0x646e6573,0x2f(%esi),%ebp
 8049e6d:	6d                   	insl   (%dx),%es:(%edi)
 8049e6e:	61                   	popa   
 8049e6f:	69 6c 20 2d 62 6d 00 	imul   $0x25006d62,0x2d(%eax,%eiz,1),%ebp
 8049e76:	25 
 8049e77:	73 20                	jae    8049e99 <array.2846+0x2b1>
 8049e79:	25 73 40 25 73       	and    $0x73254073,%eax
 8049e7e:	00 45 52             	add    %al,0x52(%ebp)
 8049e81:	52                   	push   %edx
 8049e82:	4f                   	dec    %edi
 8049e83:	52                   	push   %edx
 8049e84:	3a 20                	cmp    (%eax),%ah
 8049e86:	6e                   	outsb  %ds:(%esi),(%dx)
 8049e87:	6f                   	outsl  %ds:(%esi),(%dx)
 8049e88:	74 69                	je     8049ef3 <array.2846+0x30b>
 8049e8a:	66 69 63 61 74 69    	imul   $0x6974,0x61(%ebx),%sp
 8049e90:	6f                   	outsl  %ds:(%esi),(%dx)
 8049e91:	6e                   	outsb  %ds:(%esi),(%dx)
 8049e92:	20 65 72             	and    %ah,0x72(%ebp)
 8049e95:	72 6f                	jb     8049f06 <array.2846+0x31e>
 8049e97:	72 00                	jb     8049e99 <array.2846+0x2b1>
 8049e99:	45                   	inc    %ebp
 8049e9a:	52                   	push   %edx
 8049e9b:	52                   	push   %edx
 8049e9c:	4f                   	dec    %edi
 8049e9d:	52                   	push   %edx
 8049e9e:	3a 20                	cmp    (%eax),%ah
 8049ea0:	66 63 6c 6f 73       	data16 arpl %bp,0x73(%edi,%ebp,2)
 8049ea5:	65 28 74 6d 70       	sub    %dh,%gs:0x70(%ebp,%ebp,2)
 8049eaa:	29 20                	sub    %esp,(%eax)
 8049eac:	65 72 72             	gs jb  8049f21 <array.2846+0x339>
 8049eaf:	6f                   	outsl  %ds:(%esi),(%dx)
 8049eb0:	72 00                	jb     8049eb2 <array.2846+0x2ca>
 8049eb2:	45                   	inc    %ebp
 8049eb3:	52                   	push   %edx
 8049eb4:	52                   	push   %edx
 8049eb5:	4f                   	dec    %edi
 8049eb6:	52                   	push   %edx
 8049eb7:	3a 20                	cmp    (%eax),%ah
 8049eb9:	64 75 70             	fs jne 8049f2c <array.2846+0x344>
 8049ebc:	28 74 6d 70          	sub    %dh,0x70(%ebp,%ebp,2)
 8049ec0:	73 74                	jae    8049f36 <array.2846+0x34e>
 8049ec2:	64 69 6e 29 20 65 72 	imul   $0x72726520,%fs:0x29(%esi),%ebp
 8049ec9:	72 
 8049eca:	6f                   	outsl  %ds:(%esi),(%dx)
 8049ecb:	72 00                	jb     8049ecd <array.2846+0x2e5>
 8049ecd:	45                   	inc    %ebp
 8049ece:	52                   	push   %edx
 8049ecf:	52                   	push   %edx
 8049ed0:	4f                   	dec    %edi
 8049ed1:	52                   	push   %edx
 8049ed2:	3a 20                	cmp    (%eax),%ah
 8049ed4:	63 6c 6f 73          	arpl   %bp,0x73(%edi,%ebp,2)
 8049ed8:	65 28 74 6d 70       	sub    %dh,%gs:0x70(%ebp,%ebp,2)
 8049edd:	73 74                	jae    8049f53 <array.2846+0x36b>
 8049edf:	64 69 6e 29 00 0a 42 	imul   $0x4f420a00,%fs:0x29(%esi),%ebp
 8049ee6:	4f 
 8049ee7:	4f                   	dec    %edi
 8049ee8:	4d                   	dec    %ebp
 8049ee9:	21 21                	and    %esp,(%ecx)
 8049eeb:	21 00                	and    %eax,(%eax)
 8049eed:	54                   	push   %esp
 8049eee:	68 65 20 62 6f       	push   $0x6f622065
 8049ef3:	6d                   	insl   (%dx),%es:(%edi)
 8049ef4:	62 20                	bound  %esp,(%eax)
 8049ef6:	68 61 73 20 62       	push   $0x62207361
 8049efb:	6c                   	insb   (%dx),%es:(%edi)
 8049efc:	6f                   	outsl  %ds:(%esi),(%dx)
 8049efd:	77 6e                	ja     8049f6d <array.2846+0x385>
 8049eff:	20 75 70             	and    %dh,0x70(%ebp)
 8049f02:	2e 00 25 64 20 25 64 	add    %ah,%cs:0x64252064
 8049f09:	20 25 64 20 25 64    	and    %ah,0x64252064
 8049f0f:	20 25 64 20 25 64    	and    %ah,0x64252064
 8049f15:	00 45 72             	add    %al,0x72(%ebp)
 8049f18:	72 6f                	jb     8049f89 <array.2846+0x3a1>
 8049f1a:	72 3a                	jb     8049f56 <array.2846+0x36e>
 8049f1c:	20 50 72             	and    %dl,0x72(%eax)
 8049f1f:	65 6d                	gs insl (%dx),%es:(%edi)
 8049f21:	61                   	popa   
 8049f22:	74 75                	je     8049f99 <array.2846+0x3b1>
 8049f24:	72 65                	jb     8049f8b <array.2846+0x3a3>
 8049f26:	20 45 4f             	and    %al,0x4f(%ebp)
 8049f29:	46                   	inc    %esi
 8049f2a:	20 6f 6e             	and    %ch,0x6e(%edi)
 8049f2d:	20 73 74             	and    %dh,0x74(%ebx)
 8049f30:	64 69 6e 00 47 52 41 	imul   $0x44415247,%fs:0x0(%esi),%ebp
 8049f37:	44 
 8049f38:	45                   	inc    %ebp
 8049f39:	5f                   	pop    %edi
 8049f3a:	42                   	inc    %edx
 8049f3b:	4f                   	dec    %edi
 8049f3c:	4d                   	dec    %ebp
 8049f3d:	42                   	inc    %edx
 8049f3e:	00 45 72             	add    %al,0x72(%ebp)
 8049f41:	72 6f                	jb     8049fb2 <array.2846+0x3ca>
 8049f43:	72 3a                	jb     8049f7f <array.2846+0x397>
 8049f45:	20 49 6e             	and    %cl,0x6e(%ecx)
 8049f48:	70 75                	jo     8049fbf <array.2846+0x3d7>
 8049f4a:	74 20                	je     8049f6c <array.2846+0x384>
 8049f4c:	6c                   	insb   (%dx),%es:(%edi)
 8049f4d:	69 6e 65 20 74 6f 6f 	imul   $0x6f6f7420,0x65(%esi),%ebp
 8049f54:	20 6c 6f 6e          	and    %ch,0x6e(%edi,%ebp,2)
 8049f58:	67 00 25             	add    %ah,(%di)
 8049f5b:	64 20 25 73 00 61 75 	and    %ah,%fs:0x75610073
 8049f62:	73 74                	jae    8049fd8 <array.2846+0x3f0>
 8049f64:	69 6e 70 6f 77 65 72 	imul   $0x7265776f,0x70(%esi),%ebp
 8049f6b:	73 00                	jae    8049f6d <array.2846+0x385>

Disassembly of section .eh_frame_hdr:

08049f70 <.eh_frame_hdr>:
 8049f70:	01 1b                	add    %ebx,(%ebx)
 8049f72:	03 3b                	add    (%ebx),%edi
 8049f74:	f0 00 00             	lock add %al,(%eax)
 8049f77:	00 1d 00 00 00 f0    	add    %bl,0xf0000000
 8049f7d:	e7 ff                	out    %eax,$0xff
 8049f7f:	ff 0c 01             	decl   (%ecx,%eax,1)
 8049f82:	00 00                	add    %al,(%eax)
 8049f84:	1b eb                	sbb    %ebx,%ebp
 8049f86:	ff                   	(bad)  
 8049f87:	ff 30                	pushl  (%eax)
 8049f89:	01 00                	add    %eax,(%eax)
 8049f8b:	00 72 ec             	add    %dh,-0x14(%edx)
 8049f8e:	ff                   	(bad)  
 8049f8f:	ff 68 01             	ljmp   *0x1(%eax)
 8049f92:	00 00                	add    %al,(%eax)
 8049f94:	93                   	xchg   %eax,%ebx
 8049f95:	ec                   	in     (%dx),%al
 8049f96:	ff                   	(bad)  
 8049f97:	ff 88 01 00 00 dc    	decl   -0x23ffffff(%eax)
 8049f9d:	ec                   	in     (%dx),%al
 8049f9e:	ff                   	(bad)  
 8049f9f:	ff cc                	dec    %esp
 8049fa1:	01 00                	add    %eax,(%eax)
 8049fa3:	00 1f                	add    %bl,(%edi)
 8049fa5:	ee                   	out    %al,(%dx)
 8049fa6:	ff                   	(bad)  
 8049fa7:	ff                   	(bad)  
 8049fa8:	f8                   	clc    
 8049fa9:	01 00                	add    %eax,(%eax)
 8049fab:	00 56 ee             	add    %dl,-0x12(%esi)
 8049fae:	ff                   	(bad)  
 8049faf:	ff 2c 02             	ljmp   *(%edx,%eax,1)
 8049fb2:	00 00                	add    %al,(%eax)
 8049fb4:	9f                   	lahf   
 8049fb5:	ee                   	out    %al,(%dx)
 8049fb6:	ff                   	(bad)  
 8049fb7:	ff 58 02             	lcall  *0x2(%eax)
 8049fba:	00 00                	add    %al,(%eax)
 8049fbc:	07                   	pop    %es
 8049fbd:	ef                   	out    %eax,(%dx)
 8049fbe:	ff                   	(bad)  
 8049fbf:	ff 8c 02 00 00 5c ef 	decl   -0x10a40000(%edx,%eax,1)
 8049fc6:	ff                   	(bad)  
 8049fc7:	ff b0 02 00 00 a0    	pushl  -0x5ffffffe(%eax)
 8049fcd:	ef                   	out    %eax,(%dx)
 8049fce:	ff                   	(bad)  
 8049fcf:	ff d4                	call   *%esp
 8049fd1:	02 00                	add    (%eax),%al
 8049fd3:	00 f1                	add    %dh,%cl
 8049fd5:	ef                   	out    %eax,(%dx)
 8049fd6:	ff                   	(bad)  
 8049fd7:	ff 0c 03             	decl   (%ebx,%eax,1)
 8049fda:	00 00                	add    %al,(%eax)
 8049fdc:	4d                   	dec    %ebp
 8049fdd:	f0 ff                	lock (bad) 
 8049fdf:	ff 50 03             	call   *0x3(%eax)
 8049fe2:	00 00                	add    %al,(%eax)
 8049fe4:	a4                   	movsb  %ds:(%esi),%es:(%edi)
 8049fe5:	f0 ff                	lock (bad) 
 8049fe7:	ff 70 03             	pushl  0x3(%eax)
 8049fea:	00 00                	add    %al,(%eax)
 8049fec:	c1                   	(bad)  
 8049fed:	f0 ff                	lock (bad) 
 8049fef:	ff 8c 03 00 00 e0 f0 	decl   -0xf200000(%ebx,%eax,1)
 8049ff6:	ff                   	(bad)  
 8049ff7:	ff a0 03 00 00 45    	jmp    *0x45000003(%eax)
 8049ffd:	f1                   	icebp  
 8049ffe:	ff                   	(bad)  
 8049fff:	ff d4                	call   *%esp
 804a001:	03 00                	add    (%eax),%eax
 804a003:	00 21                	add    %ah,(%ecx)
 804a005:	f2 ff                	repnz (bad) 
 804a007:	ff 48 04             	decl   0x4(%eax)
 804a00a:	00 00                	add    %al,(%eax)
 804a00c:	4b                   	dec    %ebx
 804a00d:	f2 ff                	repnz (bad) 
 804a00f:	ff 70 04             	pushl  0x4(%eax)
 804a012:	00 00                	add    %al,(%eax)
 804a014:	83 f2 ff             	xor    $0xffffffff,%edx
 804a017:	ff 9c 04 00 00 c8 f2 	lcall  *-0xd380000(%esp,%eax,1)
 804a01e:	ff                   	(bad)  
 804a01f:	ff d4                	call   *%esp
 804a021:	04 00                	add    $0x0,%al
 804a023:	00 19                	add    %bl,(%ecx)
 804a025:	f3 ff                	repz (bad) 
 804a027:	ff 20                	jmp    *(%eax)
 804a029:	05 00 00 26 f6       	add    $0xf6260000,%eax
 804a02e:	ff                   	(bad)  
 804a02f:	ff                   	(bad)  
 804a030:	dc 06                	faddl  (%esi)
 804a032:	00 00                	add    %al,(%eax)
 804a034:	5c                   	pop    %esp
 804a035:	f8                   	clc    
 804a036:	ff                   	(bad)  
 804a037:	ff                   	(bad)  
 804a038:	3c 08                	cmp    $0x8,%al
 804a03a:	00 00                	add    %al,(%eax)
 804a03c:	99                   	cltd   
 804a03d:	f8                   	clc    
 804a03e:	ff                   	(bad)  
 804a03f:	ff 54 08 00          	call   *0x0(%eax,%ecx,1)
 804a043:	00 d4                	add    %dl,%ah
 804a045:	f8                   	clc    
 804a046:	ff                   	(bad)  
 804a047:	ff 88 08 00 00 9b    	decl   -0x64fffff8(%eax)
 804a04d:	f9                   	stc    
 804a04e:	ff                   	(bad)  
 804a04f:	ff e4                	jmp    *%esp
 804a051:	08 00                	or     %al,(%eax)
 804a053:	00 30                	add    %dh,(%eax)
 804a055:	fa                   	cli    
 804a056:	ff                   	(bad)  
 804a057:	ff 34 09             	pushl  (%ecx,%ecx,1)
 804a05a:	00 00                	add    %al,(%eax)
 804a05c:	a0 fa ff ff 70       	mov    0x70fffffa,%al
 804a061:	09 00                	or     %eax,(%eax)
	...

Disassembly of section .eh_frame:

0804a064 <__FRAME_END__-0x890>:
 804a064:	14 00                	adc    $0x0,%al
 804a066:	00 00                	add    %al,(%eax)
 804a068:	00 00                	add    %al,(%eax)
 804a06a:	00 00                	add    %al,(%eax)
 804a06c:	01 7a 52             	add    %edi,0x52(%edx)
 804a06f:	00 01                	add    %al,(%ecx)
 804a071:	7c 08                	jl     804a07b <array.2846+0x493>
 804a073:	01 1b                	add    %ebx,(%ebx)
 804a075:	0c 04                	or     $0x4,%al
 804a077:	04 88                	add    $0x88,%al
 804a079:	01 00                	add    %eax,(%eax)
 804a07b:	00 20                	add    %ah,(%eax)
 804a07d:	00 00                	add    %al,(%eax)
 804a07f:	00 1c 00             	add    %bl,(%eax,%eax,1)
 804a082:	00 00                	add    %al,(%eax)
 804a084:	dc e6                	fsub   %st,%st(6)
 804a086:	ff                   	(bad)  
 804a087:	ff 30                	pushl  (%eax)
 804a089:	02 00                	add    (%eax),%al
 804a08b:	00 00                	add    %al,(%eax)
 804a08d:	0e                   	push   %cs
 804a08e:	08 46 0e             	or     %al,0xe(%esi)
 804a091:	0c 4a                	or     $0x4a,%al
 804a093:	0f 0b                	ud2    
 804a095:	74 04                	je     804a09b <array.2846+0x4b3>
 804a097:	78 00                	js     804a099 <array.2846+0x4b1>
 804a099:	3f                   	aas    
 804a09a:	1a 3b                	sbb    (%ebx),%bh
 804a09c:	2a 32                	sub    (%edx),%dh
 804a09e:	24 22                	and    $0x22,%al
 804a0a0:	34 00                	xor    $0x0,%al
 804a0a2:	00 00                	add    %al,(%eax)
 804a0a4:	40                   	inc    %eax
 804a0a5:	00 00                	add    %al,(%eax)
 804a0a7:	00 e3                	add    %ah,%bl
 804a0a9:	e9 ff ff 57 01       	jmp    95ca0ad <_end+0x157e25d>
 804a0ae:	00 00                	add    %al,(%eax)
 804a0b0:	00 44 0c 01          	add    %al,0x1(%esp,%ecx,1)
 804a0b4:	00 47 10             	add    %al,0x10(%edi)
 804a0b7:	05 02 75 00 44       	add    $0x44007502,%eax
 804a0bc:	0f 03 75 78          	lsl    0x78(%ebp),%esi
 804a0c0:	06                   	push   %es
 804a0c1:	10 03                	adc    %al,(%ebx)
 804a0c3:	02 75 7c             	add    0x7c(%ebp),%dh
 804a0c6:	03 42 01             	add    0x1(%edx),%eax
 804a0c9:	c1 0c 01 00          	rorl   $0x0,(%ecx,%eax,1)
 804a0cd:	41                   	inc    %ecx
 804a0ce:	c3                   	ret    
 804a0cf:	41                   	inc    %ecx
 804a0d0:	c5 43 0c             	lds    0xc(%ebx),%eax
 804a0d3:	04 04                	add    $0x4,%al
 804a0d5:	00 00                	add    %al,(%eax)
 804a0d7:	00 1c 00             	add    %bl,(%eax,%eax,1)
 804a0da:	00 00                	add    %al,(%eax)
 804a0dc:	78 00                	js     804a0de <array.2846+0x4f6>
 804a0de:	00 00                	add    %al,(%eax)
 804a0e0:	02 eb                	add    %bl,%ch
 804a0e2:	ff                   	(bad)  
 804a0e3:	ff 21                	jmp    *(%ecx)
 804a0e5:	00 00                	add    %al,(%eax)
 804a0e7:	00 00                	add    %al,(%eax)
 804a0e9:	43                   	inc    %ebx
 804a0ea:	0e                   	push   %cs
 804a0eb:	18 45 0e             	sbb    %al,0xe(%ebp)
 804a0ee:	1c 44                	sbb    $0x44,%al
 804a0f0:	0e                   	push   %cs
 804a0f1:	20 48 0e             	and    %cl,0xe(%eax)
 804a0f4:	10 4c 0e 04          	adc    %cl,0x4(%esi,%ecx,1)
 804a0f8:	40                   	inc    %eax
 804a0f9:	00 00                	add    %al,(%eax)
 804a0fb:	00 98 00 00 00 03    	add    %bl,0x3000000(%eax)
 804a101:	eb ff                	jmp    804a102 <array.2846+0x51a>
 804a103:	ff 49 00             	decl   0x0(%ecx)
 804a106:	00 00                	add    %al,(%eax)
 804a108:	00 41 0e             	add    %al,0xe(%ecx)
 804a10b:	08 85 02 41 0e 0c    	or     %al,0xc0e4102(%ebp)
 804a111:	87 03                	xchg   %eax,(%ebx)
 804a113:	41                   	inc    %ecx
 804a114:	0e                   	push   %cs
 804a115:	10 86 04 41 0e 14    	adc    %al,0x140e4104(%esi)
 804a11b:	83 05 43 0e 48 45 0e 	addl   $0xe,0x45480e43
 804a122:	4c                   	dec    %esp
 804a123:	44                   	inc    %esp
 804a124:	0e                   	push   %cs
 804a125:	50                   	push   %eax
 804a126:	4c                   	dec    %esp
 804a127:	0e                   	push   %cs
 804a128:	40                   	inc    %eax
 804a129:	68 0e 14 41 c3       	push   $0xc341140e
 804a12e:	0e                   	push   %cs
 804a12f:	10 41 c6             	adc    %al,-0x3a(%ecx)
 804a132:	0e                   	push   %cs
 804a133:	0c 41                	or     $0x41,%al
 804a135:	c7                   	(bad)  
 804a136:	0e                   	push   %cs
 804a137:	08 41 c5             	or     %al,-0x3b(%ecx)
 804a13a:	0e                   	push   %cs
 804a13b:	04 28                	add    $0x28,%al
 804a13d:	00 00                	add    %al,(%eax)
 804a13f:	00 dc                	add    %bl,%ah
 804a141:	00 00                	add    %al,(%eax)
 804a143:	00 08                	add    %cl,(%eax)
 804a145:	eb ff                	jmp    804a146 <array.2846+0x55e>
 804a147:	ff 43 01             	incl   0x1(%ebx)
 804a14a:	00 00                	add    %al,(%eax)
 804a14c:	00 43 0e             	add    %al,0xe(%ebx)
 804a14f:	2c 45                	sub    $0x45,%al
 804a151:	0e                   	push   %cs
 804a152:	30 45 0e             	xor    %al,0xe(%ebp)
 804a155:	34 45                	xor    $0x45,%al
 804a157:	0e                   	push   %cs
 804a158:	38 45 0e             	cmp    %al,0xe(%ebp)
 804a15b:	3c 44                	cmp    $0x44,%al
 804a15d:	0e                   	push   %cs
 804a15e:	40                   	inc    %eax
 804a15f:	48                   	dec    %eax
 804a160:	0e                   	push   %cs
 804a161:	20 03                	and    %al,(%ebx)
 804a163:	1f                   	pop    %ds
 804a164:	01 0e                	add    %ecx,(%esi)
 804a166:	04 00                	add    $0x0,%al
 804a168:	30 00                	xor    %al,(%eax)
 804a16a:	00 00                	add    %al,(%eax)
 804a16c:	08 01                	or     %al,(%ecx)
 804a16e:	00 00                	add    %al,(%eax)
 804a170:	1f                   	pop    %ds
 804a171:	ec                   	in     (%dx),%al
 804a172:	ff                   	(bad)  
 804a173:	ff 37                	pushl  (%edi)
 804a175:	00 00                	add    %al,(%eax)
 804a177:	00 00                	add    %al,(%eax)
 804a179:	41                   	inc    %ecx
 804a17a:	0e                   	push   %cs
 804a17b:	08 86 02 41 0e 0c    	or     %al,0xc0e4102(%esi)
 804a181:	83 03 43             	addl   $0x43,(%ebx)
 804a184:	0e                   	push   %cs
 804a185:	10 51 0e             	adc    %dl,0xe(%ecx)
 804a188:	1c 44                	sbb    $0x44,%al
 804a18a:	0e                   	push   %cs
 804a18b:	20 55 0e             	and    %dl,0xe(%ebp)
 804a18e:	10 45 0e             	adc    %al,0xe(%ebp)
 804a191:	0c 41                	or     $0x41,%al
 804a193:	c3                   	ret    
 804a194:	0e                   	push   %cs
 804a195:	08 41 c6             	or     %al,-0x3a(%ecx)
 804a198:	0e                   	push   %cs
 804a199:	04 00                	add    $0x0,%al
 804a19b:	00 28                	add    %ch,(%eax)
 804a19d:	00 00                	add    %al,(%eax)
 804a19f:	00 3c 01             	add    %bh,(%ecx,%eax,1)
 804a1a2:	00 00                	add    %al,(%eax)
 804a1a4:	22 ec                	and    %ah,%ch
 804a1a6:	ff                   	(bad)  
 804a1a7:	ff 49 00             	decl   0x0(%ecx)
 804a1aa:	00 00                	add    %al,(%eax)
 804a1ac:	00 43 0e             	add    %al,0xe(%ebx)
 804a1af:	24 45                	and    $0x45,%al
 804a1b1:	0e                   	push   %cs
 804a1b2:	28 45 0e             	sub    %al,0xe(%ebp)
 804a1b5:	2c 44                	sub    $0x44,%al
 804a1b7:	0e                   	push   %cs
 804a1b8:	30 48 0e             	xor    %cl,0xe(%eax)
 804a1bb:	20 54 0e 2c          	and    %dl,0x2c(%esi,%ecx,1)
 804a1bf:	44                   	inc    %esp
 804a1c0:	0e                   	push   %cs
 804a1c1:	30 48 0e             	xor    %cl,0xe(%eax)
 804a1c4:	20 4f 0e             	and    %cl,0xe(%edi)
 804a1c7:	04 30                	add    $0x30,%al
 804a1c9:	00 00                	add    %al,(%eax)
 804a1cb:	00 68 01             	add    %ch,0x1(%eax)
 804a1ce:	00 00                	add    %al,(%eax)
 804a1d0:	3f                   	aas    
 804a1d1:	ec                   	in     (%dx),%al
 804a1d2:	ff                   	(bad)  
 804a1d3:	ff 68 00             	ljmp   *0x0(%eax)
 804a1d6:	00 00                	add    %al,(%eax)
 804a1d8:	00 41 0e             	add    %al,0xe(%ecx)
 804a1db:	08 83 02 43 0e 2c    	or     %al,0x2c0e4302(%ebx)
 804a1e1:	45                   	inc    %ebp
 804a1e2:	0e                   	push   %cs
 804a1e3:	30 48 0e             	xor    %cl,0xe(%eax)
 804a1e6:	20 6e 0e             	and    %ch,0xe(%esi)
 804a1e9:	28 45 0e             	sub    %al,0xe(%ebp)
 804a1ec:	2c 45                	sub    $0x45,%al
 804a1ee:	0e                   	push   %cs
 804a1ef:	30 48 0e             	xor    %cl,0xe(%eax)
 804a1f2:	20 55 0e             	and    %dl,0xe(%ebp)
 804a1f5:	08 41 c3             	or     %al,-0x3d(%ecx)
 804a1f8:	0e                   	push   %cs
 804a1f9:	04 00                	add    $0x0,%al
 804a1fb:	00 20                	add    %ah,(%eax)
 804a1fd:	00 00                	add    %al,(%eax)
 804a1ff:	00 9c 01 00 00 73 ec 	add    %bl,-0x138d0000(%ecx,%eax,1)
 804a206:	ff                   	(bad)  
 804a207:	ff 55 00             	call   *0x0(%ebp)
 804a20a:	00 00                	add    %al,(%eax)
 804a20c:	00 41 0e             	add    %al,0xe(%ecx)
 804a20f:	08 86 02 41 0e 0c    	or     %al,0xc0e4102(%esi)
 804a215:	83 03 02             	addl   $0x2,(%ebx)
 804a218:	51                   	push   %ecx
 804a219:	c3                   	ret    
 804a21a:	0e                   	push   %cs
 804a21b:	08 41 c6             	or     %al,-0x3a(%ecx)
 804a21e:	0e                   	push   %cs
 804a21f:	04 20                	add    $0x20,%al
 804a221:	00 00                	add    %al,(%eax)
 804a223:	00 c0                	add    %al,%al
 804a225:	01 00                	add    %eax,(%eax)
 804a227:	00 a4 ec ff ff 44 00 	add    %ah,0x44ffff(%esp,%ebp,8)
 804a22e:	00 00                	add    %al,(%eax)
 804a230:	00 43 0e             	add    %al,0xe(%ebx)
 804a233:	14 42                	adc    $0x42,%al
 804a235:	0e                   	push   %cs
 804a236:	18 42 0e             	sbb    %al,0xe(%edx)
 804a239:	1c 44                	sbb    $0x44,%al
 804a23b:	0e                   	push   %cs
 804a23c:	20 59 0e             	and    %bl,0xe(%ecx)
 804a23f:	10 5f 0e             	adc    %bl,0xe(%edi)
 804a242:	04 00                	add    $0x0,%al
 804a244:	34 00                	xor    $0x0,%al
 804a246:	00 00                	add    %al,(%eax)
 804a248:	e4 01                	in     $0x1,%al
 804a24a:	00 00                	add    %al,(%eax)
 804a24c:	c4                   	(bad)  
 804a24d:	ec                   	in     (%dx),%al
 804a24e:	ff                   	(bad)  
 804a24f:	ff 51 00             	call   *0x0(%ecx)
 804a252:	00 00                	add    %al,(%eax)
 804a254:	00 41 0e             	add    %al,0xe(%ecx)
 804a257:	08 83 02 43 0e 10    	or     %al,0x100e4302(%ebx)
 804a25d:	55                   	push   %ebp
 804a25e:	0e                   	push   %cs
 804a25f:	18 41 0e             	sbb    %al,0xe(%ecx)
 804a262:	1c 43                	sbb    $0x43,%al
 804a264:	0e                   	push   %cs
 804a265:	20 48 0e             	and    %cl,0xe(%eax)
 804a268:	10 50 0e             	adc    %dl,0xe(%eax)
 804a26b:	18 41 0e             	sbb    %al,0xe(%ecx)
 804a26e:	1c 43                	sbb    $0x43,%al
 804a270:	0e                   	push   %cs
 804a271:	20 48 0e             	and    %cl,0xe(%eax)
 804a274:	10 4e 0e             	adc    %cl,0xe(%esi)
 804a277:	08 41 c3             	or     %al,-0x3d(%ecx)
 804a27a:	0e                   	push   %cs
 804a27b:	04 40                	add    $0x40,%al
 804a27d:	00 00                	add    %al,(%eax)
 804a27f:	00 1c 02             	add    %bl,(%edx,%eax,1)
 804a282:	00 00                	add    %al,(%eax)
 804a284:	dd ec                	fucomp %st(4)
 804a286:	ff                   	(bad)  
 804a287:	ff 5c 00 00          	lcall  *0x0(%eax,%eax,1)
 804a28b:	00 00                	add    %al,(%eax)
 804a28d:	41                   	inc    %ecx
 804a28e:	0e                   	push   %cs
 804a28f:	08 83 02 43 0e 10    	or     %al,0x100e4302(%ebx)
 804a295:	48                   	dec    %eax
 804a296:	0e                   	push   %cs
 804a297:	14 42                	adc    $0x42,%al
 804a299:	0e                   	push   %cs
 804a29a:	18 42 0e             	sbb    %al,0xe(%edx)
 804a29d:	1c 41                	sbb    $0x41,%al
 804a29f:	0e                   	push   %cs
 804a2a0:	20 4d 0e             	and    %cl,0xe(%ebp)
 804a2a3:	10 4f 0e             	adc    %cl,0xe(%edi)
 804a2a6:	18 41 0e             	sbb    %al,0xe(%ecx)
 804a2a9:	1c 45                	sbb    $0x45,%al
 804a2ab:	0e                   	push   %cs
 804a2ac:	20 48 0e             	and    %cl,0xe(%eax)
 804a2af:	10 4d 0e             	adc    %cl,0xe(%ebp)
 804a2b2:	1c 45                	sbb    $0x45,%al
 804a2b4:	0e                   	push   %cs
 804a2b5:	20 4d 0e             	and    %cl,0xe(%ebp)
 804a2b8:	08 41 c3             	or     %al,-0x3d(%ecx)
 804a2bb:	0e                   	push   %cs
 804a2bc:	04 00                	add    $0x0,%al
 804a2be:	00 00                	add    %al,(%eax)
 804a2c0:	1c 00                	sbb    $0x0,%al
 804a2c2:	00 00                	add    %al,(%eax)
 804a2c4:	60                   	pusha  
 804a2c5:	02 00                	add    (%eax),%al
 804a2c7:	00 f5                	add    %dh,%ch
 804a2c9:	ec                   	in     (%dx),%al
 804a2ca:	ff                   	(bad)  
 804a2cb:	ff 57 00             	call   *0x0(%edi)
 804a2ce:	00 00                	add    %al,(%eax)
 804a2d0:	00 43 0e             	add    %al,0xe(%ebx)
 804a2d3:	1c 45                	sbb    $0x45,%al
 804a2d5:	0e                   	push   %cs
 804a2d6:	20 60 0e             	and    %ah,0xe(%eax)
 804a2d9:	1c 46                	sbb    $0x46,%al
 804a2db:	0e                   	push   %cs
 804a2dc:	20 00                	and    %al,(%eax)
 804a2de:	00 00                	add    %al,(%eax)
 804a2e0:	18 00                	sbb    %al,(%eax)
 804a2e2:	00 00                	add    %al,(%eax)
 804a2e4:	80 02 00             	addb   $0x0,(%edx)
 804a2e7:	00 2c ed ff ff 1d 00 	add    %ch,0x1dffff(,%ebp,8)
 804a2ee:	00 00                	add    %al,(%eax)
 804a2f0:	00 43 0e             	add    %al,0xe(%ebx)
 804a2f3:	18 44 0e 1c          	sbb    %al,0x1c(%esi,%ecx,1)
 804a2f7:	45                   	inc    %ebp
 804a2f8:	0e                   	push   %cs
 804a2f9:	20 00                	and    %al,(%eax)
 804a2fb:	00 10                	add    %dl,(%eax)
 804a2fd:	00 00                	add    %al,(%eax)
 804a2ff:	00 9c 02 00 00 2d ed 	add    %bl,-0x12d30000(%edx,%eax,1)
 804a306:	ff                   	(bad)  
 804a307:	ff 1f                	lcall  *(%edi)
 804a309:	00 00                	add    %al,(%eax)
 804a30b:	00 00                	add    %al,(%eax)
 804a30d:	00 00                	add    %al,(%eax)
 804a30f:	00 30                	add    %dh,(%eax)
 804a311:	00 00                	add    %al,(%eax)
 804a313:	00 b0 02 00 00 38    	add    %dh,0x38000002(%eax)
 804a319:	ed                   	in     (%dx),%eax
 804a31a:	ff                   	(bad)  
 804a31b:	ff 65 00             	jmp    *0x0(%ebp)
 804a31e:	00 00                	add    %al,(%eax)
 804a320:	00 41 0e             	add    %al,0xe(%ecx)
 804a323:	08 87 02 41 0e 0c    	or     %al,0xc0e4102(%edi)
 804a329:	86 03                	xchg   %al,(%ebx)
 804a32b:	41                   	inc    %ecx
 804a32c:	0e                   	push   %cs
 804a32d:	10 83 04 49 0e 14    	adc    %al,0x140e4904(%ebx)
 804a333:	52                   	push   %edx
 804a334:	0e                   	push   %cs
 804a335:	10 02                	adc    %al,(%edx)
 804a337:	44                   	inc    %esp
 804a338:	c3                   	ret    
 804a339:	0e                   	push   %cs
 804a33a:	0c 41                	or     $0x41,%al
 804a33c:	c6                   	(bad)  
 804a33d:	0e                   	push   %cs
 804a33e:	08 41 c7             	or     %al,-0x39(%ecx)
 804a341:	0e                   	push   %cs
 804a342:	04 00                	add    $0x0,%al
 804a344:	70 00                	jo     804a346 <array.2846+0x75e>
 804a346:	00 00                	add    %al,(%eax)
 804a348:	e4 02                	in     $0x2,%al
 804a34a:	00 00                	add    %al,(%eax)
 804a34c:	69 ed ff ff dc 00    	imul   $0xdcffff,%ebp,%ebp
 804a352:	00 00                	add    %al,(%eax)
 804a354:	00 41 0e             	add    %al,0xe(%ecx)
 804a357:	08 86 02 41 0e 0c    	or     %al,0xc0e4102(%esi)
 804a35d:	83 03 43             	addl   $0x43,(%ebx)
 804a360:	0e                   	push   %cs
 804a361:	24 42                	and    $0x42,%al
 804a363:	0e                   	push   %cs
 804a364:	28 42 0e             	sub    %al,0xe(%edx)
 804a367:	2c 42                	sub    $0x42,%al
 804a369:	0e                   	push   %cs
 804a36a:	30 4a 0e             	xor    %cl,0xe(%edx)
 804a36d:	20 47 0e             	and    %al,0xe(%edi)
 804a370:	2c 45                	sub    $0x45,%al
 804a372:	0e                   	push   %cs
 804a373:	30 51 0e             	xor    %dl,0xe(%ecx)
 804a376:	20 43 0a             	and    %al,0xa(%ebx)
 804a379:	0e                   	push   %cs
 804a37a:	2c 44                	sub    $0x44,%al
 804a37c:	0e                   	push   %cs
 804a37d:	30 48 0e             	xor    %cl,0xe(%eax)
 804a380:	20 47 0e             	and    %al,0xe(%edi)
 804a383:	2c 45                	sub    $0x45,%al
 804a385:	0e                   	push   %cs
 804a386:	30 51 0b             	xor    %dl,0xb(%ecx)
 804a389:	6a 0a                	push   $0xa
 804a38b:	0e                   	push   %cs
 804a38c:	24 43                	and    $0x43,%al
 804a38e:	0e                   	push   %cs
 804a38f:	28 45 0e             	sub    %al,0xe(%ebp)
 804a392:	2c 45                	sub    $0x45,%al
 804a394:	0e                   	push   %cs
 804a395:	30 56 0e             	xor    %dl,0xe(%esi)
 804a398:	24 42                	and    $0x42,%al
 804a39a:	0e                   	push   %cs
 804a39b:	28 41 0e             	sub    %al,0xe(%ecx)
 804a39e:	2c 41                	sub    $0x41,%al
 804a3a0:	0e                   	push   %cs
 804a3a1:	30 48 0e             	xor    %cl,0xe(%eax)
 804a3a4:	20 47 0e             	and    %al,0xe(%edi)
 804a3a7:	2c 45                	sub    $0x45,%al
 804a3a9:	0e                   	push   %cs
 804a3aa:	30 51 0b             	xor    %dl,0xb(%ecx)
 804a3ad:	45                   	inc    %ebp
 804a3ae:	0e                   	push   %cs
 804a3af:	0c 41                	or     $0x41,%al
 804a3b1:	c3                   	ret    
 804a3b2:	0e                   	push   %cs
 804a3b3:	08 41 c6             	or     %al,-0x3a(%ecx)
 804a3b6:	0e                   	push   %cs
 804a3b7:	04 24                	add    $0x24,%al
 804a3b9:	00 00                	add    %al,(%eax)
 804a3bb:	00 58 03             	add    %bl,0x3(%eax)
 804a3be:	00 00                	add    %al,(%eax)
 804a3c0:	d1 ed                	shr    %ebp
 804a3c2:	ff                   	(bad)  
 804a3c3:	ff 2a                	ljmp   *(%edx)
 804a3c5:	00 00                	add    %al,(%eax)
 804a3c7:	00 00                	add    %al,(%eax)
 804a3c9:	43                   	inc    %ebx
 804a3ca:	0e                   	push   %cs
 804a3cb:	18 45 0e             	sbb    %al,0xe(%ebp)
 804a3ce:	1c 42                	sbb    $0x42,%al
 804a3d0:	0e                   	push   %cs
 804a3d1:	20 48 0e             	and    %cl,0xe(%eax)
 804a3d4:	18 42 0e             	sbb    %al,0xe(%edx)
 804a3d7:	1c 45                	sbb    $0x45,%al
 804a3d9:	0e                   	push   %cs
 804a3da:	20 50 0e             	and    %dl,0xe(%eax)
 804a3dd:	04 00                	add    $0x0,%al
 804a3df:	00 28                	add    %ch,(%eax)
 804a3e1:	00 00                	add    %al,(%eax)
 804a3e3:	00 80 03 00 00 d3    	add    %al,-0x2cfffffd(%eax)
 804a3e9:	ed                   	in     (%dx),%eax
 804a3ea:	ff                   	(bad)  
 804a3eb:	ff                   	(bad)  
 804a3ec:	38 00                	cmp    %al,(%eax)
 804a3ee:	00 00                	add    %al,(%eax)
 804a3f0:	00 41 0e             	add    %al,0xe(%ecx)
 804a3f3:	08 86 02 41 0e 0c    	or     %al,0xc0e4102(%esi)
 804a3f9:	83 03 43             	addl   $0x43,(%ebx)
 804a3fc:	0e                   	push   %cs
 804a3fd:	10 70 0e             	adc    %dh,0xe(%eax)
 804a400:	0c 41                	or     $0x41,%al
 804a402:	c3                   	ret    
 804a403:	0e                   	push   %cs
 804a404:	08 41 c6             	or     %al,-0x3a(%ecx)
 804a407:	0e                   	push   %cs
 804a408:	04 00                	add    $0x0,%al
 804a40a:	00 00                	add    %al,(%eax)
 804a40c:	34 00                	xor    $0x0,%al
 804a40e:	00 00                	add    %al,(%eax)
 804a410:	ac                   	lods   %ds:(%esi),%al
 804a411:	03 00                	add    (%eax),%eax
 804a413:	00 df                	add    %bl,%bh
 804a415:	ed                   	in     (%dx),%eax
 804a416:	ff                   	(bad)  
 804a417:	ff 45 00             	incl   0x0(%ebp)
 804a41a:	00 00                	add    %al,(%eax)
 804a41c:	00 41 0e             	add    %al,0xe(%ecx)
 804a41f:	08 83 02 43 0e 10    	or     %al,0x100e4302(%ebx)
 804a425:	43                   	inc    %ebx
 804a426:	0e                   	push   %cs
 804a427:	14 46                	adc    $0x46,%al
 804a429:	0e                   	push   %cs
 804a42a:	18 42 0e             	sbb    %al,0xe(%edx)
 804a42d:	1c 51                	sbb    $0x51,%al
 804a42f:	0e                   	push   %cs
 804a430:	20 4a 0e             	and    %cl,0xe(%edx)
 804a433:	10 47 0e             	adc    %al,0xe(%edi)
 804a436:	1c 41                	sbb    $0x41,%al
 804a438:	0e                   	push   %cs
 804a439:	20 48 0e             	and    %cl,0xe(%eax)
 804a43c:	10 49 0e             	adc    %cl,0xe(%ecx)
 804a43f:	08 41 c3             	or     %al,-0x3d(%ecx)
 804a442:	0e                   	push   %cs
 804a443:	04 48                	add    $0x48,%al
 804a445:	00 00                	add    %al,(%eax)
 804a447:	00 e4                	add    %ah,%ah
 804a449:	03 00                	add    (%eax),%eax
 804a44b:	00 ec                	add    %ch,%ah
 804a44d:	ed                   	in     (%dx),%eax
 804a44e:	ff                   	(bad)  
 804a44f:	ff 51 00             	call   *0x0(%ecx)
 804a452:	00 00                	add    %al,(%eax)
 804a454:	00 41 0e             	add    %al,0xe(%ecx)
 804a457:	08 85 02 41 0e 0c    	or     %al,0xc0e4102(%ebp)
 804a45d:	87 03                	xchg   %eax,(%ebx)
 804a45f:	41                   	inc    %ecx
 804a460:	0e                   	push   %cs
 804a461:	10 86 04 41 0e 14    	adc    %al,0x140e4104(%esi)
 804a467:	83 05 43 0e 20 55 0e 	addl   $0xe,0x55200e43
 804a46e:	24 41                	and    $0x41,%al
 804a470:	0e                   	push   %cs
 804a471:	28 41 0e             	sub    %al,0xe(%ecx)
 804a474:	2c 41                	sub    $0x41,%al
 804a476:	0e                   	push   %cs
 804a477:	30 48 0e             	xor    %cl,0xe(%eax)
 804a47a:	20 65 0e             	and    %ah,0xe(%ebp)
 804a47d:	14 41                	adc    $0x41,%al
 804a47f:	c3                   	ret    
 804a480:	0e                   	push   %cs
 804a481:	10 41 c6             	adc    %al,-0x3a(%ecx)
 804a484:	0e                   	push   %cs
 804a485:	0c 41                	or     $0x41,%al
 804a487:	c7                   	(bad)  
 804a488:	0e                   	push   %cs
 804a489:	08 41 c5             	or     %al,-0x3b(%ecx)
 804a48c:	0e                   	push   %cs
 804a48d:	04 00                	add    $0x0,%al
 804a48f:	00 b8 01 00 00 30    	add    %bh,0x30000001(%eax)
 804a495:	04 00                	add    $0x0,%al
 804a497:	00 f1                	add    %dh,%cl
 804a499:	ed                   	in     (%dx),%eax
 804a49a:	ff                   	(bad)  
 804a49b:	ff 0d 03 00 00 00    	decl   0x3
 804a4a1:	41                   	inc    %ecx
 804a4a2:	0e                   	push   %cs
 804a4a3:	08 85 02 41 0e 0c    	or     %al,0xc0e4102(%ebp)
 804a4a9:	87 03                	xchg   %eax,(%ebx)
 804a4ab:	41                   	inc    %ecx
 804a4ac:	0e                   	push   %cs
 804a4ad:	10 86 04 41 0e 14    	adc    %al,0x140e4104(%esi)
 804a4b3:	83 05 46 0e 94 49 42 	addl   $0x42,0x49940e46
 804a4ba:	0e                   	push   %cs
 804a4bb:	98                   	cwtl   
 804a4bc:	49                   	dec    %ecx
 804a4bd:	42                   	inc    %edx
 804a4be:	0e                   	push   %cs
 804a4bf:	9c                   	pushf  
 804a4c0:	49                   	dec    %ecx
 804a4c1:	42                   	inc    %edx
 804a4c2:	0e                   	push   %cs
 804a4c3:	a0 49 4c 0e 90       	mov    0x900e4c49,%al
 804a4c8:	49                   	dec    %ecx
 804a4c9:	47                   	inc    %edi
 804a4ca:	0e                   	push   %cs
 804a4cb:	94                   	xchg   %eax,%esp
 804a4cc:	49                   	dec    %ecx
 804a4cd:	45                   	inc    %ebp
 804a4ce:	0e                   	push   %cs
 804a4cf:	98                   	cwtl   
 804a4d0:	49                   	dec    %ecx
 804a4d1:	45                   	inc    %ebp
 804a4d2:	0e                   	push   %cs
 804a4d3:	9c                   	pushf  
 804a4d4:	49                   	dec    %ecx
 804a4d5:	46                   	inc    %esi
 804a4d6:	0e                   	push   %cs
 804a4d7:	a0 49 48 0e 9c       	mov    0x9c0e4849,%al
 804a4dc:	49                   	dec    %ecx
 804a4dd:	44                   	inc    %esp
 804a4de:	0e                   	push   %cs
 804a4df:	a0 49 51 0e 90       	mov    0x900e5149,%al
 804a4e4:	49                   	dec    %ecx
 804a4e5:	78 0e                	js     804a4f5 <array.2846+0x90d>
 804a4e7:	94                   	xchg   %eax,%esp
 804a4e8:	49                   	dec    %ecx
 804a4e9:	48                   	dec    %eax
 804a4ea:	0e                   	push   %cs
 804a4eb:	98                   	cwtl   
 804a4ec:	49                   	dec    %ecx
 804a4ed:	45                   	inc    %ebp
 804a4ee:	0e                   	push   %cs
 804a4ef:	9c                   	pushf  
 804a4f0:	49                   	dec    %ecx
 804a4f1:	42                   	inc    %edx
 804a4f2:	0e                   	push   %cs
 804a4f3:	a0 49 48 0e 90       	mov    0x900e4849,%al
 804a4f8:	49                   	dec    %ecx
 804a4f9:	47                   	inc    %edi
 804a4fa:	0e                   	push   %cs
 804a4fb:	94                   	xchg   %eax,%esp
 804a4fc:	49                   	dec    %ecx
 804a4fd:	45                   	inc    %ebp
 804a4fe:	0e                   	push   %cs
 804a4ff:	98                   	cwtl   
 804a500:	49                   	dec    %ecx
 804a501:	45                   	inc    %ebp
 804a502:	0e                   	push   %cs
 804a503:	9c                   	pushf  
 804a504:	49                   	dec    %ecx
 804a505:	46                   	inc    %esi
 804a506:	0e                   	push   %cs
 804a507:	a0 49 48 0e 90       	mov    0x900e4849,%al
 804a50c:	49                   	dec    %ecx
 804a50d:	4a                   	dec    %edx
 804a50e:	0e                   	push   %cs
 804a50f:	9c                   	pushf  
 804a510:	49                   	dec    %ecx
 804a511:	44                   	inc    %esp
 804a512:	0e                   	push   %cs
 804a513:	a0 49 48 0e 90       	mov    0x900e4849,%al
 804a518:	49                   	dec    %ecx
 804a519:	43                   	inc    %ebx
 804a51a:	0a 0e                	or     (%esi),%cl
 804a51c:	9c                   	pushf  
 804a51d:	49                   	dec    %ecx
 804a51e:	42                   	inc    %edx
 804a51f:	0e                   	push   %cs
 804a520:	a0 49 45 0b 43       	mov    0x430b4549,%al
 804a525:	0e                   	push   %cs
 804a526:	94                   	xchg   %eax,%esp
 804a527:	49                   	dec    %ecx
 804a528:	42                   	inc    %edx
 804a529:	0e                   	push   %cs
 804a52a:	98                   	cwtl   
 804a52b:	49                   	dec    %ecx
 804a52c:	48                   	dec    %eax
 804a52d:	0e                   	push   %cs
 804a52e:	9c                   	pushf  
 804a52f:	49                   	dec    %ecx
 804a530:	44                   	inc    %esp
 804a531:	0e                   	push   %cs
 804a532:	a0 49 48 0e 90       	mov    0x900e4849,%al
 804a537:	49                   	dec    %ecx
 804a538:	47                   	inc    %edi
 804a539:	0e                   	push   %cs
 804a53a:	94                   	xchg   %eax,%esp
 804a53b:	49                   	dec    %ecx
 804a53c:	45                   	inc    %ebp
 804a53d:	0e                   	push   %cs
 804a53e:	98                   	cwtl   
 804a53f:	49                   	dec    %ecx
 804a540:	45                   	inc    %ebp
 804a541:	0e                   	push   %cs
 804a542:	9c                   	pushf  
 804a543:	49                   	dec    %ecx
 804a544:	46                   	inc    %esi
 804a545:	0e                   	push   %cs
 804a546:	a0 49 48 0e 90       	mov    0x900e4849,%al
 804a54b:	49                   	dec    %ecx
 804a54c:	4a                   	dec    %edx
 804a54d:	0e                   	push   %cs
 804a54e:	9c                   	pushf  
 804a54f:	49                   	dec    %ecx
 804a550:	44                   	inc    %esp
 804a551:	0e                   	push   %cs
 804a552:	a0 49 48 0e 90       	mov    0x900e4849,%al
 804a557:	49                   	dec    %ecx
 804a558:	43                   	inc    %ebx
 804a559:	0a 0e                	or     (%esi),%cl
 804a55b:	9c                   	pushf  
 804a55c:	49                   	dec    %ecx
 804a55d:	42                   	inc    %edx
 804a55e:	0e                   	push   %cs
 804a55f:	a0 49 45 0b 7f       	mov    0x7f0b4549,%al
 804a564:	0e                   	push   %cs
 804a565:	98                   	cwtl   
 804a566:	49                   	dec    %ecx
 804a567:	41                   	inc    %ecx
 804a568:	0e                   	push   %cs
 804a569:	9c                   	pushf  
 804a56a:	49                   	dec    %ecx
 804a56b:	48                   	dec    %eax
 804a56c:	0e                   	push   %cs
 804a56d:	a0 49 4f 0e 98       	mov    0x980e4f49,%al
 804a572:	49                   	dec    %ecx
 804a573:	41                   	inc    %ecx
 804a574:	0e                   	push   %cs
 804a575:	9c                   	pushf  
 804a576:	49                   	dec    %ecx
 804a577:	41                   	inc    %ecx
 804a578:	0e                   	push   %cs
 804a579:	a0 49 54 0e 90       	mov    0x900e5449,%al
 804a57e:	49                   	dec    %ecx
 804a57f:	5d                   	pop    %ebp
 804a580:	0e                   	push   %cs
 804a581:	98                   	cwtl   
 804a582:	49                   	dec    %ecx
 804a583:	41                   	inc    %ecx
 804a584:	0e                   	push   %cs
 804a585:	9c                   	pushf  
 804a586:	49                   	dec    %ecx
 804a587:	45                   	inc    %ebp
 804a588:	0e                   	push   %cs
 804a589:	a0 49 48 0e 90       	mov    0x900e4849,%al
 804a58e:	49                   	dec    %ecx
 804a58f:	5d                   	pop    %ebp
 804a590:	0e                   	push   %cs
 804a591:	94                   	xchg   %eax,%esp
 804a592:	49                   	dec    %ecx
 804a593:	41                   	inc    %ecx
 804a594:	0e                   	push   %cs
 804a595:	98                   	cwtl   
 804a596:	49                   	dec    %ecx
 804a597:	41                   	inc    %ecx
 804a598:	0e                   	push   %cs
 804a599:	9c                   	pushf  
 804a59a:	49                   	dec    %ecx
 804a59b:	45                   	inc    %ebp
 804a59c:	0e                   	push   %cs
 804a59d:	a0 49 46 0e a4       	mov    0xa40e4649,%al
 804a5a2:	49                   	dec    %ecx
 804a5a3:	45                   	inc    %ebp
 804a5a4:	0e                   	push   %cs
 804a5a5:	a8 49                	test   $0x49,%al
 804a5a7:	45                   	inc    %ebp
 804a5a8:	0e                   	push   %cs
 804a5a9:	ac                   	lods   %ds:(%esi),%al
 804a5aa:	49                   	dec    %ecx
 804a5ab:	45                   	inc    %ebp
 804a5ac:	0e                   	push   %cs
 804a5ad:	b0 49                	mov    $0x49,%al
 804a5af:	48                   	dec    %eax
 804a5b0:	0e                   	push   %cs
 804a5b1:	98                   	cwtl   
 804a5b2:	49                   	dec    %ecx
 804a5b3:	41                   	inc    %ecx
 804a5b4:	0e                   	push   %cs
 804a5b5:	9c                   	pushf  
 804a5b6:	49                   	dec    %ecx
 804a5b7:	48                   	dec    %eax
 804a5b8:	0e                   	push   %cs
 804a5b9:	a0 49 48 0e 90       	mov    0x900e4849,%al
 804a5be:	49                   	dec    %ecx
 804a5bf:	61                   	popa   
 804a5c0:	0e                   	push   %cs
 804a5c1:	94                   	xchg   %eax,%esp
 804a5c2:	49                   	dec    %ecx
 804a5c3:	41                   	inc    %ecx
 804a5c4:	0e                   	push   %cs
 804a5c5:	98                   	cwtl   
 804a5c6:	49                   	dec    %ecx
 804a5c7:	41                   	inc    %ecx
 804a5c8:	0e                   	push   %cs
 804a5c9:	9c                   	pushf  
 804a5ca:	49                   	dec    %ecx
 804a5cb:	41                   	inc    %ecx
 804a5cc:	0e                   	push   %cs
 804a5cd:	a0 49 46 0e a4       	mov    0xa40e4649,%al
 804a5d2:	49                   	dec    %ecx
 804a5d3:	45                   	inc    %ebp
 804a5d4:	0e                   	push   %cs
 804a5d5:	a8 49                	test   $0x49,%al
 804a5d7:	45                   	inc    %ebp
 804a5d8:	0e                   	push   %cs
 804a5d9:	ac                   	lods   %ds:(%esi),%al
 804a5da:	49                   	dec    %ecx
 804a5db:	41                   	inc    %ecx
 804a5dc:	0e                   	push   %cs
 804a5dd:	b0 49                	mov    $0x49,%al
 804a5df:	48                   	dec    %eax
 804a5e0:	0e                   	push   %cs
 804a5e1:	98                   	cwtl   
 804a5e2:	49                   	dec    %ecx
 804a5e3:	41                   	inc    %ecx
 804a5e4:	0e                   	push   %cs
 804a5e5:	9c                   	pushf  
 804a5e6:	49                   	dec    %ecx
 804a5e7:	48                   	dec    %eax
 804a5e8:	0e                   	push   %cs
 804a5e9:	a0 49 4b 0e 90       	mov    0x900e4b49,%al
 804a5ee:	49                   	dec    %ecx
 804a5ef:	69 0e 94 49 41 0e    	imul   $0xe414994,(%esi),%ecx
 804a5f5:	98                   	cwtl   
 804a5f6:	49                   	dec    %ecx
 804a5f7:	41                   	inc    %ecx
 804a5f8:	0e                   	push   %cs
 804a5f9:	9c                   	pushf  
 804a5fa:	49                   	dec    %ecx
 804a5fb:	44                   	inc    %esp
 804a5fc:	0e                   	push   %cs
 804a5fd:	a0 49 57 0e 90       	mov    0x900e5749,%al
 804a602:	49                   	dec    %ecx
 804a603:	47                   	inc    %edi
 804a604:	0e                   	push   %cs
 804a605:	94                   	xchg   %eax,%esp
 804a606:	49                   	dec    %ecx
 804a607:	45                   	inc    %ebp
 804a608:	0e                   	push   %cs
 804a609:	98                   	cwtl   
 804a60a:	49                   	dec    %ecx
 804a60b:	45                   	inc    %ebp
 804a60c:	0e                   	push   %cs
 804a60d:	9c                   	pushf  
 804a60e:	49                   	dec    %ecx
 804a60f:	46                   	inc    %esi
 804a610:	0e                   	push   %cs
 804a611:	a0 49 48 0e 90       	mov    0x900e4849,%al
 804a616:	49                   	dec    %ecx
 804a617:	4a                   	dec    %edx
 804a618:	0e                   	push   %cs
 804a619:	9c                   	pushf  
 804a61a:	49                   	dec    %ecx
 804a61b:	44                   	inc    %esp
 804a61c:	0e                   	push   %cs
 804a61d:	a0 49 48 0e 90       	mov    0x900e4849,%al
 804a622:	49                   	dec    %ecx
 804a623:	43                   	inc    %ebx
 804a624:	0a 0e                	or     (%esi),%cl
 804a626:	9c                   	pushf  
 804a627:	49                   	dec    %ecx
 804a628:	42                   	inc    %edx
 804a629:	0e                   	push   %cs
 804a62a:	a0 49 45 0b 43       	mov    0x430b4549,%al
 804a62f:	0e                   	push   %cs
 804a630:	9c                   	pushf  
 804a631:	49                   	dec    %ecx
 804a632:	44                   	inc    %esp
 804a633:	0e                   	push   %cs
 804a634:	a0 49 4b 0e 14       	mov    0x140e4b49,%al
 804a639:	41                   	inc    %ecx
 804a63a:	c3                   	ret    
 804a63b:	0e                   	push   %cs
 804a63c:	10 41 c6             	adc    %al,-0x3a(%ecx)
 804a63f:	0e                   	push   %cs
 804a640:	0c 41                	or     $0x41,%al
 804a642:	c7                   	(bad)  
 804a643:	0e                   	push   %cs
 804a644:	08 41 c5             	or     %al,-0x3b(%ecx)
 804a647:	0e                   	push   %cs
 804a648:	04 00                	add    $0x0,%al
 804a64a:	00 00                	add    %al,(%eax)
 804a64c:	5c                   	pop    %esp
 804a64d:	01 00                	add    %eax,(%eax)
 804a64f:	00 ec                	add    %ch,%ah
 804a651:	05 00 00 42 ef       	add    $0xef420000,%eax
 804a656:	ff                   	(bad)  
 804a657:	ff 36                	pushl  (%esi)
 804a659:	02 00                	add    (%eax),%al
 804a65b:	00 00                	add    %al,(%eax)
 804a65d:	41                   	inc    %ecx
 804a65e:	0e                   	push   %cs
 804a65f:	08 85 02 41 0e 0c    	or     %al,0xc0e4102(%ebp)
 804a665:	87 03                	xchg   %eax,(%ebx)
 804a667:	41                   	inc    %ecx
 804a668:	0e                   	push   %cs
 804a669:	10 86 04 41 0e 14    	adc    %al,0x140e4104(%esi)
 804a66f:	83 05 43 0e 8c 01 42 	addl   $0x42,0x18c0e43
 804a676:	0e                   	push   %cs
 804a677:	90                   	nop
 804a678:	01 4c 0e 80          	add    %ecx,-0x80(%esi,%ecx,1)
 804a67c:	01 48 0e             	add    %ecx,0xe(%eax)
 804a67f:	8c 01                	mov    %es,(%ecx)
 804a681:	45                   	inc    %ebp
 804a682:	0e                   	push   %cs
 804a683:	90                   	nop
 804a684:	01 51 0e             	add    %edx,0xe(%ecx)
 804a687:	80 01 43             	addb   $0x43,(%ecx)
 804a68a:	0a 0e                	or     (%esi),%cl
 804a68c:	8c 01                	mov    %es,(%ecx)
 804a68e:	42                   	inc    %edx
 804a68f:	0e                   	push   %cs
 804a690:	90                   	nop
 804a691:	01 48 0e             	add    %ecx,0xe(%eax)
 804a694:	80 01 48             	addb   $0x48,(%ecx)
 804a697:	0e                   	push   %cs
 804a698:	8c 01                	mov    %es,(%ecx)
 804a69a:	45                   	inc    %ebp
 804a69b:	0e                   	push   %cs
 804a69c:	90                   	nop
 804a69d:	01 51 0b             	add    %edx,0xb(%ecx)
 804a6a0:	4e                   	dec    %esi
 804a6a1:	0a 0e                	or     (%esi),%cl
 804a6a3:	8c 01                	mov    %es,(%ecx)
 804a6a5:	45                   	inc    %ebp
 804a6a6:	0e                   	push   %cs
 804a6a7:	90                   	nop
 804a6a8:	01 51 0b             	add    %edx,0xb(%ecx)
 804a6ab:	41                   	inc    %ecx
 804a6ac:	0e                   	push   %cs
 804a6ad:	84 01                	test   %al,(%ecx)
 804a6af:	42                   	inc    %edx
 804a6b0:	0e                   	push   %cs
 804a6b1:	88 01                	mov    %al,(%ecx)
 804a6b3:	42                   	inc    %edx
 804a6b4:	0e                   	push   %cs
 804a6b5:	8c 01                	mov    %es,(%ecx)
 804a6b7:	45                   	inc    %ebp
 804a6b8:	0e                   	push   %cs
 804a6b9:	90                   	nop
 804a6ba:	01 48 0e             	add    %ecx,0xe(%eax)
 804a6bd:	88 01                	mov    %al,(%ecx)
 804a6bf:	41                   	inc    %ecx
 804a6c0:	0e                   	push   %cs
 804a6c1:	8c 01                	mov    %es,(%ecx)
 804a6c3:	42                   	inc    %edx
 804a6c4:	0e                   	push   %cs
 804a6c5:	90                   	nop
 804a6c6:	01 54 0e 80          	add    %edx,-0x80(%esi,%ecx,1)
 804a6ca:	01 5d 0e             	add    %ebx,0xe(%ebp)
 804a6cd:	88 01                	mov    %al,(%ecx)
 804a6cf:	41                   	inc    %ecx
 804a6d0:	0e                   	push   %cs
 804a6d1:	8c 01                	mov    %es,(%ecx)
 804a6d3:	45                   	inc    %ebp
 804a6d4:	0e                   	push   %cs
 804a6d5:	90                   	nop
 804a6d6:	01 48 0e             	add    %ecx,0xe(%eax)
 804a6d9:	80 01 5d             	addb   $0x5d,(%ecx)
 804a6dc:	0e                   	push   %cs
 804a6dd:	84 01                	test   %al,(%ecx)
 804a6df:	41                   	inc    %ecx
 804a6e0:	0e                   	push   %cs
 804a6e1:	88 01                	mov    %al,(%ecx)
 804a6e3:	41                   	inc    %ecx
 804a6e4:	0e                   	push   %cs
 804a6e5:	8c 01                	mov    %es,(%ecx)
 804a6e7:	45                   	inc    %ebp
 804a6e8:	0e                   	push   %cs
 804a6e9:	90                   	nop
 804a6ea:	01 46 0e             	add    %eax,0xe(%esi)
 804a6ed:	94                   	xchg   %eax,%esp
 804a6ee:	01 45 0e             	add    %eax,0xe(%ebp)
 804a6f1:	98                   	cwtl   
 804a6f2:	01 45 0e             	add    %eax,0xe(%ebp)
 804a6f5:	9c                   	pushf  
 804a6f6:	01 41 0e             	add    %eax,0xe(%ecx)
 804a6f9:	a0 01 48 0e 80       	mov    0x800e4801,%al
 804a6fe:	01 5d 0e             	add    %ebx,0xe(%ebp)
 804a701:	84 01                	test   %al,(%ecx)
 804a703:	41                   	inc    %ecx
 804a704:	0e                   	push   %cs
 804a705:	88 01                	mov    %al,(%ecx)
 804a707:	41                   	inc    %ecx
 804a708:	0e                   	push   %cs
 804a709:	8c 01                	mov    %es,(%ecx)
 804a70b:	41                   	inc    %ecx
 804a70c:	0e                   	push   %cs
 804a70d:	90                   	nop
 804a70e:	01 46 0e             	add    %eax,0xe(%esi)
 804a711:	94                   	xchg   %eax,%esp
 804a712:	01 45 0e             	add    %eax,0xe(%ebp)
 804a715:	98                   	cwtl   
 804a716:	01 45 0e             	add    %eax,0xe(%ebp)
 804a719:	9c                   	pushf  
 804a71a:	01 41 0e             	add    %eax,0xe(%ecx)
 804a71d:	a0 01 4b 0e 80       	mov    0x800e4b01,%al
 804a722:	01 4b 0a             	add    %ecx,0xa(%ebx)
 804a725:	0e                   	push   %cs
 804a726:	8c 01                	mov    %es,(%ecx)
 804a728:	41                   	inc    %ecx
 804a729:	0e                   	push   %cs
 804a72a:	90                   	nop
 804a72b:	01 51 0e             	add    %edx,0xe(%ecx)
 804a72e:	94                   	xchg   %eax,%esp
 804a72f:	01 45 0e             	add    %eax,0xe(%ebp)
 804a732:	98                   	cwtl   
 804a733:	01 45 0e             	add    %eax,0xe(%ebp)
 804a736:	9c                   	pushf  
 804a737:	01 45 0e             	add    %eax,0xe(%ebp)
 804a73a:	a0 01 48 0e 8c       	mov    0x8c0e4801,%al
 804a73f:	01 45 0e             	add    %eax,0xe(%ebp)
 804a742:	90                   	nop
 804a743:	01 48 0e             	add    %ecx,0xe(%eax)
 804a746:	80 01 47             	addb   $0x47,(%ecx)
 804a749:	0e                   	push   %cs
 804a74a:	8c 01                	mov    %es,(%ecx)
 804a74c:	45                   	inc    %ebp
 804a74d:	0e                   	push   %cs
 804a74e:	90                   	nop
 804a74f:	01 51 0b             	add    %edx,0xb(%ecx)
 804a752:	43                   	inc    %ebx
 804a753:	0a 0e                	or     (%esi),%cl
 804a755:	8c 01                	mov    %es,(%ecx)
 804a757:	41                   	inc    %ecx
 804a758:	0e                   	push   %cs
 804a759:	90                   	nop
 804a75a:	01 48 0e             	add    %ecx,0xe(%eax)
 804a75d:	80 01 47             	addb   $0x47,(%ecx)
 804a760:	0e                   	push   %cs
 804a761:	8c 01                	mov    %es,(%ecx)
 804a763:	45                   	inc    %ebp
 804a764:	0e                   	push   %cs
 804a765:	90                   	nop
 804a766:	01 51 0b             	add    %edx,0xb(%ecx)
 804a769:	43                   	inc    %ebx
 804a76a:	0a 0e                	or     (%esi),%cl
 804a76c:	8c 01                	mov    %es,(%ecx)
 804a76e:	44                   	inc    %esp
 804a76f:	0e                   	push   %cs
 804a770:	90                   	nop
 804a771:	01 48 0e             	add    %ecx,0xe(%eax)
 804a774:	80 01 47             	addb   $0x47,(%ecx)
 804a777:	0e                   	push   %cs
 804a778:	8c 01                	mov    %es,(%ecx)
 804a77a:	45                   	inc    %ebp
 804a77b:	0e                   	push   %cs
 804a77c:	90                   	nop
 804a77d:	01 51 0b             	add    %edx,0xb(%ecx)
 804a780:	43                   	inc    %ebx
 804a781:	0a 0e                	or     (%esi),%cl
 804a783:	8c 01                	mov    %es,(%ecx)
 804a785:	44                   	inc    %esp
 804a786:	0e                   	push   %cs
 804a787:	90                   	nop
 804a788:	01 48 0e             	add    %ecx,0xe(%eax)
 804a78b:	80 01 47             	addb   $0x47,(%ecx)
 804a78e:	0e                   	push   %cs
 804a78f:	8c 01                	mov    %es,(%ecx)
 804a791:	45                   	inc    %ebp
 804a792:	0e                   	push   %cs
 804a793:	90                   	nop
 804a794:	01 51 0b             	add    %edx,0xb(%ecx)
 804a797:	43                   	inc    %ebx
 804a798:	0e                   	push   %cs
 804a799:	14 41                	adc    $0x41,%al
 804a79b:	c3                   	ret    
 804a79c:	0e                   	push   %cs
 804a79d:	10 41 c6             	adc    %al,-0x3a(%ecx)
 804a7a0:	0e                   	push   %cs
 804a7a1:	0c 41                	or     $0x41,%al
 804a7a3:	c7                   	(bad)  
 804a7a4:	0e                   	push   %cs
 804a7a5:	08 41 c5             	or     %al,-0x3b(%ecx)
 804a7a8:	0e                   	push   %cs
 804a7a9:	04 00                	add    $0x0,%al
 804a7ab:	00 14 00             	add    %dl,(%eax,%eax,1)
 804a7ae:	00 00                	add    %al,(%eax)
 804a7b0:	4c                   	dec    %esp
 804a7b1:	07                   	pop    %es
 804a7b2:	00 00                	add    %al,(%eax)
 804a7b4:	18 f0                	sbb    %dh,%al
 804a7b6:	ff                   	(bad)  
 804a7b7:	ff                   	(bad)  
 804a7b8:	3d 00 00 00 00       	cmp    $0x0,%eax
 804a7bd:	43                   	inc    %ebx
 804a7be:	0e                   	push   %cs
 804a7bf:	1c 45                	sbb    $0x45,%al
 804a7c1:	0e                   	push   %cs
 804a7c2:	20 00                	and    %al,(%eax)
 804a7c4:	30 00                	xor    %al,(%eax)
 804a7c6:	00 00                	add    %al,(%eax)
 804a7c8:	64 07                	fs pop %es
 804a7ca:	00 00                	add    %al,(%eax)
 804a7cc:	3d f0 ff ff 3b       	cmp    $0x3bfffff0,%eax
 804a7d1:	00 00                	add    %al,(%eax)
 804a7d3:	00 00                	add    %al,(%eax)
 804a7d5:	43                   	inc    %ebx
 804a7d6:	0e                   	push   %cs
 804a7d7:	10 48 0e             	adc    %cl,0xe(%eax)
 804a7da:	14 44                	adc    $0x44,%al
 804a7dc:	0e                   	push   %cs
 804a7dd:	18 44 0e 1c          	sbb    %al,0x1c(%esi,%ecx,1)
 804a7e1:	44                   	inc    %esp
 804a7e2:	0e                   	push   %cs
 804a7e3:	20 44 0e 24          	and    %al,0x24(%esi,%ecx,1)
 804a7e7:	41                   	inc    %ecx
 804a7e8:	0e                   	push   %cs
 804a7e9:	28 45 0e             	sub    %al,0xe(%ebp)
 804a7ec:	2c 44                	sub    $0x44,%al
 804a7ee:	0e                   	push   %cs
 804a7ef:	30 48 0e             	xor    %cl,0xe(%eax)
 804a7f2:	10 4d 0e             	adc    %cl,0xe(%ebp)
 804a7f5:	04 00                	add    $0x0,%al
 804a7f7:	00 58 00             	add    %bl,0x0(%eax)
 804a7fa:	00 00                	add    %al,(%eax)
 804a7fc:	98                   	cwtl   
 804a7fd:	07                   	pop    %es
 804a7fe:	00 00                	add    %al,(%eax)
 804a800:	44                   	inc    %esp
 804a801:	f0 ff                	lock (bad) 
 804a803:	ff c7                	inc    %edi
 804a805:	00 00                	add    %al,(%eax)
 804a807:	00 00                	add    %al,(%eax)
 804a809:	41                   	inc    %ecx
 804a80a:	0e                   	push   %cs
 804a80b:	08 87 02 41 0e 0c    	or     %al,0xc0e4102(%edi)
 804a811:	86 03                	xchg   %al,(%ebx)
 804a813:	41                   	inc    %ecx
 804a814:	0e                   	push   %cs
 804a815:	10 83 04 59 0a 0e    	adc    %al,0xe0a5904(%ebx)
 804a81b:	1c 45                	sbb    $0x45,%al
 804a81d:	0e                   	push   %cs
 804a81e:	20 4a 0b             	and    %cl,0xb(%edx)
 804a821:	43                   	inc    %ebx
 804a822:	0a 0e                	or     (%esi),%cl
 804a824:	1c 45                	sbb    $0x45,%al
 804a826:	0e                   	push   %cs
 804a827:	20 48 0e             	and    %cl,0xe(%eax)
 804a82a:	10 47 0e             	adc    %al,0xe(%edi)
 804a82d:	1c 42                	sbb    $0x42,%al
 804a82f:	0e                   	push   %cs
 804a830:	20 45 0b             	and    %al,0xb(%ebp)
 804a833:	56                   	push   %esi
 804a834:	0a 0e                	or     (%esi),%cl
 804a836:	1c 45                	sbb    $0x45,%al
 804a838:	0e                   	push   %cs
 804a839:	20 4a 0b             	and    %cl,0xb(%edx)
 804a83c:	6d                   	insl   (%dx),%es:(%edi)
 804a83d:	0a 0e                	or     (%esi),%cl
 804a83f:	1c 45                	sbb    $0x45,%al
 804a841:	0e                   	push   %cs
 804a842:	20 4a 0b             	and    %cl,0xb(%edx)
 804a845:	5a                   	pop    %edx
 804a846:	c3                   	ret    
 804a847:	0e                   	push   %cs
 804a848:	0c 41                	or     $0x41,%al
 804a84a:	c6                   	(bad)  
 804a84b:	0e                   	push   %cs
 804a84c:	08 41 c7             	or     %al,-0x39(%ecx)
 804a84f:	0e                   	push   %cs
 804a850:	04 00                	add    $0x0,%al
 804a852:	00 00                	add    %al,(%eax)
 804a854:	4c                   	dec    %esp
 804a855:	00 00                	add    %al,(%eax)
 804a857:	00 f4                	add    %dh,%ah
 804a859:	07                   	pop    %es
 804a85a:	00 00                	add    %al,(%eax)
 804a85c:	af                   	scas   %es:(%edi),%eax
 804a85d:	f0 ff                	lock (bad) 
 804a85f:	ff 91 00 00 00 00    	call   *0x0(%ecx)
 804a865:	43                   	inc    %ebx
 804a866:	0e                   	push   %cs
 804a867:	7c 42                	jl     804a8ab <array.2846+0xcc3>
 804a869:	0e                   	push   %cs
 804a86a:	80 01 48             	addb   $0x48,(%ecx)
 804a86d:	0e                   	push   %cs
 804a86e:	70 4e                	jo     804a8be <array.2846+0xcd6>
 804a870:	0e                   	push   %cs
 804a871:	74 45                	je     804a8b8 <array.2846+0xcd0>
 804a873:	0e                   	push   %cs
 804a874:	78 45                	js     804a8bb <array.2846+0xcd3>
 804a876:	0e                   	push   %cs
 804a877:	7c 45                	jl     804a8be <array.2846+0xcd6>
 804a879:	0e                   	push   %cs
 804a87a:	80 01 48             	addb   $0x48,(%ecx)
 804a87d:	0e                   	push   %cs
 804a87e:	70 48                	jo     804a8c8 <array.2846+0xce0>
 804a880:	0e                   	push   %cs
 804a881:	78 45                	js     804a8c8 <array.2846+0xce0>
 804a883:	0e                   	push   %cs
 804a884:	7c 45                	jl     804a8cb <array.2846+0xce3>
 804a886:	0e                   	push   %cs
 804a887:	80 01 48             	addb   $0x48,(%ecx)
 804a88a:	0e                   	push   %cs
 804a88b:	70 47                	jo     804a8d4 <array.2846+0xcec>
 804a88d:	0e                   	push   %cs
 804a88e:	7c 45                	jl     804a8d5 <array.2846+0xced>
 804a890:	0e                   	push   %cs
 804a891:	80 01 59             	addb   $0x59,(%ecx)
 804a894:	0e                   	push   %cs
 804a895:	70 43                	jo     804a8da <array.2846+0xcf2>
 804a897:	0e                   	push   %cs
 804a898:	7c 45                	jl     804a8df <array.2846+0xcf7>
 804a89a:	0e                   	push   %cs
 804a89b:	80 01 54             	addb   $0x54,(%ecx)
 804a89e:	0e                   	push   %cs
 804a89f:	70 43                	jo     804a8e4 <array.2846+0xcfc>
 804a8a1:	0e                   	push   %cs
 804a8a2:	04 00                	add    $0x0,%al
 804a8a4:	38 00                	cmp    %al,(%eax)
 804a8a6:	00 00                	add    %al,(%eax)
 804a8a8:	44                   	inc    %esp
 804a8a9:	08 00                	or     %al,(%eax)
 804a8ab:	00 f4                	add    %dh,%ah
 804a8ad:	f0 ff                	lock (bad) 
 804a8af:	ff 61 00             	jmp    *0x0(%ecx)
 804a8b2:	00 00                	add    %al,(%eax)
 804a8b4:	00 41 0e             	add    %al,0xe(%ecx)
 804a8b7:	08 85 02 41 0e 0c    	or     %al,0xc0e4102(%ebp)
 804a8bd:	87 03                	xchg   %eax,(%ebx)
 804a8bf:	43                   	inc    %ebx
 804a8c0:	0e                   	push   %cs
 804a8c1:	10 86 04 41 0e 14    	adc    %al,0x140e4104(%esi)
 804a8c7:	83 05 4e 0e 30 02 48 	addl   $0x48,0x2300e4e
 804a8ce:	0e                   	push   %cs
 804a8cf:	14 41                	adc    $0x41,%al
 804a8d1:	c3                   	ret    
 804a8d2:	0e                   	push   %cs
 804a8d3:	10 41 c6             	adc    %al,-0x3a(%ecx)
 804a8d6:	0e                   	push   %cs
 804a8d7:	0c 41                	or     $0x41,%al
 804a8d9:	c7                   	(bad)  
 804a8da:	0e                   	push   %cs
 804a8db:	08 41 c5             	or     %al,-0x3b(%ecx)
 804a8de:	0e                   	push   %cs
 804a8df:	04 10                	add    $0x10,%al
 804a8e1:	00 00                	add    %al,(%eax)
 804a8e3:	00 80 08 00 00 28    	add    %al,0x28000008(%eax)
 804a8e9:	f1                   	icebp  
 804a8ea:	ff                   	(bad)  
 804a8eb:	ff 02                	incl   (%edx)
 804a8ed:	00 00                	add    %al,(%eax)
 804a8ef:	00 00                	add    %al,(%eax)
 804a8f1:	00 00                	add    %al,(%eax)
	...

0804a8f4 <__FRAME_END__>:
 804a8f4:	00 00                	add    %al,(%eax)
	...

Disassembly of section .init_array:

0804b000 <__frame_dummy_init_array_entry>:
 804b000:	60                   	pusha  
 804b001:	8a 04 08             	mov    (%eax,%ecx,1),%al

Disassembly of section .fini_array:

0804b004 <__do_global_dtors_aux_fini_array_entry>:
 804b004:	40                   	inc    %eax
 804b005:	8a 04 08             	mov    (%eax,%ecx,1),%al

Disassembly of section .jcr:

0804b008 <__JCR_END__>:
 804b008:	00 00                	add    %al,(%eax)
	...

Disassembly of section .dynamic:

0804b00c <_DYNAMIC>:
 804b00c:	01 00                	add    %eax,(%eax)
 804b00e:	00 00                	add    %al,(%eax)
 804b010:	01 00                	add    %eax,(%eax)
 804b012:	00 00                	add    %al,(%eax)
 804b014:	0c 00                	or     $0x0,%al
 804b016:	00 00                	add    %al,(%eax)
 804b018:	34 87                	xor    $0x87,%al
 804b01a:	04 08                	add    $0x8,%al
 804b01c:	0d 00 00 00 14       	or     $0x14000000,%eax
 804b021:	9a 04 08 19 00 00 00 	lcall  $0x0,$0x190804
 804b028:	00 b0 04 08 1b 00    	add    %dh,0x1b0804(%eax)
 804b02e:	00 00                	add    %al,(%eax)
 804b030:	04 00                	add    $0x0,%al
 804b032:	00 00                	add    %al,(%eax)
 804b034:	1a 00                	sbb    (%eax),%al
 804b036:	00 00                	add    %al,(%eax)
 804b038:	04 b0                	add    $0xb0,%al
 804b03a:	04 08                	add    $0x8,%al
 804b03c:	1c 00                	sbb    $0x0,%al
 804b03e:	00 00                	add    %al,(%eax)
 804b040:	04 00                	add    $0x0,%al
 804b042:	00 00                	add    %al,(%eax)
 804b044:	f5                   	cmc    
 804b045:	fe                   	(bad)  
 804b046:	ff 6f 8c             	ljmp   *-0x74(%edi)
 804b049:	81 04 08 05 00 00 00 	addl   $0x5,(%eax,%ecx,1)
 804b050:	18 84 04 08 06 00 00 	sbb    %al,0x608(%esp,%eax,1)
 804b057:	00 b8 81 04 08 0a    	add    %bh,0xa080481(%eax)
 804b05d:	00 00                	add    %al,(%eax)
 804b05f:	00 58 01             	add    %bl,0x1(%eax)
 804b062:	00 00                	add    %al,(%eax)
 804b064:	0b 00                	or     (%eax),%eax
 804b066:	00 00                	add    %al,(%eax)
 804b068:	10 00                	adc    %al,(%eax)
 804b06a:	00 00                	add    %al,(%eax)
 804b06c:	15 00 00 00 00       	adc    $0x0,%eax
 804b071:	00 00                	add    %al,(%eax)
 804b073:	00 03                	add    %al,(%ebx)
 804b075:	00 00                	add    %al,(%eax)
 804b077:	00 f8                	add    %bh,%al
 804b079:	b0 04                	mov    $0x4,%al
 804b07b:	08 02                	or     %al,(%edx)
 804b07d:	00 00                	add    %al,(%eax)
 804b07f:	00 10                	add    %dl,(%eax)
 804b081:	01 00                	add    %eax,(%eax)
 804b083:	00 14 00             	add    %dl,(%eax,%eax,1)
 804b086:	00 00                	add    %al,(%eax)
 804b088:	11 00                	adc    %eax,(%eax)
 804b08a:	00 00                	add    %al,(%eax)
 804b08c:	17                   	pop    %ss
 804b08d:	00 00                	add    %al,(%eax)
 804b08f:	00 24 86             	add    %ah,(%esi,%eax,4)
 804b092:	04 08                	add    $0x8,%al
 804b094:	11 00                	adc    %eax,(%eax)
 804b096:	00 00                	add    %al,(%eax)
 804b098:	0c 86                	or     $0x86,%al
 804b09a:	04 08                	add    $0x8,%al
 804b09c:	12 00                	adc    (%eax),%al
 804b09e:	00 00                	add    %al,(%eax)
 804b0a0:	18 00                	sbb    %al,(%eax)
 804b0a2:	00 00                	add    %al,(%eax)
 804b0a4:	13 00                	adc    (%eax),%eax
 804b0a6:	00 00                	add    %al,(%eax)
 804b0a8:	08 00                	or     %al,(%eax)
 804b0aa:	00 00                	add    %al,(%eax)
 804b0ac:	fe                   	(bad)  
 804b0ad:	ff                   	(bad)  
 804b0ae:	ff 6f bc             	ljmp   *-0x44(%edi)
 804b0b1:	85 04 08             	test   %eax,(%eax,%ecx,1)
 804b0b4:	ff                   	(bad)  
 804b0b5:	ff                   	(bad)  
 804b0b6:	ff 6f 01             	ljmp   *0x1(%edi)
 804b0b9:	00 00                	add    %al,(%eax)
 804b0bb:	00 f0                	add    %dh,%al
 804b0bd:	ff                   	(bad)  
 804b0be:	ff 6f 70             	ljmp   *0x70(%edi)
 804b0c1:	85 04 08             	test   %eax,(%eax,%ecx,1)
	...

Disassembly of section .got:

0804b0f4 <.got>:
 804b0f4:	00 00                	add    %al,(%eax)
	...

Disassembly of section .got.plt:

0804b0f8 <_GLOBAL_OFFSET_TABLE_>:
 804b0f8:	0c b0                	or     $0xb0,%al
 804b0fa:	04 08                	add    $0x8,%al
	...
 804b104:	76 87                	jbe    804b08d <_DYNAMIC+0x81>
 804b106:	04 08                	add    $0x8,%al
 804b108:	86 87 04 08 96 87    	xchg   %al,-0x7869f7fc(%edi)
 804b10e:	04 08                	add    $0x8,%al
 804b110:	a6                   	cmpsb  %es:(%edi),%ds:(%esi)
 804b111:	87 04 08             	xchg   %eax,(%eax,%ecx,1)
 804b114:	b6 87                	mov    $0x87,%dh
 804b116:	04 08                	add    $0x8,%al
 804b118:	c6 87 04 08 d6 87 04 	movb   $0x4,-0x7829f7fc(%edi)
 804b11f:	08 e6                	or     %ah,%dh
 804b121:	87 04 08             	xchg   %eax,(%eax,%ecx,1)
 804b124:	f6 87 04 08 06 88 04 	testb  $0x4,-0x77f9f7fc(%edi)
 804b12b:	08 16                	or     %dl,(%esi)
 804b12d:	88 04 08             	mov    %al,(%eax,%ecx,1)
 804b130:	26 88 04 08          	mov    %al,%es:(%eax,%ecx,1)
 804b134:	36 88 04 08          	mov    %al,%ss:(%eax,%ecx,1)
 804b138:	46                   	inc    %esi
 804b139:	88 04 08             	mov    %al,(%eax,%ecx,1)
 804b13c:	56                   	push   %esi
 804b13d:	88 04 08             	mov    %al,(%eax,%ecx,1)
 804b140:	66 88 04 08          	data16 mov %al,(%eax,%ecx,1)
 804b144:	76 88                	jbe    804b0ce <_DYNAMIC+0xc2>
 804b146:	04 08                	add    $0x8,%al
 804b148:	86 88 04 08 96 88    	xchg   %cl,-0x7769f7fc(%eax)
 804b14e:	04 08                	add    $0x8,%al
 804b150:	a6                   	cmpsb  %es:(%edi),%ds:(%esi)
 804b151:	88 04 08             	mov    %al,(%eax,%ecx,1)
 804b154:	b6 88                	mov    $0x88,%dh
 804b156:	04 08                	add    $0x8,%al
 804b158:	c6                   	(bad)  
 804b159:	88 04 08             	mov    %al,(%eax,%ecx,1)
 804b15c:	d6                   	(bad)  
 804b15d:	88 04 08             	mov    %al,(%eax,%ecx,1)
 804b160:	e6 88                	out    %al,$0x88
 804b162:	04 08                	add    $0x8,%al
 804b164:	f6                   	(bad)  
 804b165:	88 04 08             	mov    %al,(%eax,%ecx,1)
 804b168:	06                   	push   %es
 804b169:	89 04 08             	mov    %eax,(%eax,%ecx,1)
 804b16c:	16                   	push   %ss
 804b16d:	89 04 08             	mov    %eax,(%eax,%ecx,1)
 804b170:	26 89 04 08          	mov    %eax,%es:(%eax,%ecx,1)
 804b174:	36 89 04 08          	mov    %eax,%ss:(%eax,%ecx,1)
 804b178:	46                   	inc    %esi
 804b179:	89 04 08             	mov    %eax,(%eax,%ecx,1)
 804b17c:	56                   	push   %esi
 804b17d:	89 04 08             	mov    %eax,(%eax,%ecx,1)
 804b180:	66 89 04 08          	mov    %ax,(%eax,%ecx,1)
 804b184:	76 89                	jbe    804b10f <_GLOBAL_OFFSET_TABLE_+0x17>
 804b186:	04 08                	add    $0x8,%al
 804b188:	86                   	.byte 0x86
 804b189:	89 04 08             	mov    %eax,(%eax,%ecx,1)

Disassembly of section .data:

0804b1c0 <__data_start>:
 804b1c0:	00 00                	add    %al,(%eax)
	...

0804b1c4 <__dso_handle>:
	...

0804b200 <n1>:
 804b200:	24 00                	and    $0x0,%al
 804b202:	00 00                	add    %al,(%eax)
 804b204:	0c b2                	or     $0xb2,%al
 804b206:	04 08                	add    $0x8,%al
 804b208:	18 b2 04 08 08 00    	sbb    %dh,0x80804(%edx)

0804b20c <n21>:
 804b20c:	08 00                	or     %al,(%eax)
 804b20e:	00 00                	add    %al,(%eax)
 804b210:	3c b2                	cmp    $0xb2,%al
 804b212:	04 08                	add    $0x8,%al
 804b214:	24 b2                	and    $0xb2,%al
 804b216:	04 08                	add    $0x8,%al

0804b218 <n22>:
 804b218:	32 00                	xor    (%eax),%al
 804b21a:	00 00                	add    %al,(%eax)
 804b21c:	30 b2 04 08 48 b2    	xor    %dh,-0x4db7f7fc(%edx)
 804b222:	04 08                	add    $0x8,%al

0804b224 <n32>:
 804b224:	16                   	push   %ss
 804b225:	00 00                	add    %al,(%eax)
 804b227:	00 90 b2 04 08 78    	add    %dl,0x780804b2(%eax)
 804b22d:	b2 04                	mov    $0x4,%dl
 804b22f:	08 2d 00 00 00 54    	or     %ch,0x54000000

0804b230 <n33>:
 804b230:	2d 00 00 00 54       	sub    $0x54000000,%eax
 804b235:	b2 04                	mov    $0x4,%dl
 804b237:	08 9c b2 04 08 06 00 	or     %bl,0x60804(%edx,%esi,4)

0804b23c <n31>:
 804b23c:	06                   	push   %es
 804b23d:	00 00                	add    %al,(%eax)
 804b23f:	00 60 b2             	add    %ah,-0x4e(%eax)
 804b242:	04 08                	add    $0x8,%al
 804b244:	84 b2 04 08 6b 00    	test   %dh,0x6b0804(%edx)

0804b248 <n34>:
 804b248:	6b 00 00             	imul   $0x0,(%eax),%eax
 804b24b:	00 6c b2 04          	add    %ch,0x4(%edx,%esi,4)
 804b24f:	08 a8 b2 04 08 28    	or     %ch,0x280804b2(%eax)

0804b254 <n45>:
 804b254:	28 00                	sub    %al,(%eax)
	...

0804b260 <n41>:
 804b260:	01 00                	add    %eax,(%eax)
	...

0804b26c <n47>:
 804b26c:	63 00                	arpl   %ax,(%eax)
	...

0804b278 <n44>:
 804b278:	23 00                	and    (%eax),%eax
	...

0804b284 <n42>:
 804b284:	07                   	pop    %es
	...

0804b290 <n43>:
 804b290:	14 00                	adc    $0x0,%al
	...

0804b29c <n46>:
 804b29c:	2f                   	das    
	...

0804b2a8 <n48>:
 804b2a8:	e9 03 00 00 00       	jmp    804b2b0 <n48+0x8>
 804b2ad:	00 00                	add    %al,(%eax)
 804b2af:	00 00                	add    %al,(%eax)
 804b2b1:	00 00                	add    %al,(%eax)
	...

0804b2b4 <node0>:
	...
 804b2bc:	c0                   	(bad)  
 804b2bd:	b2 04                	mov    $0x4,%dl
 804b2bf:	08 73 02             	or     %dh,0x2(%ebx)

0804b2c0 <node1>:
 804b2c0:	73 02                	jae    804b2c4 <node1+0x4>
 804b2c2:	00 00                	add    %al,(%eax)
 804b2c4:	01 00                	add    %eax,(%eax)
 804b2c6:	00 00                	add    %al,(%eax)
 804b2c8:	cc                   	int3   
 804b2c9:	b2 04                	mov    $0x4,%dl
 804b2cb:	08 b5 01 00 00 02    	or     %dh,0x2000001(%ebp)

0804b2cc <node2>:
 804b2cc:	b5 01                	mov    $0x1,%ch
 804b2ce:	00 00                	add    %al,(%eax)
 804b2d0:	02 00                	add    (%eax),%al
 804b2d2:	00 00                	add    %al,(%eax)
 804b2d4:	d8 b2 04 08 ca 03    	fdivs  0x3ca0804(%edx)

0804b2d8 <node3>:
 804b2d8:	ca 03 00             	lret   $0x3
 804b2db:	00 03                	add    %al,(%ebx)
 804b2dd:	00 00                	add    %al,(%eax)
 804b2df:	00 e4                	add    %ah,%ah
 804b2e1:	b2 04                	mov    $0x4,%dl
 804b2e3:	08 76 01             	or     %dh,0x1(%esi)

0804b2e4 <node4>:
 804b2e4:	76 01                	jbe    804b2e7 <node4+0x3>
 804b2e6:	00 00                	add    %al,(%eax)
 804b2e8:	04 00                	add    $0x0,%al
 804b2ea:	00 00                	add    %al,(%eax)
 804b2ec:	f0 b2 04             	lock mov $0x4,%dl
 804b2ef:	08 15 01 00 00 05    	or     %dl,0x5000001

0804b2f0 <node5>:
 804b2f0:	15 01 00 00 05       	adc    $0x5000001,%eax
 804b2f5:	00 00                	add    %al,(%eax)
 804b2f7:	00 fc                	add    %bh,%ah
 804b2f9:	b2 04                	mov    $0x4,%dl
 804b2fb:	08 d0                	or     %dl,%al

0804b2fc <node6>:
 804b2fc:	d0 02                	rolb   (%edx)
 804b2fe:	00 00                	add    %al,(%eax)
 804b300:	06                   	push   %es
 804b301:	00 00                	add    %al,(%eax)
 804b303:	00 08                	add    %cl,(%eax)
 804b305:	b3 04                	mov    $0x4,%bl
 804b307:	08 10                	or     %dl,(%eax)

0804b308 <node7>:
 804b308:	10 01                	adc    %al,(%ecx)
 804b30a:	00 00                	add    %al,(%eax)
 804b30c:	07                   	pop    %es
 804b30d:	00 00                	add    %al,(%eax)
 804b30f:	00 14 b3             	add    %dl,(%ebx,%esi,4)
 804b312:	04 08                	add    $0x8,%al

0804b314 <node8>:
 804b314:	32 00                	xor    (%eax),%al
 804b316:	00 00                	add    %al,(%eax)
 804b318:	08 00                	or     %al,(%eax)
 804b31a:	00 00                	add    %al,(%eax)
 804b31c:	20 b3 04 08 bb 00    	and    %dh,0xbb0804(%ebx)

0804b320 <node9>:
 804b320:	bb 00 00 00 09       	mov    $0x9000000,%ebx
	...

0804b340 <lab_id>:
 804b340:	53                   	push   %ebx
 804b341:	45                   	inc    %ebp
 804b342:	31 34 32             	xor    %esi,(%edx,%esi,1)
 804b345:	30 31                	xor    %dh,(%ecx)
 804b347:	35 4c 61 62 32       	xor    $0x3262614c,%eax
	...

0804b740 <bomb_id>:
 804b740:	09 7f 33             	or     %edi,0x33(%edi)
 804b743:	01                   	.byte 0x1

Disassembly of section .bss:

0804b780 <stdin@@GLIBC_2.0>:
	...

0804b7a0 <stdout@@GLIBC_2.0>:
 804b7a0:	00 00                	add    %al,(%eax)
	...

0804b7a4 <completed.6279>:
 804b7a4:	00 00                	add    %al,(%eax)
	...

0804b7a8 <num_input_strings>:
 804b7a8:	00 00                	add    %al,(%eax)
	...

0804b7ac <infile>:
	...

0804b7c0 <input_strings>:
	...

0804be00 <scratch>:
	...

Disassembly of section .comment:

00000000 <.comment>:
   0:	47                   	inc    %edi
   1:	43                   	inc    %ebx
   2:	43                   	inc    %ebx
   3:	3a 20                	cmp    (%eax),%ah
   5:	28 44 65 62          	sub    %al,0x62(%ebp,%eiz,2)
   9:	69 61 6e 20 34 2e 39 	imul   $0x392e3420,0x6e(%ecx),%esp
  10:	2e 32 2d 31 30 29 20 	xor    %cs:0x20293031,%ch
  17:	34 2e                	xor    $0x2e,%al
  19:	39 2e                	cmp    %ebp,(%esi)
  1b:	32 00                	xor    (%eax),%al
  1d:	47                   	inc    %edi
  1e:	43                   	inc    %ebx
  1f:	43                   	inc    %ebx
  20:	3a 20                	cmp    (%eax),%ah
  22:	28 44 65 62          	sub    %al,0x62(%ebp,%eiz,2)
  26:	69 61 6e 20 34 2e 38 	imul   $0x382e3420,0x6e(%ecx),%esp
  2d:	2e 34 2d             	cs xor $0x2d,%al
  30:	31 29                	xor    %ebp,(%ecx)
  32:	20 34 2e             	and    %dh,(%esi,%ebp,1)
  35:	38 2e                	cmp    %ch,(%esi)
  37:	34 00                	xor    $0x0,%al

Disassembly of section .debug_aranges:

00000000 <.debug_aranges>:
   0:	1c 00                	sbb    $0x0,%al
   2:	00 00                	add    %al,(%eax)
   4:	02 00                	add    (%eax),%al
   6:	00 00                	add    %al,(%eax)
   8:	00 00                	add    %al,(%eax)
   a:	04 00                	add    $0x0,%al
   c:	00 00                	add    %al,(%eax)
   e:	00 00                	add    %al,(%eax)
  10:	8b 8a 04 08 57 01    	mov    0x1570804(%edx),%ecx
	...

Disassembly of section .debug_info:

00000000 <.debug_info>:
   0:	4f                   	dec    %edi
   1:	05 00 00 04 00       	add    $0x40000,%eax
   6:	00 00                	add    %al,(%eax)
   8:	00 00                	add    %al,(%eax)
   a:	04 01                	add    $0x1,%al
   c:	ac                   	lods   %ds:(%esi),%al
   d:	00 00                	add    %al,(%eax)
   f:	00 01                	add    %al,(%ecx)
  11:	71 00                	jno    13 <_init-0x8048721>
  13:	00 00                	add    %al,(%eax)
  15:	30 01                	xor    %al,(%ecx)
  17:	00 00                	add    %al,(%eax)
  19:	8b 8a 04 08 57 01    	mov    0x1570804(%edx),%ecx
  1f:	00 00                	add    %al,(%eax)
  21:	00 00                	add    %al,(%eax)
  23:	00 00                	add    %al,(%eax)
  25:	02 4d 00             	add    0x0(%ebp),%cl
  28:	00 00                	add    %al,(%eax)
  2a:	02 d4                	add    %ah,%dl
  2c:	30 00                	xor    %al,(%eax)
  2e:	00 00                	add    %al,(%eax)
  30:	03 04 07             	add    (%edi,%eax,1),%eax
  33:	8d 01                	lea    (%ecx),%eax
  35:	00 00                	add    %al,(%eax)
  37:	03 01                	add    (%ecx),%eax
  39:	08 70 01             	or     %dh,0x1(%eax)
  3c:	00 00                	add    %al,(%eax)
  3e:	03 02                	add    (%edx),%eax
  40:	07                   	pop    %es
  41:	d4 01                	aam    $0x1
  43:	00 00                	add    %al,(%eax)
  45:	03 04 07             	add    (%edi,%eax,1),%eax
  48:	88 01                	mov    %al,(%ecx)
  4a:	00 00                	add    %al,(%eax)
  4c:	03 01                	add    (%ecx),%eax
  4e:	06                   	push   %es
  4f:	72 01                	jb     52 <_init-0x80486e2>
  51:	00 00                	add    %al,(%eax)
  53:	03 02                	add    (%edx),%eax
  55:	05 43 00 00 00       	add    $0x43,%eax
  5a:	04 04                	add    $0x4,%al
  5c:	05 69 6e 74 00       	add    $0x746e69,%eax
  61:	03 08                	add    (%eax),%ecx
  63:	05 e9 00 00 00       	add    $0xe9,%eax
  68:	03 08                	add    (%eax),%ecx
  6a:	07                   	pop    %es
  6b:	83 01 00             	addl   $0x0,(%ecx)
  6e:	00 02                	add    %al,(%edx)
  70:	0c 00                	or     $0x0,%al
  72:	00 00                	add    %al,(%eax)
  74:	03 37                	add    (%edi),%esi
  76:	61                   	popa   
  77:	00 00                	add    %al,(%eax)
  79:	00 02                	add    %al,(%edx)
  7b:	4a                   	dec    %edx
  7c:	02 00                	add    (%eax),%al
  7e:	00 03                	add    %al,(%ebx)
  80:	83 85 00 00 00 03 04 	addl   $0x4,0x3000000(%ebp)
  87:	05 ee 00 00 00       	add    $0xee,%eax
  8c:	02 40 02             	add    0x2(%eax),%al
  8f:	00 00                	add    %al,(%eax)
  91:	03 84 6f 00 00 00 03 	add    0x3000000(%edi,%ebp,2),%eax
  98:	04 07                	add    $0x7,%al
  9a:	5a                   	pop    %edx
  9b:	00 00                	add    %al,(%eax)
  9d:	00 05 04 06 04 a6    	add    %al,0xa6040604
  a3:	00 00                	add    %al,(%eax)
  a5:	00 03                	add    %al,(%ebx)
  a7:	01 06                	add    %eax,(%esi)
  a9:	79 01                	jns    ac <_init-0x8048688>
  ab:	00 00                	add    %al,(%eax)
  ad:	02 6b 01             	add    0x1(%ebx),%ch
  b0:	00 00                	add    %al,(%eax)
  b2:	04 30                	add    $0x30,%al
  b4:	b8 00 00 00 07       	mov    $0x7000000,%eax
  b9:	67 01 00             	add    %eax,(%bx,%si)
  bc:	00 94 05 f5 38 02 00 	add    %dl,0x238f5(%ebp,%eax,1)
  c3:	00 08                	add    %cl,(%eax)
  c5:	c8 02 00 00          	enter  $0x2,$0x0
  c9:	05 f6 5a 00 00       	add    $0x5af6,%eax
  ce:	00 00                	add    %al,(%eax)
  d0:	08 c7                	or     %al,%bh
  d2:	01 00                	add    %eax,(%eax)
  d4:	00 05 fb a0 00 00    	add    %al,0xa0fb
  da:	00 04 08             	add    %al,(%eax,%ecx,1)
  dd:	95                   	xchg   %eax,%ebp
  de:	00 00                	add    %al,(%eax)
  e0:	00 05 fc a0 00 00    	add    %al,0xa0fc
  e6:	00 08                	add    %cl,(%eax)
  e8:	08 8d 02 00 00 05    	or     %cl,0x5000002(%ebp)
  ee:	fd                   	std    
  ef:	a0 00 00 00 0c       	mov    0xc000000,%al
  f4:	08 af 01 00 00 05    	or     %ch,0x5000001(%edi)
  fa:	fe                   	(bad)  
  fb:	a0 00 00 00 10       	mov    0x10000000,%al
 100:	08 63 00             	or     %ah,0x0(%ebx)
 103:	00 00                	add    %al,(%eax)
 105:	05 ff a0 00 00       	add    $0xa0ff,%eax
 10a:	00 14 09             	add    %dl,(%ecx,%ecx,1)
 10d:	2a 02                	sub    (%edx),%al
 10f:	00 00                	add    %al,(%eax)
 111:	05 00 01 a0 00       	add    $0xa00100,%eax
 116:	00 00                	add    %al,(%eax)
 118:	18 09                	sbb    %cl,(%ecx)
 11a:	78 00                	js     11c <_init-0x8048618>
 11c:	00 00                	add    %al,(%eax)
 11e:	05 01 01 a0 00       	add    $0xa00101,%eax
 123:	00 00                	add    %al,(%eax)
 125:	1c 09                	sbb    $0x9,%al
 127:	00 00                	add    %al,(%eax)
 129:	00 00                	add    %al,(%eax)
 12b:	05 02 01 a0 00       	add    $0xa00102,%eax
 130:	00 00                	add    %al,(%eax)
 132:	20 09                	and    %cl,(%ecx)
 134:	aa                   	stos   %al,%es:(%edi)
 135:	02 00                	add    (%eax),%al
 137:	00 05 04 01 a0 00    	add    %al,0xa00104
 13d:	00 00                	add    %al,(%eax)
 13f:	24 09                	and    $0x9,%al
 141:	69 02 00 00 05 05    	imul   $0x5050000,(%edx),%eax
 147:	01 a0 00 00 00 28    	add    %esp,0x28000000(%eax)
 14d:	09 36                	or     %esi,(%esi)
 14f:	00 00                	add    %al,(%eax)
 151:	00 05 06 01 a0 00    	add    %al,0xa00106
 157:	00 00                	add    %al,(%eax)
 159:	2c 09                	sub    $0x9,%al
 15b:	8c 00                	mov    %es,(%eax)
 15d:	00 00                	add    %al,(%eax)
 15f:	05 08 01 70 02       	add    $0x2700108,%eax
 164:	00 00                	add    %al,(%eax)
 166:	30 09                	xor    %cl,(%ecx)
 168:	52                   	push   %edx
 169:	02 00                	add    (%eax),%al
 16b:	00 05 0a 01 76 02    	add    %al,0x276010a
 171:	00 00                	add    %al,(%eax)
 173:	34 09                	xor    $0x9,%al
 175:	b8 02 00 00 05       	mov    $0x5000002,%eax
 17a:	0c 01                	or     $0x1,%al
 17c:	5a                   	pop    %edx
 17d:	00 00                	add    %al,(%eax)
 17f:	00 38                	add    %bh,(%eax)
 181:	09 7f 02             	or     %edi,0x2(%edi)
 184:	00 00                	add    %al,(%eax)
 186:	05 10 01 5a 00       	add    $0x5a0110,%eax
 18b:	00 00                	add    %al,(%eax)
 18d:	3c 09                	cmp    $0x9,%al
 18f:	1b 00                	sbb    (%eax),%eax
 191:	00 00                	add    %al,(%eax)
 193:	05 12 01 7a 00       	add    $0x7a0112,%eax
 198:	00 00                	add    %al,(%eax)
 19a:	40                   	inc    %eax
 19b:	09 1a                	or     %ebx,(%edx)
 19d:	01 00                	add    %eax,(%eax)
 19f:	00 05 16 01 3e 00    	add    %al,0x3e0116
 1a5:	00 00                	add    %al,(%eax)
 1a7:	44                   	inc    %esp
 1a8:	09 9b 02 00 00 05    	or     %ebx,0x5000002(%ebx)
 1ae:	17                   	pop    %ss
 1af:	01 4c 00 00          	add    %ecx,0x0(%eax,%eax,1)
 1b3:	00 46 09             	add    %al,0x9(%esi)
 1b6:	a5                   	movsl  %ds:(%esi),%es:(%edi)
 1b7:	01 00                	add    %eax,(%eax)
 1b9:	00 05 18 01 7c 02    	add    %al,0x27c0118
 1bf:	00 00                	add    %al,(%eax)
 1c1:	47                   	inc    %edi
 1c2:	09 ff                	or     %edi,%edi
 1c4:	00 00                	add    %al,(%eax)
 1c6:	00 05 1c 01 8c 02    	add    %al,0x28c011c
 1cc:	00 00                	add    %al,(%eax)
 1ce:	48                   	dec    %eax
 1cf:	09 1f                	or     %ebx,(%edi)
 1d1:	00 00                	add    %al,(%eax)
 1d3:	00 05 25 01 8c 00    	add    %al,0x8c0125
 1d9:	00 00                	add    %al,(%eax)
 1db:	4c                   	dec    %esp
 1dc:	09 f2                	or     %esi,%edx
 1de:	01 00                	add    %eax,(%eax)
 1e0:	00 05 2e 01 9e 00    	add    %al,0x9e012e
 1e6:	00 00                	add    %al,(%eax)
 1e8:	54                   	push   %esp
 1e9:	09 f9                	or     %edi,%ecx
 1eb:	01 00                	add    %eax,(%eax)
 1ed:	00 05 2f 01 9e 00    	add    %al,0x9e012f
 1f3:	00 00                	add    %al,(%eax)
 1f5:	58                   	pop    %eax
 1f6:	09 00                	or     %eax,(%eax)
 1f8:	02 00                	add    (%eax),%al
 1fa:	00 05 30 01 9e 00    	add    %al,0x9e0130
 200:	00 00                	add    %al,(%eax)
 202:	5c                   	pop    %esp
 203:	09 07                	or     %eax,(%edi)
 205:	02 00                	add    (%eax),%al
 207:	00 05 31 01 9e 00    	add    %al,0x9e0131
 20d:	00 00                	add    %al,(%eax)
 20f:	60                   	pusha  
 210:	09 0e                	or     %ecx,(%esi)
 212:	02 00                	add    (%eax),%al
 214:	00 05 32 01 25 00    	add    %al,0x250132
 21a:	00 00                	add    %al,(%eax)
 21c:	64 09 87 02 00 00 05 	or     %eax,%fs:0x5000002(%edi)
 223:	34 01                	xor    $0x1,%al
 225:	5a                   	pop    %edx
 226:	00 00                	add    %al,(%eax)
 228:	00 68 09             	add    %ch,0x9(%eax)
 22b:	be 01 00 00 05       	mov    $0x5000001,%esi
 230:	36 01 92 02 00 00 6c 	add    %edx,%ss:0x6c000002(%edx)
 237:	00 0a                	add    %cl,(%edx)
 239:	d6                   	(bad)  
 23a:	02 00                	add    (%eax),%al
 23c:	00 05 9a 07 9a 01    	add    %al,0x19a079a
 242:	00 00                	add    %al,(%eax)
 244:	0c 05                	or     $0x5,%al
 246:	a0 70 02 00 00       	mov    0x270,%al
 24b:	08 ec                	or     %ch,%ah
 24d:	01 00                	add    %eax,(%eax)
 24f:	00 05 a1 70 02 00    	add    %al,0x270a1
 255:	00 00                	add    %al,(%eax)
 257:	08 61 01             	or     %ah,0x1(%ecx)
 25a:	00 00                	add    %al,(%eax)
 25c:	05 a2 76 02 00       	add    $0x276a2,%eax
 261:	00 04 08             	add    %al,(%eax,%ecx,1)
 264:	26 01 00             	add    %eax,%es:(%eax)
 267:	00 05 a6 5a 00 00    	add    %al,0x5aa6
 26d:	00 08                	add    %cl,(%eax)
 26f:	00 06                	add    %al,(%esi)
 271:	04 3f                	add    $0x3f,%al
 273:	02 00                	add    (%eax),%al
 275:	00 06                	add    %al,(%esi)
 277:	04 b8                	add    $0xb8,%al
 279:	00 00                	add    %al,(%eax)
 27b:	00 0b                	add    %cl,(%ebx)
 27d:	a6                   	cmpsb  %es:(%edi),%ds:(%esi)
 27e:	00 00                	add    %al,(%eax)
 280:	00 8c 02 00 00 0c 97 	add    %cl,-0x68f40000(%edx,%eax,1)
 287:	00 00                	add    %al,(%eax)
 289:	00 00                	add    %al,(%eax)
 28b:	00 06                	add    %al,(%esi)
 28d:	04 38                	add    $0x38,%al
 28f:	02 00                	add    (%eax),%al
 291:	00 0b                	add    %cl,(%ebx)
 293:	a6                   	cmpsb  %es:(%edi),%ds:(%esi)
 294:	00 00                	add    %al,(%eax)
 296:	00 a2 02 00 00 0c    	add    %ah,0xc000002(%edx)
 29c:	97                   	xchg   %eax,%edi
 29d:	00 00                	add    %al,(%eax)
 29f:	00 27                	add    %ah,(%edi)
 2a1:	00 06                	add    %al,(%esi)
 2a3:	04 a8                	add    $0xa8,%al
 2a5:	02 00                	add    (%eax),%al
 2a7:	00 0d a6 00 00 00    	add    %cl,0xa6
 2ad:	0e                   	push   %cs
 2ae:	e7 01                	out    %eax,$0x1
 2b0:	00 00                	add    %al,(%eax)
 2b2:	01 23                	add    %esp,(%ebx)
 2b4:	5a                   	pop    %edx
 2b5:	00 00                	add    %al,(%eax)
 2b7:	00 8b 8a 04 08 57    	add    %cl,0x5708048a(%ebx)
 2bd:	01 00                	add    %eax,(%eax)
 2bf:	00 01                	add    %al,(%ecx)
 2c1:	9c                   	pushf  
 2c2:	48                   	dec    %eax
 2c3:	04 00                	add    $0x0,%al
 2c5:	00 0f                	add    %cl,(%edi)
 2c7:	7e 01                	jle    2ca <_init-0x804846a>
 2c9:	00 00                	add    %al,(%eax)
 2cb:	01 23                	add    %esp,(%ebx)
 2cd:	5a                   	pop    %edx
 2ce:	00 00                	add    %al,(%eax)
 2d0:	00 00                	add    %al,(%eax)
 2d2:	00 00                	add    %al,(%eax)
 2d4:	00 10                	add    %dl,(%eax)
 2d6:	2b 01                	sub    (%ecx),%eax
 2d8:	00 00                	add    %al,(%eax)
 2da:	01 23                	add    %esp,(%ebx)
 2dc:	48                   	dec    %eax
 2dd:	04 00                	add    $0x0,%al
 2df:	00 02                	add    %al,(%edx)
 2e1:	91                   	xchg   %eax,%ecx
 2e2:	04 11                	add    $0x11,%al
 2e4:	54                   	push   %esp
 2e5:	00 00                	add    %al,(%eax)
 2e7:	00 01                	add    %al,(%ecx)
 2e9:	25 a0 00 00 00       	and    $0xa0,%eax
 2ee:	42                   	inc    %edx
 2ef:	00 00                	add    %al,(%eax)
 2f1:	00 12                	add    %dl,(%edx)
 2f3:	d1 8a 04 08 1e 00    	rorl   0x1e0804(%edx)
 2f9:	00 00                	add    %al,(%eax)
 2fb:	23 03                	and    (%ebx),%eax
 2fd:	00 00                	add    %al,(%eax)
 2ff:	13 15 02 00 00 06    	adc    0x6000002,%edx
 305:	00 10                	add    %dl,(%eax)
 307:	03 00                	add    (%eax),%eax
 309:	00 14 5a             	add    %dl,(%edx,%ebx,2)
 30c:	00 00                	add    %al,(%eax)
 30e:	00 00                	add    %al,(%eax)
 310:	15 e3 8a 04 08       	adc    $0x8048ae3,%eax
 315:	7b 04                	jnp    31b <_init-0x8048419>
 317:	00 00                	add    %al,(%eax)
 319:	15 ef 8a 04 08       	adc    $0x8048aef,%eax
 31e:	92                   	xchg   %eax,%edx
 31f:	04 00                	add    $0x0,%al
 321:	00 00                	add    %al,(%eax)
 323:	12 ef                	adc    %bh,%ch
 325:	8a 04 08             	mov    (%eax,%ecx,1),%al
 328:	1b 00                	sbb    (%eax),%eax
 32a:	00 00                	add    %al,(%eax)
 32c:	54                   	push   %esp
 32d:	03 00                	add    (%eax),%eax
 32f:	00 13                	add    %dl,(%ebx)
 331:	15 02 00 00 06       	adc    $0x6000002,%eax
 336:	00 41 03             	add    %al,0x3(%ecx)
 339:	00 00                	add    %al,(%eax)
 33b:	14 5a                	adc    $0x5a,%al
 33d:	00 00                	add    %al,(%eax)
 33f:	00 00                	add    %al,(%eax)
 341:	15 fe 8a 04 08       	adc    $0x8048afe,%eax
 346:	7b 04                	jnp    34c <_init-0x80483e8>
 348:	00 00                	add    %al,(%eax)
 34a:	15 0a 8b 04 08       	adc    $0x8048b0a,%eax
 34f:	92                   	xchg   %eax,%edx
 350:	04 00                	add    $0x0,%al
 352:	00 00                	add    %al,(%eax)
 354:	15 c5 8a 04 08       	adc    $0x8048ac5,%eax
 359:	a3 04 00 00 15       	mov    %eax,0x15000004
 35e:	0f 8b 04 08 be 04    	jnp    4be0b68 <_init-0x3467bcc>
 364:	00 00                	add    %al,(%eax)
 366:	15 1c 8b 04 08       	adc    $0x8048b1c,%eax
 36b:	c5 04 00             	lds    (%eax,%eax,1),%eax
 36e:	00 15 28 8b 04 08    	add    %dl,0x8048b28
 374:	c5 04 00             	lds    (%eax,%eax,1),%eax
 377:	00 15 2d 8b 04 08    	add    %dl,0x8048b2d
 37d:	de 04 00             	fiadd  (%eax,%eax,1)
 380:	00 15 35 8b 04 08    	add    %dl,0x8048b35
 386:	e9 04 00 00 15       	jmp    1500038f <_end+0xcfb453f>
 38b:	3a 8b 04 08 fa 04    	cmp    0x4fa0804(%ebx),%cl
 391:	00 00                	add    %al,(%eax)
 393:	15 46 8b 04 08       	adc    $0x8048b46,%eax
 398:	c5 04 00             	lds    (%eax,%eax,1),%eax
 39b:	00 15 4b 8b 04 08    	add    %dl,0x8048b4b
 3a1:	de 04 00             	fiadd  (%eax,%eax,1)
 3a4:	00 15 53 8b 04 08    	add    %dl,0x8048b53
 3aa:	01 05 00 00 15 58    	add    %eax,0x58150000
 3b0:	8b 04 08             	mov    (%eax,%ecx,1),%eax
 3b3:	fa                   	cli    
 3b4:	04 00                	add    $0x0,%al
 3b6:	00 15 64 8b 04 08    	add    %dl,0x8048b64
 3bc:	c5 04 00             	lds    (%eax,%eax,1),%eax
 3bf:	00 15 69 8b 04 08    	add    %dl,0x8048b69
 3c5:	de 04 00             	fiadd  (%eax,%eax,1)
 3c8:	00 15 71 8b 04 08    	add    %dl,0x8048b71
 3ce:	12 05 00 00 15 76    	adc    0x76150000,%al
 3d4:	8b 04 08             	mov    (%eax,%ecx,1),%eax
 3d7:	fa                   	cli    
 3d8:	04 00                	add    $0x0,%al
 3da:	00 15 82 8b 04 08    	add    %dl,0x8048b82
 3e0:	c5 04 00             	lds    (%eax,%eax,1),%eax
 3e3:	00 15 87 8b 04 08    	add    %dl,0x8048b87
 3e9:	de 04 00             	fiadd  (%eax,%eax,1)
 3ec:	00 15 8f 8b 04 08    	add    %dl,0x8048b8f
 3f2:	23 05 00 00 15 94    	and    0x94150000,%eax
 3f8:	8b 04 08             	mov    (%eax,%ecx,1),%eax
 3fb:	fa                   	cli    
 3fc:	04 00                	add    $0x0,%al
 3fe:	00 15 a0 8b 04 08    	add    %dl,0x8048ba0
 404:	c5 04 00             	lds    (%eax,%eax,1),%eax
 407:	00 15 a5 8b 04 08    	add    %dl,0x8048ba5
 40d:	de 04 00             	fiadd  (%eax,%eax,1)
 410:	00 15 ad 8b 04 08    	add    %dl,0x8048bad
 416:	34 05                	xor    $0x5,%al
 418:	00 00                	add    %al,(%eax)
 41a:	15 b2 8b 04 08       	adc    $0x8048bb2,%eax
 41f:	fa                   	cli    
 420:	04 00                	add    $0x0,%al
 422:	00 15 be 8b 04 08    	add    %dl,0x8048bbe
 428:	c5 04 00             	lds    (%eax,%eax,1),%eax
 42b:	00 15 c3 8b 04 08    	add    %dl,0x8048bc3
 431:	de 04 00             	fiadd  (%eax,%eax,1)
 434:	00 15 cb 8b 04 08    	add    %dl,0x8048bcb
 43a:	45                   	inc    %ebp
 43b:	05 00 00 15 d0       	add    $0xd0150000,%eax
 440:	8b 04 08             	mov    (%eax,%ecx,1),%eax
 443:	fa                   	cli    
 444:	04 00                	add    $0x0,%al
 446:	00 00                	add    %al,(%eax)
 448:	06                   	push   %es
 449:	04 a0                	add    $0xa0,%al
 44b:	00 00                	add    %al,(%eax)
 44d:	00 16                	add    %dl,(%esi)
 44f:	79 02                	jns    453 <_init-0x80482e1>
 451:	00 00                	add    %al,(%eax)
 453:	04 a8                	add    $0xa8,%al
 455:	76 02                	jbe    459 <_init-0x80482db>
 457:	00 00                	add    %al,(%eax)
 459:	16                   	push   %ss
 45a:	cf                   	iret   
 45b:	02 00                	add    (%eax),%al
 45d:	00 04 a9             	add    %al,(%ecx,%ebp,4)
 460:	76 02                	jbe    464 <_init-0x80482d0>
 462:	00 00                	add    %al,(%eax)
 464:	17                   	pop    %ss
 465:	85 00                	test   %eax,(%eax)
 467:	00 00                	add    %al,(%eax)
 469:	01 21                	add    %esp,(%ecx)
 46b:	75 04                	jne    471 <_init-0x80482c3>
 46d:	00 00                	add    %al,(%eax)
 46f:	05 03 ac b7 04       	add    $0x4b7ac03,%eax
 474:	08 06                	or     %al,(%esi)
 476:	04 ad                	add    $0xad,%al
 478:	00 00                	add    %al,(%eax)
 47a:	00 18                	add    %bl,(%eax)
 47c:	13 01                	adc    (%ecx),%eax
 47e:	00 00                	add    %al,(%eax)
 480:	04 6a                	add    $0x6a,%al
 482:	01 5a 00             	add    %ebx,0x0(%edx)
 485:	00 00                	add    %al,(%eax)
 487:	92                   	xchg   %eax,%edx
 488:	04 00                	add    $0x0,%al
 48a:	00 14 a2             	add    %dl,(%edx,%eiz,4)
 48d:	02 00                	add    (%eax),%al
 48f:	00 19                	add    %bl,(%ecx)
 491:	00 13                	add    %dl,(%ebx)
 493:	15 02 00 00 06       	adc    $0x6000002,%eax
 498:	00 a3 04 00 00 14    	add    %ah,0x14000004(%ebx)
 49e:	5a                   	pop    %edx
 49f:	00 00                	add    %al,(%eax)
 4a1:	00 00                	add    %al,(%eax)
 4a3:	18 15 00 00 00 04    	sbb    %dl,0x4000000
 4a9:	10 01                	adc    %al,(%ecx)
 4ab:	75 04                	jne    4b1 <_init-0x8048283>
 4ad:	00 00                	add    %al,(%eax)
 4af:	be 04 00 00 14       	mov    $0x14000004,%esi
 4b4:	a2 02 00 00 14       	mov    %al,0x14000002
 4b9:	a2 02 00 00 00       	mov    %al,0x2
 4be:	1a 59 02             	sbb    0x2(%ecx),%bl
 4c1:	00 00                	add    %al,(%eax)
 4c3:	08 09                	or     %cl,(%ecx)
 4c5:	1b 27                	sbb    (%edi),%esp
 4c7:	00 00                	add    %al,(%eax)
 4c9:	00 06                	add    %al,(%esi)
 4cb:	00 31                	add    %dh,(%ecx)
 4cd:	00 00                	add    %al,(%eax)
 4cf:	00 5a 00             	add    %bl,0x0(%edx)
 4d2:	00 00                	add    %al,(%eax)
 4d4:	de 04 00             	fiadd  (%eax,%eax,1)
 4d7:	00 14 a2             	add    %dl,(%edx,%eiz,4)
 4da:	02 00                	add    (%eax),%al
 4dc:	00 00                	add    %al,(%eax)
 4de:	1c a2                	sbb    $0xa2,%al
 4e0:	00 00                	add    %al,(%eax)
 4e2:	00 08                	add    %cl,(%eax)
 4e4:	08 a0 00 00 00 13    	or     %ah,0x13000000(%eax)
 4ea:	e1 00                	loope  4ec <_init-0x8048248>
 4ec:	00 00                	add    %al,(%eax)
 4ee:	07                   	pop    %es
 4ef:	04 fa                	add    $0xfa,%al
 4f1:	04 00                	add    $0x0,%al
 4f3:	00 14 a0             	add    %dl,(%eax,%eiz,4)
 4f6:	00 00                	add    %al,(%eax)
 4f8:	00 00                	add    %al,(%eax)
 4fa:	1a 05 01 00 00 08    	sbb    0x8000001,%al
 500:	0b 13                	or     (%ebx),%edx
 502:	1a 02                	sbb    (%edx),%al
 504:	00 00                	add    %al,(%eax)
 506:	07                   	pop    %es
 507:	05 12 05 00 00       	add    $0x512,%eax
 50c:	14 a0                	adc    $0xa0,%al
 50e:	00 00                	add    %al,(%eax)
 510:	00 00                	add    %al,(%eax)
 512:	13 22                	adc    (%edx),%esp
 514:	02 00                	add    (%eax),%al
 516:	00 07                	add    %al,(%edi)
 518:	06                   	push   %es
 519:	23 05 00 00 14 a0    	and    0xa0140000,%eax
 51f:	00 00                	add    %al,(%eax)
 521:	00 00                	add    %al,(%eax)
 523:	13 f7                	adc    %edi,%esi
 525:	00 00                	add    %al,(%eax)
 527:	00 07                	add    %al,(%edi)
 529:	07                   	pop    %es
 52a:	34 05                	xor    $0x5,%al
 52c:	00 00                	add    %al,(%eax)
 52e:	14 a0                	adc    $0xa0,%al
 530:	00 00                	add    %al,(%eax)
 532:	00 00                	add    %al,(%eax)
 534:	13 38                	adc    (%eax),%edi
 536:	02 00                	add    (%eax),%al
 538:	00 07                	add    %al,(%edi)
 53a:	08 45 05             	or     %al,0x5(%ebp)
 53d:	00 00                	add    %al,(%eax)
 53f:	14 a0                	adc    $0xa0,%al
 541:	00 00                	add    %al,(%eax)
 543:	00 00                	add    %al,(%eax)
 545:	1d c0 02 00 00       	sbb    $0x2c0,%eax
 54a:	07                   	pop    %es
 54b:	09 14 a0             	or     %edx,(%eax,%eiz,4)
 54e:	00 00                	add    %al,(%eax)
 550:	00 00                	add    %al,(%eax)
	...

Disassembly of section .debug_abbrev:

00000000 <.debug_abbrev>:
   0:	01 11                	add    %edx,(%ecx)
   2:	01 25 0e 13 0b 03    	add    %esp,0x30b130e
   8:	0e                   	push   %cs
   9:	1b 0e                	sbb    (%esi),%ecx
   b:	11 01                	adc    %eax,(%ecx)
   d:	12 06                	adc    (%esi),%al
   f:	10 17                	adc    %dl,(%edi)
  11:	00 00                	add    %al,(%eax)
  13:	02 16                	add    (%esi),%dl
  15:	00 03                	add    %al,(%ebx)
  17:	0e                   	push   %cs
  18:	3a 0b                	cmp    (%ebx),%cl
  1a:	3b 0b                	cmp    (%ebx),%ecx
  1c:	49                   	dec    %ecx
  1d:	13 00                	adc    (%eax),%eax
  1f:	00 03                	add    %al,(%ebx)
  21:	24 00                	and    $0x0,%al
  23:	0b 0b                	or     (%ebx),%ecx
  25:	3e 0b 03             	or     %ds:(%ebx),%eax
  28:	0e                   	push   %cs
  29:	00 00                	add    %al,(%eax)
  2b:	04 24                	add    $0x24,%al
  2d:	00 0b                	add    %cl,(%ebx)
  2f:	0b 3e                	or     (%esi),%edi
  31:	0b 03                	or     (%ebx),%eax
  33:	08 00                	or     %al,(%eax)
  35:	00 05 0f 00 0b 0b    	add    %al,0xb0b000f
  3b:	00 00                	add    %al,(%eax)
  3d:	06                   	push   %es
  3e:	0f 00 0b             	str    (%ebx)
  41:	0b 49 13             	or     0x13(%ecx),%ecx
  44:	00 00                	add    %al,(%eax)
  46:	07                   	pop    %es
  47:	13 01                	adc    (%ecx),%eax
  49:	03 0e                	add    (%esi),%ecx
  4b:	0b 0b                	or     (%ebx),%ecx
  4d:	3a 0b                	cmp    (%ebx),%cl
  4f:	3b 0b                	cmp    (%ebx),%ecx
  51:	01 13                	add    %edx,(%ebx)
  53:	00 00                	add    %al,(%eax)
  55:	08 0d 00 03 0e 3a    	or     %cl,0x3a0e0300
  5b:	0b 3b                	or     (%ebx),%edi
  5d:	0b 49 13             	or     0x13(%ecx),%ecx
  60:	38 0b                	cmp    %cl,(%ebx)
  62:	00 00                	add    %al,(%eax)
  64:	09 0d 00 03 0e 3a    	or     %ecx,0x3a0e0300
  6a:	0b 3b                	or     (%ebx),%edi
  6c:	05 49 13 38 0b       	add    $0xb381349,%eax
  71:	00 00                	add    %al,(%eax)
  73:	0a 16                	or     (%esi),%dl
  75:	00 03                	add    %al,(%ebx)
  77:	0e                   	push   %cs
  78:	3a 0b                	cmp    (%ebx),%cl
  7a:	3b 0b                	cmp    (%ebx),%ecx
  7c:	00 00                	add    %al,(%eax)
  7e:	0b 01                	or     (%ecx),%eax
  80:	01 49 13             	add    %ecx,0x13(%ecx)
  83:	01 13                	add    %edx,(%ebx)
  85:	00 00                	add    %al,(%eax)
  87:	0c 21                	or     $0x21,%al
  89:	00 49 13             	add    %cl,0x13(%ecx)
  8c:	2f                   	das    
  8d:	0b 00                	or     (%eax),%eax
  8f:	00 0d 26 00 49 13    	add    %cl,0x13490026
  95:	00 00                	add    %al,(%eax)
  97:	0e                   	push   %cs
  98:	2e 01 3f             	add    %edi,%cs:(%edi)
  9b:	19 03                	sbb    %eax,(%ebx)
  9d:	0e                   	push   %cs
  9e:	3a 0b                	cmp    (%ebx),%cl
  a0:	3b 0b                	cmp    (%ebx),%ecx
  a2:	27                   	daa    
  a3:	19 49 13             	sbb    %ecx,0x13(%ecx)
  a6:	11 01                	adc    %eax,(%ecx)
  a8:	12 06                	adc    (%esi),%al
  aa:	40                   	inc    %eax
  ab:	18 97 42 19 01 13    	sbb    %dl,0x13011942(%edi)
  b1:	00 00                	add    %al,(%eax)
  b3:	0f 05                	syscall 
  b5:	00 03                	add    %al,(%ebx)
  b7:	0e                   	push   %cs
  b8:	3a 0b                	cmp    (%ebx),%cl
  ba:	3b 0b                	cmp    (%ebx),%ecx
  bc:	49                   	dec    %ecx
  bd:	13 02                	adc    (%edx),%eax
  bf:	17                   	pop    %ss
  c0:	00 00                	add    %al,(%eax)
  c2:	10 05 00 03 0e 3a    	adc    %al,0x3a0e0300
  c8:	0b 3b                	or     (%ebx),%edi
  ca:	0b 49 13             	or     0x13(%ecx),%ecx
  cd:	02 18                	add    (%eax),%bl
  cf:	00 00                	add    %al,(%eax)
  d1:	11 34 00             	adc    %esi,(%eax,%eax,1)
  d4:	03 0e                	add    (%esi),%ecx
  d6:	3a 0b                	cmp    (%ebx),%cl
  d8:	3b 0b                	cmp    (%ebx),%ecx
  da:	49                   	dec    %ecx
  db:	13 02                	adc    (%edx),%eax
  dd:	17                   	pop    %ss
  de:	00 00                	add    %al,(%eax)
  e0:	12 0b                	adc    (%ebx),%cl
  e2:	01 11                	add    %edx,(%ecx)
  e4:	01 12                	add    %edx,(%edx)
  e6:	06                   	push   %es
  e7:	01 13                	add    %edx,(%ebx)
  e9:	00 00                	add    %al,(%eax)
  eb:	13 2e                	adc    (%esi),%ebp
  ed:	01 3f                	add    %edi,(%edi)
  ef:	19 03                	sbb    %eax,(%ebx)
  f1:	0e                   	push   %cs
  f2:	3a 0b                	cmp    (%ebx),%cl
  f4:	3b 0b                	cmp    (%ebx),%ecx
  f6:	27                   	daa    
  f7:	19 3c 19             	sbb    %edi,(%ecx,%ebx,1)
  fa:	01 13                	add    %edx,(%ebx)
  fc:	00 00                	add    %al,(%eax)
  fe:	14 05                	adc    $0x5,%al
 100:	00 49 13             	add    %cl,0x13(%ecx)
 103:	00 00                	add    %al,(%eax)
 105:	15 89 82 01 00       	adc    $0x18289,%eax
 10a:	11 01                	adc    %eax,(%ecx)
 10c:	31 13                	xor    %edx,(%ebx)
 10e:	00 00                	add    %al,(%eax)
 110:	16                   	push   %ss
 111:	34 00                	xor    $0x0,%al
 113:	03 0e                	add    (%esi),%ecx
 115:	3a 0b                	cmp    (%ebx),%cl
 117:	3b 0b                	cmp    (%ebx),%ecx
 119:	49                   	dec    %ecx
 11a:	13 3f                	adc    (%edi),%edi
 11c:	19 3c 19             	sbb    %edi,(%ecx,%ebx,1)
 11f:	00 00                	add    %al,(%eax)
 121:	17                   	pop    %ss
 122:	34 00                	xor    $0x0,%al
 124:	03 0e                	add    (%esi),%ecx
 126:	3a 0b                	cmp    (%ebx),%cl
 128:	3b 0b                	cmp    (%ebx),%ecx
 12a:	49                   	dec    %ecx
 12b:	13 3f                	adc    (%edi),%edi
 12d:	19 02                	sbb    %eax,(%edx)
 12f:	18 00                	sbb    %al,(%eax)
 131:	00 18                	add    %bl,(%eax)
 133:	2e 01 3f             	add    %edi,%cs:(%edi)
 136:	19 03                	sbb    %eax,(%ebx)
 138:	0e                   	push   %cs
 139:	3a 0b                	cmp    (%ebx),%cl
 13b:	3b 05 27 19 49 13    	cmp    0x13491927,%eax
 141:	3c 19                	cmp    $0x19,%al
 143:	01 13                	add    %edx,(%ebx)
 145:	00 00                	add    %al,(%eax)
 147:	19 18                	sbb    %ebx,(%eax)
 149:	00 00                	add    %al,(%eax)
 14b:	00 1a                	add    %bl,(%edx)
 14d:	2e 00 3f             	add    %bh,%cs:(%edi)
 150:	19 03                	sbb    %eax,(%ebx)
 152:	0e                   	push   %cs
 153:	3a 0b                	cmp    (%ebx),%cl
 155:	3b 0b                	cmp    (%ebx),%ecx
 157:	27                   	daa    
 158:	19 3c 19             	sbb    %edi,(%ecx,%ebx,1)
 15b:	00 00                	add    %al,(%eax)
 15d:	1b 2e                	sbb    (%esi),%ebp
 15f:	01 3f                	add    %edi,(%edi)
 161:	19 03                	sbb    %eax,(%ebx)
 163:	0e                   	push   %cs
 164:	3a 0b                	cmp    (%ebx),%cl
 166:	3b 0b                	cmp    (%ebx),%ecx
 168:	6e                   	outsb  %ds:(%esi),(%dx)
 169:	0e                   	push   %cs
 16a:	27                   	daa    
 16b:	19 49 13             	sbb    %ecx,0x13(%ecx)
 16e:	3c 19                	cmp    $0x19,%al
 170:	01 13                	add    %edx,(%ebx)
 172:	00 00                	add    %al,(%eax)
 174:	1c 2e                	sbb    $0x2e,%al
 176:	00 3f                	add    %bh,(%edi)
 178:	19 03                	sbb    %eax,(%ebx)
 17a:	0e                   	push   %cs
 17b:	3a 0b                	cmp    (%ebx),%cl
 17d:	3b 0b                	cmp    (%ebx),%ecx
 17f:	27                   	daa    
 180:	19 49 13             	sbb    %ecx,0x13(%ecx)
 183:	3c 19                	cmp    $0x19,%al
 185:	00 00                	add    %al,(%eax)
 187:	1d 2e 01 3f 19       	sbb    $0x193f012e,%eax
 18c:	03 0e                	add    (%esi),%ecx
 18e:	3a 0b                	cmp    (%ebx),%cl
 190:	3b 0b                	cmp    (%ebx),%ecx
 192:	27                   	daa    
 193:	19 3c 19             	sbb    %edi,(%ecx,%ebx,1)
 196:	00 00                	add    %al,(%eax)
	...

Disassembly of section .debug_line:

00000000 <.debug_line>:
   0:	f6 00 00             	testb  $0x0,(%eax)
   3:	00 02                	add    %al,(%edx)
   5:	00 ba 00 00 00 01    	add    %bh,0x1000000(%edx)
   b:	01 fb                	add    %edi,%ebx
   d:	0e                   	push   %cs
   e:	0d 00 01 01 01       	or     $0x1010100,%eax
  13:	01 00                	add    %eax,(%eax)
  15:	00 00                	add    %al,(%eax)
  17:	01 00                	add    %eax,(%eax)
  19:	00 01                	add    %al,(%ecx)
  1b:	2f                   	das    
  1c:	75 73                	jne    91 <_init-0x80486a3>
  1e:	72 2f                	jb     4f <_init-0x80486e5>
  20:	6c                   	insb   (%dx),%es:(%edi)
  21:	69 62 2f 67 63 63 2f 	imul   $0x2f636367,0x2f(%edx),%esp
  28:	78 38                	js     62 <_init-0x80486d2>
  2a:	36 5f                	ss pop %edi
  2c:	36 34 2d             	ss xor $0x2d,%al
  2f:	6c                   	insb   (%dx),%es:(%edi)
  30:	69 6e 75 78 2d 67 6e 	imul   $0x6e672d78,0x75(%esi),%ebp
  37:	75 2f                	jne    68 <_init-0x80486cc>
  39:	34 2e                	xor    $0x2e,%al
  3b:	39 2f                	cmp    %ebp,(%edi)
  3d:	69 6e 63 6c 75 64 65 	imul   $0x6564756c,0x63(%esi),%ebp
  44:	00 2f                	add    %ch,(%edi)
  46:	75 73                	jne    bb <_init-0x8048679>
  48:	72 2f                	jb     79 <_init-0x80486bb>
  4a:	69 6e 63 6c 75 64 65 	imul   $0x6564756c,0x63(%esi),%ebp
  51:	2f                   	das    
  52:	62 69 74             	bound  %ebp,0x74(%ecx)
  55:	73 00                	jae    57 <_init-0x80486dd>
  57:	2f                   	das    
  58:	75 73                	jne    cd <_init-0x8048667>
  5a:	72 2f                	jb     8b <_init-0x80486a9>
  5c:	69 6e 63 6c 75 64 65 	imul   $0x6564756c,0x63(%esi),%ebp
  63:	00 00                	add    %al,(%eax)
  65:	62 6f 6d             	bound  %ebp,0x6d(%edi)
  68:	62 2e                	bound  %ebp,(%esi)
  6a:	63 00                	arpl   %ax,(%eax)
  6c:	00 00                	add    %al,(%eax)
  6e:	00 73 74             	add    %dh,0x74(%ebx)
  71:	64 64 65 66 2e 68 00 	fs fs gs cs pushw $0x100
  78:	01 
  79:	00 00                	add    %al,(%eax)
  7b:	74 79                	je     f6 <_init-0x804863e>
  7d:	70 65                	jo     e4 <_init-0x8048650>
  7f:	73 2e                	jae    af <_init-0x8048685>
  81:	68 00 02 00 00       	push   $0x200
  86:	73 74                	jae    fc <_init-0x8048638>
  88:	64 69 6f 2e 68 00 03 	imul   $0x30068,%fs:0x2e(%edi),%ebp
  8f:	00 
  90:	00 6c 69 62          	add    %ch,0x62(%ecx,%ebp,2)
  94:	69 6f 2e 68 00 03 00 	imul   $0x30068,0x2e(%edi),%ebp
  9b:	00 3c 62             	add    %bh,(%edx,%eiz,2)
  9e:	75 69                	jne    109 <_init-0x804862b>
  a0:	6c                   	insb   (%dx),%es:(%edi)
  a1:	74 2d                	je     d0 <_init-0x8048664>
  a3:	69 6e 3e 00 00 00 00 	imul   $0x0,0x3e(%esi),%ebp
  aa:	70 68                	jo     114 <_init-0x8048620>
  ac:	61                   	popa   
  ad:	73 65                	jae    114 <_init-0x8048620>
  af:	73 2e                	jae    df <_init-0x8048655>
  b1:	68 00 00 00 00       	push   $0x0
  b6:	73 75                	jae    12d <_init-0x8048607>
  b8:	70 70                	jo     12a <_init-0x804860a>
  ba:	6f                   	outsl  %ds:(%esi),(%dx)
  bb:	72 74                	jb     131 <_init-0x8048603>
  bd:	2e 68 00 00 00 00    	cs push $0x0
  c3:	00 00                	add    %al,(%eax)
  c5:	05 02 8b 8a 04       	add    $0x48a8b02,%eax
  ca:	08 03                	or     %al,(%ebx)
  cc:	23 01                	and    (%ecx),%eax
  ce:	08 44 59 c1          	or     %al,-0x3f(%ecx,%ebx,2)
  d2:	59                   	pop    %ecx
  d3:	08 ad 08 21 c0 e5    	or     %ch,-0x1a3fdef8(%ebp)
  d9:	be 5a c9 bd 59       	mov    $0x59bdc95a,%esi
  de:	83 5a be 59          	sbbl   $0x59,-0x42(%edx)
  e2:	83 59 be 59          	sbbl   $0x59,-0x42(%ecx)
  e6:	83 59 bd 59          	sbbl   $0x59,-0x43(%ecx)
  ea:	83 59 bd 59          	sbbl   $0x59,-0x43(%ecx)
  ee:	83 59 be 59          	sbbl   $0x59,-0x42(%ecx)
  f2:	83 5d 3d 02          	sbbl   $0x2,0x3d(%ebp)
  f6:	0f 00 01             	sldt   (%ecx)
  f9:	01                   	.byte 0x1

Disassembly of section .debug_str:

00000000 <.debug_str>:
   0:	5f                   	pop    %edi
   1:	49                   	dec    %ecx
   2:	4f                   	dec    %edi
   3:	5f                   	pop    %edi
   4:	62 75 66             	bound  %esi,0x66(%ebp)
   7:	5f                   	pop    %edi
   8:	65 6e                	outsb  %gs:(%esi),(%dx)
   a:	64 00 5f 5f          	add    %bl,%fs:0x5f(%edi)
   e:	71 75                	jno    85 <_init-0x80486af>
  10:	61                   	popa   
  11:	64 5f                	fs pop %edi
  13:	74 00                	je     15 <_init-0x804871f>
  15:	66 6f                	outsw  %ds:(%esi),(%dx)
  17:	70 65                	jo     7e <_init-0x80486b6>
  19:	6e                   	outsb  %ds:(%esi),(%dx)
  1a:	00 5f 6f             	add    %bl,0x6f(%edi)
  1d:	6c                   	insb   (%dx),%es:(%edi)
  1e:	64 5f                	fs pop %edi
  20:	6f                   	outsl  %ds:(%esi),(%dx)
  21:	66 66 73 65          	data16 data16 jae 8a <_init-0x80486aa>
  25:	74 00                	je     27 <_init-0x804870d>
  27:	5f                   	pop    %edi
  28:	5f                   	pop    %edi
  29:	62 75 69             	bound  %esi,0x69(%ebp)
  2c:	6c                   	insb   (%dx),%es:(%edi)
  2d:	74 69                	je     98 <_init-0x804869c>
  2f:	6e                   	outsb  %ds:(%esi),(%dx)
  30:	5f                   	pop    %edi
  31:	70 75                	jo     a8 <_init-0x804868c>
  33:	74 73                	je     a8 <_init-0x804868c>
  35:	00 5f 49             	add    %bl,0x49(%edi)
  38:	4f                   	dec    %edi
  39:	5f                   	pop    %edi
  3a:	73 61                	jae    9d <_init-0x8048697>
  3c:	76 65                	jbe    a3 <_init-0x8048691>
  3e:	5f                   	pop    %edi
  3f:	65 6e                	outsb  %gs:(%esi),(%dx)
  41:	64 00 73 68          	add    %dh,%fs:0x68(%ebx)
  45:	6f                   	outsl  %ds:(%esi),(%dx)
  46:	72 74                	jb     bc <_init-0x8048678>
  48:	20 69 6e             	and    %ch,0x6e(%ecx)
  4b:	74 00                	je     4d <_init-0x80486e7>
  4d:	73 69                	jae    b8 <_init-0x804867c>
  4f:	7a 65                	jp     b6 <_init-0x804867e>
  51:	5f                   	pop    %edi
  52:	74 00                	je     54 <_init-0x80486e0>
  54:	69 6e 70 75 74 00 73 	imul   $0x73007475,0x70(%esi),%ebp
  5b:	69 7a 65 74 79 70 65 	imul   $0x65707974,0x65(%edx),%edi
  62:	00 5f 49             	add    %bl,0x49(%edi)
  65:	4f                   	dec    %edi
  66:	5f                   	pop    %edi
  67:	77 72                	ja     db <_init-0x8048659>
  69:	69 74 65 5f 70 74 72 	imul   $0x727470,0x5f(%ebp,%eiz,2),%esi
  70:	00 
  71:	62 6f 6d             	bound  %ebp,0x6d(%edi)
  74:	62 2e                	bound  %ebp,(%esi)
  76:	63 00                	arpl   %ax,(%eax)
  78:	5f                   	pop    %edi
  79:	49                   	dec    %ecx
  7a:	4f                   	dec    %edi
  7b:	5f                   	pop    %edi
  7c:	62 75 66             	bound  %esi,0x66(%ebp)
  7f:	5f                   	pop    %edi
  80:	62 61 73             	bound  %esp,0x73(%ecx)
  83:	65 00 69 6e          	add    %ch,%gs:0x6e(%ecx)
  87:	66 69 6c 65 00 5f 6d 	imul   $0x6d5f,0x0(%ebp,%eiz,2),%bp
  8e:	61                   	popa   
  8f:	72 6b                	jb     fc <_init-0x8048638>
  91:	65 72 73             	gs jb  107 <_init-0x804862d>
  94:	00 5f 49             	add    %bl,0x49(%edi)
  97:	4f                   	dec    %edi
  98:	5f                   	pop    %edi
  99:	72 65                	jb     100 <_init-0x8048634>
  9b:	61                   	popa   
  9c:	64 5f                	fs pop %edi
  9e:	65 6e                	outsb  %gs:(%esi),(%dx)
  a0:	64 00 72 65          	add    %dh,%fs:0x65(%edx)
  a4:	61                   	popa   
  a5:	64 5f                	fs pop %edi
  a7:	6c                   	insb   (%dx),%es:(%edi)
  a8:	69 6e 65 00 47 4e 55 	imul   $0x554e4700,0x65(%esi),%ebp
  af:	20 43 20             	and    %al,0x20(%ebx)
  b2:	34 2e                	xor    $0x2e,%al
  b4:	39 2e                	cmp    %ebp,(%esi)
  b6:	32 20                	xor    (%eax),%ah
  b8:	2d 6d 33 32 20       	sub    $0x2032336d,%eax
  bd:	2d 6d 74 75 6e       	sub    $0x6e75746d,%eax
  c2:	65 3d 67 65 6e 65    	gs cmp $0x656e6567,%eax
  c8:	72 69                	jb     133 <_init-0x8048601>
  ca:	63 20                	arpl   %sp,(%eax)
  cc:	2d 6d 61 72 63       	sub    $0x6372616d,%eax
  d1:	68 3d 69 35 38       	push   $0x3835693d
  d6:	36 20 2d 67 67 64 62 	and    %ch,%ss:0x62646767
  dd:	20 2d 4f 00 70 68    	and    %ch,0x6870004f
  e3:	61                   	popa   
  e4:	73 65                	jae    14b <_init-0x80485e9>
  e6:	5f                   	pop    %edi
  e7:	31 00                	xor    %eax,(%eax)
  e9:	6c                   	insb   (%dx),%es:(%edi)
  ea:	6f                   	outsl  %ds:(%esi),(%dx)
  eb:	6e                   	outsb  %ds:(%esi),(%dx)
  ec:	67 20 6c 6f          	and    %ch,0x6f(%si)
  f0:	6e                   	outsb  %ds:(%esi),(%dx)
  f1:	67 20 69 6e          	and    %ch,0x6e(%bx,%di)
  f5:	74 00                	je     f7 <_init-0x804863d>
  f7:	70 68                	jo     161 <_init-0x80485d3>
  f9:	61                   	popa   
  fa:	73 65                	jae    161 <_init-0x80485d3>
  fc:	5f                   	pop    %edi
  fd:	34 00                	xor    $0x0,%al
  ff:	5f                   	pop    %edi
 100:	6c                   	insb   (%dx),%es:(%edi)
 101:	6f                   	outsl  %ds:(%esi),(%dx)
 102:	63 6b 00             	arpl   %bp,0x0(%ebx)
 105:	70 68                	jo     16f <_init-0x80485c5>
 107:	61                   	popa   
 108:	73 65                	jae    16f <_init-0x80485c5>
 10a:	5f                   	pop    %edi
 10b:	64 65 66 75 73       	fs gs data16 jne 183 <_init-0x80485b1>
 110:	65 64 00 70 72       	gs add %dh,%fs:0x72(%eax)
 115:	69 6e 74 66 00 5f 63 	imul   $0x635f0066,0x74(%esi),%ebp
 11c:	75 72                	jne    190 <_init-0x80485a4>
 11e:	5f                   	pop    %edi
 11f:	63 6f 6c             	arpl   %bp,0x6c(%edi)
 122:	75 6d                	jne    191 <_init-0x80485a3>
 124:	6e                   	outsb  %ds:(%esi),(%dx)
 125:	00 5f 70             	add    %bl,0x70(%edi)
 128:	6f                   	outsl  %ds:(%esi),(%dx)
 129:	73 00                	jae    12b <_init-0x8048609>
 12b:	61                   	popa   
 12c:	72 67                	jb     195 <_init-0x804859f>
 12e:	76 00                	jbe    130 <_init-0x8048604>
 130:	2f                   	das    
 131:	68 6f 6d 65 2f       	push   $0x2f656d6f
 136:	73 6a                	jae    1a2 <_init-0x8048592>
 138:	74 75                	je     1af <_init-0x8048585>
 13a:	2d 69 63 73 2d       	sub    $0x2d736369,%eax
 13f:	73 76                	jae    1b7 <_init-0x804857d>
 141:	6e                   	outsb  %ds:(%esi),(%dx)
 142:	2f                   	das    
 143:	61                   	popa   
 144:	72 63                	jb     1a9 <_init-0x804858b>
 146:	68 76 69 65 2f       	push   $0x2f656976
 14b:	53                   	push   %ebx
 14c:	45                   	inc    %ebp
 14d:	31 34 2d 6c 61 62 32 	xor    %esi,0x3262616c(,%ebp,1)
 154:	2f                   	das    
 155:	62 6f 6d             	bound  %ebp,0x6d(%edi)
 158:	62 6c 61 62          	bound  %ebp,0x62(%ecx,%eiz,2)
 15c:	2f                   	das    
 15d:	73 72                	jae    1d1 <_init-0x8048563>
 15f:	63 00                	arpl   %ax,(%eax)
 161:	5f                   	pop    %edi
 162:	73 62                	jae    1c6 <_init-0x804856e>
 164:	75 66                	jne    1cc <_init-0x8048568>
 166:	00 5f 49             	add    %bl,0x49(%edi)
 169:	4f                   	dec    %edi
 16a:	5f                   	pop    %edi
 16b:	46                   	inc    %esi
 16c:	49                   	dec    %ecx
 16d:	4c                   	dec    %esp
 16e:	45                   	inc    %ebp
 16f:	00 75 6e             	add    %dh,0x6e(%ebp)
 172:	73 69                	jae    1dd <_init-0x8048557>
 174:	67 6e                	outsb  %ds:(%si),(%dx)
 176:	65 64 20 63 68       	gs and %ah,%fs:0x68(%ebx)
 17b:	61                   	popa   
 17c:	72 00                	jb     17e <_init-0x80485b6>
 17e:	61                   	popa   
 17f:	72 67                	jb     1e8 <_init-0x804854c>
 181:	63 00                	arpl   %ax,(%eax)
 183:	6c                   	insb   (%dx),%es:(%edi)
 184:	6f                   	outsl  %ds:(%esi),(%dx)
 185:	6e                   	outsb  %ds:(%esi),(%dx)
 186:	67 20 6c 6f          	and    %ch,0x6f(%si)
 18a:	6e                   	outsb  %ds:(%esi),(%dx)
 18b:	67 20 75 6e          	and    %dh,0x6e(%di)
 18f:	73 69                	jae    1fa <_init-0x804853a>
 191:	67 6e                	outsb  %ds:(%si),(%dx)
 193:	65 64 20 69 6e       	gs and %ch,%fs:0x6e(%ecx)
 198:	74 00                	je     19a <_init-0x804859a>
 19a:	5f                   	pop    %edi
 19b:	49                   	dec    %ecx
 19c:	4f                   	dec    %edi
 19d:	5f                   	pop    %edi
 19e:	6d                   	insl   (%dx),%es:(%edi)
 19f:	61                   	popa   
 1a0:	72 6b                	jb     20d <_init-0x8048527>
 1a2:	65 72 00             	gs jb  1a5 <_init-0x804858f>
 1a5:	5f                   	pop    %edi
 1a6:	73 68                	jae    210 <_init-0x8048524>
 1a8:	6f                   	outsl  %ds:(%esi),(%dx)
 1a9:	72 74                	jb     21f <_init-0x8048515>
 1ab:	62 75 66             	bound  %esi,0x66(%ebp)
 1ae:	00 5f 49             	add    %bl,0x49(%edi)
 1b1:	4f                   	dec    %edi
 1b2:	5f                   	pop    %edi
 1b3:	77 72                	ja     227 <_init-0x804850d>
 1b5:	69 74 65 5f 62 61 73 	imul   $0x65736162,0x5f(%ebp,%eiz,2),%esi
 1bc:	65 
 1bd:	00 5f 75             	add    %bl,0x75(%edi)
 1c0:	6e                   	outsb  %ds:(%esi),(%dx)
 1c1:	75 73                	jne    236 <_init-0x80484fe>
 1c3:	65 64 32 00          	gs xor %fs:(%eax),%al
 1c7:	5f                   	pop    %edi
 1c8:	49                   	dec    %ecx
 1c9:	4f                   	dec    %edi
 1ca:	5f                   	pop    %edi
 1cb:	72 65                	jb     232 <_init-0x8048502>
 1cd:	61                   	popa   
 1ce:	64 5f                	fs pop %edi
 1d0:	70 74                	jo     246 <_init-0x80484ee>
 1d2:	72 00                	jb     1d4 <_init-0x8048560>
 1d4:	73 68                	jae    23e <_init-0x80484f6>
 1d6:	6f                   	outsl  %ds:(%esi),(%dx)
 1d7:	72 74                	jb     24d <_init-0x80484e7>
 1d9:	20 75 6e             	and    %dh,0x6e(%ebp)
 1dc:	73 69                	jae    247 <_init-0x80484ed>
 1de:	67 6e                	outsb  %ds:(%si),(%dx)
 1e0:	65 64 20 69 6e       	gs and %ch,%fs:0x6e(%ecx)
 1e5:	74 00                	je     1e7 <_init-0x804854d>
 1e7:	6d                   	insl   (%dx),%es:(%edi)
 1e8:	61                   	popa   
 1e9:	69 6e 00 5f 6e 65 78 	imul   $0x78656e5f,0x0(%esi),%ebp
 1f0:	74 00                	je     1f2 <_init-0x8048542>
 1f2:	5f                   	pop    %edi
 1f3:	5f                   	pop    %edi
 1f4:	70 61                	jo     257 <_init-0x80484dd>
 1f6:	64 31 00             	xor    %eax,%fs:(%eax)
 1f9:	5f                   	pop    %edi
 1fa:	5f                   	pop    %edi
 1fb:	70 61                	jo     25e <_init-0x80484d6>
 1fd:	64 32 00             	xor    %fs:(%eax),%al
 200:	5f                   	pop    %edi
 201:	5f                   	pop    %edi
 202:	70 61                	jo     265 <_init-0x80484cf>
 204:	64 33 00             	xor    %fs:(%eax),%eax
 207:	5f                   	pop    %edi
 208:	5f                   	pop    %edi
 209:	70 61                	jo     26c <_init-0x80484c8>
 20b:	64 34 00             	fs xor $0x0,%al
 20e:	5f                   	pop    %edi
 20f:	5f                   	pop    %edi
 210:	70 61                	jo     273 <_init-0x80484c1>
 212:	64 35 00 65 78 69    	fs xor $0x69786500,%eax
 218:	74 00                	je     21a <_init-0x804851a>
 21a:	70 68                	jo     284 <_init-0x80484b0>
 21c:	61                   	popa   
 21d:	73 65                	jae    284 <_init-0x80484b0>
 21f:	5f                   	pop    %edi
 220:	32 00                	xor    (%eax),%al
 222:	70 68                	jo     28c <_init-0x80484a8>
 224:	61                   	popa   
 225:	73 65                	jae    28c <_init-0x80484a8>
 227:	5f                   	pop    %edi
 228:	33 00                	xor    (%eax),%eax
 22a:	5f                   	pop    %edi
 22b:	49                   	dec    %ecx
 22c:	4f                   	dec    %edi
 22d:	5f                   	pop    %edi
 22e:	77 72                	ja     2a2 <_init-0x8048492>
 230:	69 74 65 5f 65 6e 64 	imul   $0x646e65,0x5f(%ebp,%eiz,2),%esi
 237:	00 
 238:	70 68                	jo     2a2 <_init-0x8048492>
 23a:	61                   	popa   
 23b:	73 65                	jae    2a2 <_init-0x8048492>
 23d:	5f                   	pop    %edi
 23e:	35 00 5f 5f 6f       	xor    $0x6f5f5f00,%eax
 243:	66 66 36 34 5f       	data16 data16 ss xor $0x5f,%al
 248:	74 00                	je     24a <_init-0x80484ea>
 24a:	5f                   	pop    %edi
 24b:	5f                   	pop    %edi
 24c:	6f                   	outsl  %ds:(%esi),(%dx)
 24d:	66 66 5f             	data16 pop %di
 250:	74 00                	je     252 <_init-0x80484e2>
 252:	5f                   	pop    %edi
 253:	63 68 61             	arpl   %bp,0x61(%eax)
 256:	69 6e 00 69 6e 69 74 	imul   $0x74696e69,0x0(%esi),%ebp
 25d:	69 61 6c 69 7a 65 5f 	imul   $0x5f657a69,0x6c(%ecx),%esp
 264:	62 6f 6d             	bound  %ebp,0x6d(%edi)
 267:	62 00                	bound  %eax,(%eax)
 269:	5f                   	pop    %edi
 26a:	49                   	dec    %ecx
 26b:	4f                   	dec    %edi
 26c:	5f                   	pop    %edi
 26d:	62 61 63             	bound  %esp,0x63(%ecx)
 270:	6b 75 70 5f          	imul   $0x5f,0x70(%ebp),%esi
 274:	62 61 73             	bound  %esp,0x73(%ecx)
 277:	65 00 73 74          	add    %dh,%gs:0x74(%ebx)
 27b:	64 69 6e 00 5f 66 6c 	imul   $0x616c665f,%fs:0x0(%esi),%ebp
 282:	61 
 283:	67 73 32             	addr16 jae 2b8 <_init-0x804847c>
 286:	00 5f 6d             	add    %bl,0x6d(%edi)
 289:	6f                   	outsl  %ds:(%esi),(%dx)
 28a:	64 65 00 5f 49       	fs add %bl,%gs:0x49(%edi)
 28f:	4f                   	dec    %edi
 290:	5f                   	pop    %edi
 291:	72 65                	jb     2f8 <_init-0x804843c>
 293:	61                   	popa   
 294:	64 5f                	fs pop %edi
 296:	62 61 73             	bound  %esp,0x73(%ecx)
 299:	65 00 5f 76          	add    %bl,%gs:0x76(%edi)
 29d:	74 61                	je     300 <_init-0x8048434>
 29f:	62 6c 65 5f          	bound  %ebp,0x5f(%ebp,%eiz,2)
 2a3:	6f                   	outsl  %ds:(%esi),(%dx)
 2a4:	66 66 73 65          	data16 data16 jae 30d <_init-0x8048427>
 2a8:	74 00                	je     2aa <_init-0x804848a>
 2aa:	5f                   	pop    %edi
 2ab:	49                   	dec    %ecx
 2ac:	4f                   	dec    %edi
 2ad:	5f                   	pop    %edi
 2ae:	73 61                	jae    311 <_init-0x8048423>
 2b0:	76 65                	jbe    317 <_init-0x804841d>
 2b2:	5f                   	pop    %edi
 2b3:	62 61 73             	bound  %esp,0x73(%ecx)
 2b6:	65 00 5f 66          	add    %bl,%gs:0x66(%edi)
 2ba:	69 6c 65 6e 6f 00 70 	imul   $0x6870006f,0x6e(%ebp,%eiz,2),%ebp
 2c1:	68 
 2c2:	61                   	popa   
 2c3:	73 65                	jae    32a <_init-0x804840a>
 2c5:	5f                   	pop    %edi
 2c6:	36 00 5f 66          	add    %bl,%ss:0x66(%edi)
 2ca:	6c                   	insb   (%dx),%es:(%edi)
 2cb:	61                   	popa   
 2cc:	67 73 00             	addr16 jae 2cf <_init-0x8048465>
 2cf:	73 74                	jae    345 <_init-0x80483ef>
 2d1:	64 6f                	outsl  %fs:(%esi),(%dx)
 2d3:	75 74                	jne    349 <_init-0x80483eb>
 2d5:	00 5f 49             	add    %bl,0x49(%edi)
 2d8:	4f                   	dec    %edi
 2d9:	5f                   	pop    %edi
 2da:	6c                   	insb   (%dx),%es:(%edi)
 2db:	6f                   	outsl  %ds:(%esi),(%dx)
 2dc:	63 6b 5f             	arpl   %bp,0x5f(%ebx)
 2df:	74 00                	je     2e1 <_init-0x8048453>

Disassembly of section .debug_loc:

00000000 <.debug_loc>:
   0:	00 00                	add    %al,(%eax)
   2:	00 00                	add    %al,(%eax)
   4:	25 00 00 00 02       	and    $0x2000000,%eax
   9:	00 91 00 25 00 00    	add    %dl,0x2500(%ecx)
   f:	00 39                	add    %bh,(%ecx)
  11:	00 00                	add    %al,(%eax)
  13:	00 01                	add    %al,(%ecx)
  15:	00 50 39             	add    %dl,0x39(%eax)
  18:	00 00                	add    %al,(%eax)
  1a:	00 64 00 00          	add    %ah,0x0(%eax,%eax,1)
  1e:	00 02                	add    %al,(%edx)
  20:	00 91 00 64 00 00    	add    %dl,0x6400(%ecx)
  26:	00 72 00             	add    %dh,0x0(%edx)
  29:	00 00                	add    %al,(%eax)
  2b:	01 00                	add    %eax,(%eax)
  2d:	50                   	push   %eax
  2e:	72 00                	jb     30 <_init-0x8048704>
  30:	00 00                	add    %al,(%eax)
  32:	57                   	push   %edi
  33:	01 00                	add    %eax,(%eax)
  35:	00 02                	add    %al,(%edx)
  37:	00 91 00 00 00 00    	add    %dl,0x0(%ecx)
  3d:	00 00                	add    %al,(%eax)
  3f:	00 00                	add    %al,(%eax)
  41:	00 a2 00 00 00 a9    	add    %ah,-0x57000000(%edx)
  47:	00 00                	add    %al,(%eax)
  49:	00 01                	add    %al,(%ecx)
  4b:	00 50 c0             	add    %dl,-0x40(%eax)
  4e:	00 00                	add    %al,(%eax)
  50:	00 c7                	add    %al,%bh
  52:	00 00                	add    %al,(%eax)
  54:	00 01                	add    %al,(%ecx)
  56:	00 50 de             	add    %dl,-0x22(%eax)
  59:	00 00                	add    %al,(%eax)
  5b:	00 e5                	add    %ah,%ch
  5d:	00 00                	add    %al,(%eax)
  5f:	00 01                	add    %al,(%ecx)
  61:	00 50 fc             	add    %dl,-0x4(%eax)
  64:	00 00                	add    %al,(%eax)
  66:	00 03                	add    %al,(%ebx)
  68:	01 00                	add    %eax,(%eax)
  6a:	00 01                	add    %al,(%ecx)
  6c:	00 50 1a             	add    %dl,0x1a(%eax)
  6f:	01 00                	add    %eax,(%eax)
  71:	00 21                	add    %ah,(%ecx)
  73:	01 00                	add    %eax,(%eax)
  75:	00 01                	add    %al,(%ecx)
  77:	00 50 38             	add    %dl,0x38(%eax)
  7a:	01 00                	add    %eax,(%eax)
  7c:	00 3f                	add    %bh,(%edi)
  7e:	01 00                	add    %eax,(%eax)
  80:	00 01                	add    %al,(%ecx)
  82:	00 50 00             	add    %dl,0x0(%eax)
  85:	00 00                	add    %al,(%eax)
  87:	00 00                	add    %al,(%eax)
  89:	00 00                	add    %al,(%eax)
	...
