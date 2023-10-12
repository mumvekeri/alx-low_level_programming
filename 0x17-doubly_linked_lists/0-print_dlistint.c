#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of dlistint_t list
 *
 * @h: pointer
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int counts;

	counts = 0;

	if (h == NULL)
		return (counts);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counts++;
		h = h->next;
	}

	return (counts);
}
