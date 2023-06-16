#include <stdio.h>
/**
* main - Entry point
* Return: 0 (Success)
*/
int main(void)
{
char cha;
for (cha = 'a'; cha <= 'z'; cha++)
{	
if (cha != 'q' && cha != 'e')
putchar(cha);
}
putchar('\n');
return (0);
}

