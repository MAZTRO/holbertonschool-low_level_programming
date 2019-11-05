#include "lists.h"

/**
 * insert_nodeint_at_index - writes the character c to stdout
 * @head: The character to print
 * @idx: lol
 * @n: Lol
 * Return: list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev_node;
	listint_t *new_node;
	listint_t *next_node;
	unsigned int count = 0;

	if (*head != NULL && idx >= 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		(*new_node).n = n;

		if (idx == 0)
		{
			new_node->next = *head;
			*head = new_node;
		}

		prev_node = *head;

		while (prev_node != NULL)
		{
			if ((count + 1) == idx)
			{
				next_node = prev_node->next;
				prev_node->next = new_node;
				(*new_node).next = next_node;
				return (new_node);
			}
			prev_node = prev_node->next;
			count++;
		}
	}
	return (NULL);
}
