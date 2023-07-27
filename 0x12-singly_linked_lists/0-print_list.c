#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the list_t list to print
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t cat = 0;

	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str, "[0] (nil)\n"));
		h = h->next;
		cat++;
	}

	return (cat);
}
