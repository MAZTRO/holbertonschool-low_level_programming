#include "lists.h"

/**
 * delete_nodeint_at_index - writes the character c to stdout
 * @head: The character to print
 * @index: lol
 * Return: list
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node;
	listint_t *next_node;
	unsigned int count = 0;

	if (*head != NULL)
	{
		prev_node = *head;

		if (index == 0)
		{
			*head = (**head).next;
			free(prev_node);
			return (1);
		}
		else
		{
			while (prev_node != NULL && index >= count)
			{
				if (count == (index - 1))
				{
					next_node = (*prev_node).next;
					(*prev_node).next = (*next_node).next;
					free(next_node);
					return (1);
				}
				prev_node = prev_node->next;
				count++;
			}
		}
	}
	return (-1);
}
