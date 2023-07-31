#include "lists.h"
/**
 * *add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the first element
 * @n: new data to insert
 * Return: the address of the new element, or NULL if it failed.
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
		(*head = newdata);
		return (newdata);
	}
	else
	{

	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp = newdata;
	}
	return (newdata);
}
