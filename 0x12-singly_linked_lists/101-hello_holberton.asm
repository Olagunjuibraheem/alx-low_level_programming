	global   main
	  extern    printf
main:
	  mov   edi, hiformat
	  xor   eax, eax
	  call  printf
	  mov   eax, 0
	  ret
hiformat: db `Hello, Holberton\n`,0

