#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - writes the character c to stdout
 * @h: The character to print
 * Return: On success 1.
 */

size_t list_len(const list_t *h)
{
	size_t weight = 0;

	for (; h != NULL; weight++)
	{
		h = h->next;
	}
	return (weight);
}