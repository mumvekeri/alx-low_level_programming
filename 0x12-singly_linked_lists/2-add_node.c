#include "lists.h"

/**
 * add_node - adds a new node at the beginning of the list
 * @head: the list_t list
 * @str: string to be printed
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *link;
	unsigned int len = 0;

	while (str[len])
		len++;

	link = malloc(sizeof(list_t));
	if (!link)
		return (NULL);

	link->str = strdup(str);
	link->len = len;
	link->next = (*head);
	(*head) = link;

	return (*head);
}
