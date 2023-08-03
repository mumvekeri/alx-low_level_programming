#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: binary number to be printed
 */
void print_binary(unsigned long int n)
{
	unsigned long int x;
	int y;
	int a = 0;

	for (y = 63; y > 0; y--)
	{
		x = n >> y;

		if (x & 1)
		{
			putchar('1');
			a++;
		}
		else if (a)
			putchar('0');
	}
	if (!a)
		putchar('0');
}
