#include <stdio.h>
#include "main.h"
/**
* print_square - draws a straight line in the terminal
* @size: number of times the character should be printed
*/
void print_square(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int b;
		int c;

		for (b = 0; b < size; b++)
		{
			for (b = 0; b < size; b++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
