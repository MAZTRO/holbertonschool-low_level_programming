#include "hash_tables.h"

/**
 * add_node- function that adds a node at the index of array.
 * @head: is the index of a array
 * @key: is the key.
 * @value: is the value associated with the key.
 * Return: Head if it succeeded, Null otherwise
 */

hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{return (NULL); }

	if (*head == NULL)
	{
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = NULL;
		*head = new_node;
		return (*head);
	}
	else
	{
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	return (NULL);
}

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value to.
 * @key: is the key.
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *cpy_head, *tmp;

	if ((strcmp(key, "\0") == 0) || (ht == NULL) || (key == NULL))
	{return (0); }

	idx = key_index((unsigned char *)key, ht->size);
	cpy_head = ht->array[idx];

	tmp = add_node(&cpy_head, key, value);
	if (tmp == NULL)
	{return (0); }

	ht->array[idx] = tmp;

	return (1);
}
