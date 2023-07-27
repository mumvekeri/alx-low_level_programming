#include <stdio.h>
#include "main.h"
/**
* print_line - draws a straight line in the terminal
* @n: number of times the character should be printed
*/
void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int b;

		for (b = 1; b <= n; b++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
