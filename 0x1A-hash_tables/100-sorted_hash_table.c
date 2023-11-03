#include "hash_tables.h"

/**
 * shash_table_create - Create the sorted hashtable
 * @size: Size of the table to be created
 * Return: The sorted hashtable
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	(void)size;
	return (NULL);
}

/**
 * shash_table_set - Sets a node in the table
 * @ht: The hashtable
 * @key: The key to be hashed
 * @value: The value to be saved
 * Return: 1 or 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	(void)ht;
	(void)key;
	(void)value;

	return (0);
}

/**
 * shash_table_get - Get a value from the table
 * @ht: The hashtable
 * @key: The key to be searched
 * Return: The found key or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	(void)ht;
	(void)key;

	return (NULL);
}

/**
 * shash_table_print - Prints the hashtable
 * @ht: The Hashtable
 * Return: Void
 */
void shash_table_print(const shash_table_t *ht)
{
	(void)ht;
}

/**
 * shash_table_print_rev - Print the table in reverse
 * @ht: The table to be printed
 * Return: Void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	(void)ht;
}

/**
 * shash_table_delete - Deletes the hashtable
 * @ht: Table to be printed
 */
void shash_table_delete(shash_table_t *ht)
{
	(void)ht;
}
