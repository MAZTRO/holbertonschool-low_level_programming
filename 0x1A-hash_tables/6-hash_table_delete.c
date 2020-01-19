#include "hash_tables.h"

/**
 * free_list - writes the character c to stdout
 * @head: The character to print
 * Return: list
 */

void free_list(hash_node_t *head)
{
	hash_node_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head  = tmp;
	}
}

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: is the hash table
 * Return: Nothing.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *cpy, *tmp;
	unsigned long int count = 0;

	if (ht != NULL)
	{
		while (count < ht->size)
		{
			cpy = ht->array[count];
			while (cpy)
			{
				tmp = cpy;
				cpy = cpy->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
			}
			count++;
		}
		free(ht->array);
		free(ht);
	}
}
