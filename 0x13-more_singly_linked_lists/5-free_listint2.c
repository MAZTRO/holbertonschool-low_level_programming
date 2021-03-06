#include "lists.h"

/**
 * free_listint2 - writes the character c to stdout
 * @head: The character to print
 * Return: list
 */

void free_listint2(listint_t **head)
{
	listint_t *cpy = NULL;

	if (head == NULL)
	{
		return;
	}

	cpy = *head;

	while (*head != NULL)
	{
		cpy = (*cpy).next;
		free(*head);
		*head = cpy;
	}
	head = NULL;
}
