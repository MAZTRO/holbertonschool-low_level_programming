#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - check the code for Holberton School students.
 * @s1: Lol
 * @s2: Lol
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	int x, y, size, concat, concat2;
	char *Arr_concat;


	for (x = 0; s1[x] != '\0'; x++)
	for (y = 0; s2[y] != '\0'; y++)

	size = x + y;

	Arr_concat = malloc(sizeof(char) * (size + 1));

	if (Arr_concat == NULL || size == 0)
	{
		return (NULL);
	}

	for (concat = 0; s1[concat] != '\0'; concat++)
	{
		Arr_concat[concat] = s1[concat];
	}
	for (concat2 = 0; concat2 < size; concat2++)
	{
		Arr_concat[x + concat2] = s2[concat2];
	}

	Arr_concat[concat2] = '\0';

	return (Arr_concat);
}
