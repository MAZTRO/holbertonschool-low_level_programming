#include "holberton.h"

/**
 * _strcmp - check the code for Holberton School students.
 * @s1: S1
 * @s2: S2
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			x = *s1 - *s2;
			return (x);
		}
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}
}
