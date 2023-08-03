#include "main.h"
/**
 * flip_bits -  a function that returns the number of bits
 * @n: number 1
 * @m: number 2
 * Return: the number of bit to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	int x;
	int y = 0;
	unsigned long int c;

	for (x = 63; x >= 0; x--)
	{
		c = result >> x;
		if (c & 1)
			y++;
	}

	return (y);
}
