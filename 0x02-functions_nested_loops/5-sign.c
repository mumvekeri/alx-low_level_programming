#include <stdio.h>
/**
* print_sign - function that prints the sign of a number
* Description n:Number whose sign is to be checked
* Return: 1 if n is greater than 0, 0 if n equals 1, -1 if n is less than 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
			return (1);
	}
	else if (n < 0)
	{
		putchar('-');
			return (-1);
	}
	else
	{
		putchar('0');
			return (0);
	}
}
