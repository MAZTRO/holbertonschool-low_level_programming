#include "lists.h"

/**
 * sum_dlistint - add all (n) value of the  listint_t list
 * @head: pointer to head of list
 * Return: total add.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int total = 0;

	if (head != NULL)
	{
		current = head;
		while (current != NULL)
		{
			total += current->n;
			current = current->next;
		}
		return (total);
	}
	return (total);
}
