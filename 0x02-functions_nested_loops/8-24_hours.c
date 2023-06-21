#include <stdio.h>
#include "main.h"
/**
 * jack_bauer -  prints every minute of the day
 * Return: 0 (Success)
 */
void jack_bauer(void)
{
	int a;
	int b;

	a = 0;

	while (a < 24)
	{
		b = 0;
		while (b < 60)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(':');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			putchar('\n');
			b++;
		}
		a++;
	}
}
