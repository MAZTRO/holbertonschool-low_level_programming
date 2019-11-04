#include "lists.h"

/**
 * *add_nodeint_end - writes the character c to stdout
 * @head: The character to print
 * @n: name
 * Return: list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *cpy;
	listint_t *little_node;

	little_node = malloc(sizeof(listint_t));
	if (little_node == NULL)
	{
		return (NULL);
	}

	little_node->n = n;
	little_node->next = NULL;

	if (*head == NULL)
	{
		*head = little_node;
		return (little_node);
	}
	cpy = *head;

	while (cpy->next != NULL)
	{
		cpy = cpy->next;
	}

	cpy->next = little_node;
	return (little_node);
}
