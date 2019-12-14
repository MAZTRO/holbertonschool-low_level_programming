#include "lists.h"

/**
 * print_dlistint - prints all elements of a listint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	unsigned int n; /* number of nodes */

	current = h;
	n = 0;
	if (h != NULL && h->prev == NULL)
	{
		while (current != NULL)
		{
			printf("%i\n", current->n);
			current = current->next;
			n++;
		}
	}
	return (n);
}
