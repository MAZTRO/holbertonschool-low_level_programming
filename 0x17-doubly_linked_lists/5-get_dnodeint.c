#include "lists.h"

/**
 * get_dnodeint_at_index - get the node expected listint_t list
 * @head: pointer to head of list
 * @index: Place of a node to return
 * Return: The node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
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
