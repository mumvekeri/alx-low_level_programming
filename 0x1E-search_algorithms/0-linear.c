#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: input array (assumed to be an array of integers)
 * @size: size of the array (number of elements)
 * @value: value to search for
 * Return: index of the first occurrence of the value in the array,
 *         -1 if not found, or -1 if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
		printf("Value checked array[%u] = [%d]\n", i, array[i]);

		if (value == array[i])
			return (i);
	}
	return (-1);
}
