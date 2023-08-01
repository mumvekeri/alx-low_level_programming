#include "lists.h"
/**
 * *insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the first element
 * @idx: index of the list.
 * @n: integer
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newdata;
	listint_t *tmp = *head;
	unsigned int a;

	if (head == NULL)
		return (NULL);

	newdata = malloc(sizeof(listint_t));
	if (newdata == NULL)
		return (NULL);

	newdata->n = n;

	if (idx == 0)
	{
		newdata->next = *head;
		*head = newdata;
	}
	for (a = 0; tmp && a < idx; a++)
	{
		if (a == idx - 1)
		{
			newdata->next = tmp->next;
			tmp->next = newdata;
			return (newdata);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}
