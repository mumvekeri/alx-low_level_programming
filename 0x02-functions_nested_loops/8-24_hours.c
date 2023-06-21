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
	int c;
	int d;

	for (a = 0; a < 2; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					if (a == 2 && b > 3)
					{
						break;
					}
					putchar(a + '0');
					putchar(b + '0');
					putchar(':');
					putchar(c + '0');
					putchar(d + '0');
					putchar('\n');
				}
			}
		}
	}
}

