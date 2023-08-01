#include "lists.h"
/**
 * *get_nodeint_at_index - a function that returns the nth node of a listint_t
 * @head: pointer to the first element
 * @index: the index of the node, starting at 0
 * Return: the nth node of a linked list, NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int a = 0;

	while (tmp != NULL)
	{
		if (a == index)
		{
			return (tmp);
		}
	tmp = tmp->next;
	a++;
	}
	return (NULL);
}
