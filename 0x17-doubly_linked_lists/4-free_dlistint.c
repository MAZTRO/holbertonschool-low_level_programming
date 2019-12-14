#include "lists.h"

/**
 * free_dlistint - Free a listint_t list
 * @head: pointer to head of list
 * Return: Nothing.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
