#include <stdio.h>

/**
* main - A program that prints all possible combinations of two-digit numbers.
* Return: 0 (Success)
*/
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (a > b)
				continue;
			putchar(a + '0');
			putchar(b + '0');

			if ((a != 8) || (b != 9))
				putchar(' ');
		}
		for (c = 0; c <= 9; c++)
		{
			for (d = 0; d <= 9; d++)
			{
				if (c > d)
					continue;
				putchar(c + '0');
				putchar(d + '0');

				if ((c != 8) || (d != 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
