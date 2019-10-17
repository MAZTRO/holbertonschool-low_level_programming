#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * char *string_nconcat - concatenates two strings
 * @s1: Lol
 * @s2: lol
 * @n: Lol
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int FirstString, SecondString, concat, concat_2;
	char *Res;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (FirstString = 0; s1[FirstString]; FirstString++)
	{}
	for (SecondString = 0; s2[SecondString]; SecondString++)
	{}

	if (n >= SecondString)
		n = SecondString;

	Res = malloc(sizeof(char) * (FirstString + n));

	if (Res == NULL)
		return (NULL);

	for (concat = 0; concat < FirstString; concat++)
	{
		Res[concat] = s1[concat];
	}
	concat_2 = concat;
	for (concat = 0; concat < n; concat++)
	{
		Res[concat_2] = s2[concat];
		concat_2++;
	}
	Res[concat_2] = '\0';
	return (Res);
}
