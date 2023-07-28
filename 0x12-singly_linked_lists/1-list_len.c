#include "lists.h"

/**
 *  * list_len - returns the number of elements in a list
 *   * @h: the list_t list
 * Return: number of elements in the list h.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
