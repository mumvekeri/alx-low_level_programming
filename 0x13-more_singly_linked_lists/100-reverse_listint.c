#include "lists.h"
/**
 * *reverse_listint - a function that reverses a listint_t linked list.
 * @head: pointer to the first element
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *data = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = data;
		data = *head;
		*head = next;

	}
	*head = data;
	return (*head);
}
