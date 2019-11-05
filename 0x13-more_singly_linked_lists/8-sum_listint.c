#include "lists.h"

/**
 * sum_listint - writes the character c to stdout
 * @head: The character to print
 * Return: list
 */

int sum_listint(listint_t *head)
{
	int res = 0;
	listint_t *cpy;

	cpy = head;

	if (head != NULL)
	{
		while (cpy != NULL)
		{
			res += (*cpy).n;
			cpy = (*cpy).next;
		}
		return (res);
	}
	return (0);
}
