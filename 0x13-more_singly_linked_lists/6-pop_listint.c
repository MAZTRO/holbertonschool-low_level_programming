#include "lists.h"

/**
 * free_listint2 - writes the character c to stdout
 * @head: The character to print
 * Return: list
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp_head;
	listint_t *new_head;
	int value = 0;

	tmp_head = *head;
	new_head = (*head)->next;
	value = (*head)->n;
	*head = new_head;

	free(tmp_head);
	return (value);
}
