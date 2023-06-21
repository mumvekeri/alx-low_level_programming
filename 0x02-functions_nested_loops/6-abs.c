#include <stdio.h>
/**
* _abs - computes the absolute value of an integer
* @a: the integer to compute its absolute value
* Return: return the abs value or 0
*/
int _abs(int a)
{
	int b = a;
	int abs_value;

	if (b < 0)
	{
		b = b * (-1);
	}
	abs_value = b;
	return (abs_value);
}
