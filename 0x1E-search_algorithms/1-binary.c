#include "search_algos.h"

/**
 * binary_search - Performs binary search.
 * @array: The integer array.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Return: The index found or -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t idx = 0;
	int *subarray_start = array;

	if (!array)
		return (-1);

	while (size)
	{
		for (idx = 0, printf("Searching in array: "); idx < size; idx++)
			printf("%d%s", subarray_start[idx], idx + 1 == size ? "\n" : ", ");
		idx = (size - 1) / 2;
		
		if (subarray_start[idx] == value)
			return ((subarray_start - array) + idx);
		else if (subarray_start[idx] > value)
			size = idx;
		else
		{
			subarray_start += (idx + 1);
			size -= (idx + 1);
		}
	}
	return (-1);
}

