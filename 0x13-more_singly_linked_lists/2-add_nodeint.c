#include "lists.h"
/**
 * *add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer of the first node
 * @n: data to insert in the new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newdata;
	newdata = malloc(sizeof(listint_t));

	if (!newdata)
		return (NULL);

	newdata->n = n;
	newdata->next = *head;
	*head = newdata;

	return (newdata);
}
