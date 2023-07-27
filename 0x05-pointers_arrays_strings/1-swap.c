#include "main.h"
#include <stdio.h>
/**
* swap_int - function that swaps the values of two integers.
* @a: int to swap
* @b: int to swap
*/
void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
