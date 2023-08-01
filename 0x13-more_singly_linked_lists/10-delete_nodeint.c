#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: pointer of the first element
 * @index: the index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (head == NULL || *head == NULL)
		return (-1);

	unsigned int a = 0;
	listint_t *previous = NULL;
	listint_t *tmp = *head;

	while (tmp != NULL)
	{
		if (a == index)
		{
			if (previous == NULL)
			{
				*head = tmp->next;
			}
			else
			{
				previous->next = tmp->next;
			}
			free(tmp);
			return (1);
		}
		previous = tmp;
		tmp = tmp->next;
		a++;
	}
	return (-1);
}

