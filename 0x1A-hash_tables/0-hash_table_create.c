#include "hash_tables.h"

/**
 * hash_table_create - Create the table.
 * @size: of the table.
 * Return: new table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;
	hash_node_t **new_array;
	unsigned long int count;

	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
	{return (NULL); }

	new_array = malloc(sizeof(hash_node_t *) * size);
	if (new_array == NULL)
	{
		free(new_ht);
		return (NULL);
	}
	for (count = 0; count < size; count++)
	{
		new_array[count] = NULL;
	}
	new_ht->size = size;
	new_ht->array = new_array;
	return (new_ht);
}
