#include "lists.h"

/**
 * get_node_at_index - get the node expected listint_t list
 * @head: pointer to head of list
 * @index: Place of a node to return
 * Return: The node.
 */

dlistint_t *get_node_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	temp = head;
	if (head == NULL)
	{return (NULL); }

	while (count <= index)
	{
		if (count == index)
		{
			return (temp);
		}
		if (temp->next == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
		count++;
	}
	return (NULL);
}

/**
 * insert_dnodeint_at_index - inserts a new node to the listint_t list
 * @h: pointer to head of list
 * @idx: Position that we need.
 * @n: Value of the new NODE.
 * Return: Address of the new NODE.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *temp = NULL;
	unsigned int count = 0;

	if (h == NULL)
	{return (NULL); }
	temp = *h;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	else if (count == idx)
	{
		return (add_dnodeint_end(h, n));
	}
	else
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
		{return (NULL); }
		while (temp != NULL)
		{
			if (idx == count)
			{
				new->n = n;
				new->next = temp;
				new->prev = temp->prev;
				temp->prev->next = new;
				temp->prev = new;
				return (new);
			}
			temp = temp->next;
			count++;
		}
	}
	return (NULL);
}
