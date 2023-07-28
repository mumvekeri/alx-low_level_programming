#include "lists.h"

/**
 * add_node_end - adds a new node at the end of thelist
 * @head: list_t list
 * @str: string to be printed
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *link;
	list_t *data = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	link = malloc(sizeof(list_t));
	if (!link)
		return (NULL);

	link->str = strdup(str);
	link->len = len;
	link->next = NULL;

	if (*head == NULL)
	{
		*head = link;
		return (link);
	}

	while (data->next)
		data = data->next;

	data->next = link;

	return (link);
}
