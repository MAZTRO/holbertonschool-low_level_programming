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
 * delete_dnodeint_at_index - delete the node expected listint_t list
 * @head: pointer to head of list
 * @index: Place of a node to return
 * Return: The node.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *current;
	unsigned int count = 0;

	if (*head == NULL)
	{return (-1); }
	temp = *head;
	current = *head;
	while (temp->next != NULL)
	{temp = temp->next, count++; }
	if (index == 0 && count > 0)
	{
		current = current->next;
		current->prev = NULL;
		(*head)->next = NULL;
		free(*head);
		*head = current;
	}
	else if (count == index)
	{
		if ((**head).next == NULL && (**head).prev == NULL)
		{
			free(*head), *head = NULL;
			return (1);
		}
		current = temp;
		current = current->prev;
		current->next = NULL;
		temp->prev = NULL;
		free(temp), temp = current;
	}
	else if (index < count)
	{
		current = get_node_at_index(*head, index);
		temp = current->prev;
		current = current->next;
		free(temp->next), temp->next = current;
		current->prev = temp;
	}
	return (1);
}
