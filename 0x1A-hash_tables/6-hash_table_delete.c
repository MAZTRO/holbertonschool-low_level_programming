#include "hash_tables.h"

/**
 * free_list - writes the character c to stdout
 * @head: The character to print
 * Return: list
 */

void free_list(hash_node_t *head)
{
	hash_node_t *cpy = NULL;

	for (; head != NULL;)
	{
		cpy = head;
		head = head->next;
		free(cpy);
	}
	free(head);
}

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: is the hash table
 * Return: Nothing.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int count = 0;

	if (ht != NULL)
	{
		while (count < ht->size)
		{
			tmp = ht->array[count];
			if (tmp != NULL)
			{
				free_list(tmp);
				tmp = NULL;
			}
			count++;
		}
		free(ht->array);
		free(ht);
	}
}
