#include <stdio.h>
#include "main.h"
/**
* print_times_table - prints the n times table
* @n: number of the times table
*/
void print_times_table(int n)
{
	int t;
	int u;
	int v;

	if (n >= 0 && n <= 15)
	{
		for (t = 0; t <= n; t++)
		{
			for (u = 0; u <= n; u++)
			{
				v = t * u;
				if (u == 0)
				{
					putchar(v + '0');
				}
				else if (v < 10 && v != 0)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
					putchar(' ');
					putchar(v + '0');
				}
				else if (v >= 10 && v < 100)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
					putchar((v / 10) + '0');
					putchar((v % 10) + '0');
				}
				else if (v >= 100)
				{
					putchar(',');
					putchar(' ');
					putchar((v / 100) + '0');
					putchar(((v / 10) % 10) + '0');
				}
			}
			putchar('\n');
		}
	}
}

