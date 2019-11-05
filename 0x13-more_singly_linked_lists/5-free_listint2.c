#include "lists.h"

/**
 * free_listint2 - writes the character c to stdout
 * @head: The character to print
 * Return: list
 */

void free_listint2(listint_t **head)
{
	if (*head != NULL || head != NULL)
	{
		listint_t *cpy = NULL;

		for (; *head != NULL;)
		{
			cpy = *head;
			*head = (*head)->next;
			free(cpy);
		}
		free(*head);
		*head = NULL;
	}
}
