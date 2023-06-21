#include <stdio.h>
/**
* print_sign - function that prints the sign of a number
* @n: The input number as an integer
* Return: 1 if n is greater than zero, 0 is zero, -1 if n is less than 0
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
	putchar('\n');
}
