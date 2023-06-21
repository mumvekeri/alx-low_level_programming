#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number
 * @n: number that computes last digit.
 * Return: last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);

}
