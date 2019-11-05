#include "lists.h"

/**
 * get_nodeint_at_index - writes the character c to stdout
 * @head: The character to print
 * Return: list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *cpy;

	if (head != NULL)
	{
		cpy = head;

		while (cpy != NULL)
		{
			if (count == index)
			{
				return (cpy);
			}
			cpy = (*cpy).next;
			count++;
		}
	}
	return (NULL);
}
