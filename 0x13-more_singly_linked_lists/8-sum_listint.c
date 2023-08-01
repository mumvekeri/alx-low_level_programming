#include "lists.h"
/**
 * sum_listint -  a function that returns the sum of all the data (n)
 * @head: pointer to the first element
 * Return:  the sum of all the data (n), or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int a = 0;

	while (tmp != NULL)
	{
		a += tmp->n;
		tmp = tmp->next;
	}
	return (a);
}
