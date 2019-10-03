#include "holberton.h"

/**
 * _strcmp - check the code for Holberton School students.
 * @s1: S1
 * @s2: S2
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int x, y;

	for (x = 0; s1[x] != '\0'; x++)
	{
		for (y = 0; s2[y] != '\0'; y++)
		{
			if (s1[x] == s2[y])
			{
				return (0);
			}
			else
			{
				return (s1[x] - s2[y]);
			}
		}
	}
	return (0);
}
