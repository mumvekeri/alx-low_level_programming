#include <stdio.h>
#include "main.h"
/**
* print_square - prints a square, followed by a new line
* @size: size of the square
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
