#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: Returns the value associated with the element
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *cpy_head;

	if ((strcmp(key, "\0") == 0) || (ht == NULL) || (key == NULL))
	{return (NULL); }

	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx] == NULL)
	{return (NULL); }
	cpy_head = ht->array[idx];

	while (cpy_head)
	{
		if (strcmp(key, cpy_head->key) == 0)
		{
			return (cpy_head->value);
		}
		cpy_head = cpy_head->next;
	}
	return (NULL);
}
