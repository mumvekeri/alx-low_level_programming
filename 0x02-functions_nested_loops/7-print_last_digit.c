#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @d: number that computes last digit.
 * Return: last digit
 */
int print_last_digit(int d)
{
	int lastDigit;

	lastDigit = d % 10;
	if (lastDigit < 0)
	{
		lastDigit = lastDigit * -1;
	}
	putchar(lastDigit + '0');
	return (lastDigit);
}
