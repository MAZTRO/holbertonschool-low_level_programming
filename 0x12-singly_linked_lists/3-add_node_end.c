#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_node_end - writes the character c to stdout
 * @head: The character to print
 * @str: name
 * Return: list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *cpy;
	list_t *little_node;
	int count;

	little_node = malloc(sizeof(list_t));
	if (little_node == NULL)
	{
		return (NULL);
	}

	little_node->str = strdup(str);

	for (count = 0; str[count] != '\0'; count++)
	;

	little_node->len = count;
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
