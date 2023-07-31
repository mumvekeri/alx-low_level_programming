#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: linked list of listint_t to print
 * Return: number of elements in a linked
 */
size_t listint_len(const listint_t *h)
{
	int x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
