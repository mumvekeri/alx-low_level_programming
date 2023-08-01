#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: pointer to the first element
 * Return:  the head node’s data (n), or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	int x;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);

	x  = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (x);
}
