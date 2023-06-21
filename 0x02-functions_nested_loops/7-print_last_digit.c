#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @d: number that computes last digit.
 * Return: last digit
 */
int print_last_digit(int d)
{
	int l;

	l = d % 18;
	if (l < 0)
	{
		putchar(-l + 48);
		return (-l);
	}
	else
	{
		putchar(l + 48);
		return (l)
}
