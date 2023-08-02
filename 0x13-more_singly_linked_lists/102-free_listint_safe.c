#include "lists.h"
/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: pointer to the first element
 * Return:  the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *tmp;
	size_t c = 0;

	current = *h;

	while (current)
	{
		tmp = current;
		current = current->next;

		if ((void *)tmp <= (void *)current)
		{
			*h = NULL;
			break;

		}
		free(tmp);
		c++;
	}
	*h = NULL;
	return (c);
}



