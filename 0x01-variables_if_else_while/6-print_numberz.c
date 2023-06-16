#include <stdio.h>
/**
* main - Entry point
* Return: 0 (Success)
*/
int main(void)
{
int num;
for (num = 0; num <= 9; num++)
putchar((num % 9), +'0')
putchar("\n");
return (0);
}
