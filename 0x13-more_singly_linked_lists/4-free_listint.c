#include "lists.h"

/**
 * free_listint - writes the character c to stdout
 * @head: The character to print
 * Return: list
 */

void free_listint(listint_t *head)
{
	listint_t *cpy = NULL;

	for (; head != NULL;)
	{
		cpy = head;
		head = head->next;
		free(cpy);
	}
	free(head);
}
