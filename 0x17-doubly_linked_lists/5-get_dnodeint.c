#include "lists.h"

/**
 * get_dnodeint_at_index - get the node expected listint_t list
 * @head: pointer to head of list
 * @index: Place of a node to return
 * Return: The node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp, *current;
	size_t count = 0, len = 0;

	if (head == NULL)
	{return (NULL); }

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
	while (temp->next != NULL)
	{
		if (index == count)
		{
			return (temp);
		}
		temp = temp->next;
		count++;
	}
	return (temp);
}
