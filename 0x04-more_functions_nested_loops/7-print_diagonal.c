#include <stdio.h>
#include "main.h"
/**
* print_diagonal - draws a straight line in the terminal
* @n: number of times the character should be printed
*/
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int b;
		int c;

		for (b = 1; b < n; b++)
		{
			for (c = 0; c < n; c++)
			{
				if (c == b)
					_putchar('\\');
				else if (c < b)
					_putchar(' ');
			}
		_putchar('\n');
		}
	}
}

