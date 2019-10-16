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
	int x = 0, y = 0, concat, concat2;
	char *Arr_concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[x])
		x++;
	while (s2[y])
		y++;

	Arr_concat = malloc(sizeof(char) * (x + (y + 1));

	if (Arr_concat == NULL)
		return (NULL);

	for (concat = 0; concat < x; concat++)
		Arr_concat[concat] = s1[concat];

	concat2 = concat;

	for (concat = 0; concat <= y; concat++)
	{
		Arr_concat[concat2] = s2[concat];
		concat2++;
	}

	return (Arr_concat);
}
