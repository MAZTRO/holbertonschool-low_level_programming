#include "lists.h"

/**
 * get_node_at_index - get the node expected listint_t list
 * @head: pointer to head of list
 * @index: Place of a node to return
 * Return: The node.
 */

dlistint_t *get_node_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp, *current;
	size_t count = 0, len = 0;

	temp = head;
	current = head;
	if (head != NULL && head->prev == NULL)
	{
		while (current != NULL)
		{
			current = current->next;
			len++;
		}
	}
	if (head != NULL)
	{

		while (temp->next != NULL && len >= index)
		{
			if (index == count)
			{
				return (temp);
			}
			temp = temp->next;
			count++;
		}
	}
	return (NULL);
}

/**
 * sinsert_dnodeint_at_index - inserts a new node to the listint_t list
 * @h: pointer to head of list
 * @idx: Position that we need.
 * @n: Value of the new NODE.
 * Return: Address of the new NODE.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new = NULL, *temp;
	unsigned int count = 0;

	temp = *h;
	while (temp->next != NULL)
	{temp = temp->next, count++; }
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
	}
	else if (count == idx)
	{
		new = add_dnodeint_end(h, n);
	}
	else if (idx < count)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
		{return (NULL); }
		current = get_node_at_index(*h, idx);
		new->n = n;
		current->prev->next = new;
		new->prev = current->prev;
		new->next = current;
		return (new);
	}
	return (NULL);
}
