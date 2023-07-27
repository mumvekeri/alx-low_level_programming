
bal   main
extern    printf
main:
mov   rdi, format
xor   rax, rax
call  printf
mov   rax, 50
ret
format: db `Hello, Holberton\n`,0
