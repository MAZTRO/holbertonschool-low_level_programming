#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - check the code for Holberton School students.
 * @str: Lol
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	char *Arr = NULL;
	int x, y;

	if (str == NULL)
	{
		return (NULL);
	}

	for (x = 0; str[x] != '\0'; x++)
	{
	}

	x++;

	Arr = malloc(sizeof(char) * x);

	if (Arr == NULL)
	{
		return (NULL);
	}

	for (y = 0; y < x; y++)
	{
		Arr[y] = str[y];
	}
	return (Arr);
}
