#include <stdio.h>
/**
* main - Entry point
* Return: 0 (Success)
*/
int main(void)
{
char cha;
int num;
for (num = 0; num <= 9; num++)
putchar(num);
for (cha = 'a'; cha <= 'f'; cha++)
putchar(cha);
putchar('\n');
return (0);
}

