#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 * Return:  the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
	return (0);

	unsigned int result = 0;

	while (*b)
	{
	if (*b != '0' && *b != '1')
		return (0);

	result <<= 1;
	result += (*b - '0');
	b++;
	}
	return (result);
}

