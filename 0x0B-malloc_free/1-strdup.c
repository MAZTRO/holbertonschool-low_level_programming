#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	char *Arr = NULL;
	int x, y;

	for (x = 0; str[x] != '\0'; x++){}

	Arr = malloc(sizeof(char) * x);
	if (Arr == NULL || str == NULL)
	{
		return (NULL);
	}

	for (y = 0; y < x; y++)
	{
		Arr[y] = str[y];
	}
	return (Arr);
}
