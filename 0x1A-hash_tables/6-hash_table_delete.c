#include "hash_tables.h"

/**
 * hash_table_delete - Function that frees and deletes a hash
 * @ht: Table to be freed and deleted
 * Return: Void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t **array = NULL, *temp = NULL, *curr = NULL;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	array = ht->array;

	while (i < ht->size)
	{
		curr = array[i];
		while (curr != NULL)
		{
			temp = curr->next;
			free(curr->key);
			free(curr->value);
			free(curr);
			curr = temp;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
