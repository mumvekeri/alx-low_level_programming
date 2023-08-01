#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: linked list of listint_t to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int x = 0;
	while (h)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}
	return (x);
}
