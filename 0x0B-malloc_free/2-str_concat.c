#include "holberton.h"
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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x]; x++)
	for (y = 0; s2[y]; y++)

	size = x + (y + 1);

	Arr_concat = malloc(sizeof(char) * (size));

	if (Arr_concat == NULL)
		return (NULL);

	for (concat = 0; concat < x; concat++)
		Arr_concat[concat] = s1[concat];

	for (concat2 = 0; concat2 <= y; concat2++)
	{
		Arr_concat[concat] = s2[concat2];
		concat++;
	}

	return (Arr_concat);
}
