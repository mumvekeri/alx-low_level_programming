#include "lists.h"
/**
 * *add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer of the first node
 * @n: data to insert in the new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newdata;
	listint_t *tmp = *head;

	newdata = malloc(sizeof(listint_t));

	if (!newdata)
		return (NULL);

	newdata->n = n;
	newdata->next = NULL;

	if (*head == NULL)
	{
		*head = newdata;
		return (newdata);
	}
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = newdata;

	return (tmp->next);
}
