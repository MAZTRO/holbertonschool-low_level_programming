#include "holberton.h"

/**
 * _strchr - check the code for Holberton School students.
 * @s: lol
 * @c: lol
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{

	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
		{
			s += x;
			return (s);
		}
	}

	s = 0;
	return (s);
}
