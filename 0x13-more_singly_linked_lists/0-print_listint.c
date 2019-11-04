#include "lists.h"

/**
 * print_listint - writes the character c to stdout
 * @h: The character to print
 * Return: On success 1.
 */

size_t print_listint(const listint_t *h)
{
	size_t numbers_of_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numbers_of_nodes++;
	}
	return (numbers_of_nodes);
}
