#include "lists.h"

/**
 * add_dnodeint_end - Add a node at the end of a listint_t list
 * @head: pointer to head of list
 * @n: Value of the node
 * Return: Adress of node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{return (NULL); }

	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		new->n = n;
		new->next = NULL;
		new->prev = current;
		current->next = new;
		return (new);
	}
}
