#include "lists.h"

/**
 * *add_nodeint - writes the character c to stdout
 * @head: The character to print
 * @n: number
 * Return: list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *cpy;

	cpy = malloc(sizeof(listint_t));
	if (cpy == NULL)
	{
		return (NULL);
	}
	cpy->n = n;
	cpy->next = *head;
	*head = cpy;

	return (cpy);
}
