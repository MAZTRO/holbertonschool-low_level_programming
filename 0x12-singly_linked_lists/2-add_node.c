#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_node - writes the character c to stdout
 * @head: The character to print
 * @str: name
 *
 * Return: list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *cpy;
	int i;

	cpy = malloc(sizeof(list_t));
	if (cpy == NULL)
	{
		return (NULL);
	}
	cpy->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++);
	
	cpy->len = i;
	cpy->next = *head;
	*head = cpy;

	return (cpy);
}
