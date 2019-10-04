#include "holberton.h"

/**
 * string_toupper - check the code for Holberton School students.
 * @c: Lol
 * Return: Always 0.
 */

char *string_toupper(char *c)
{
	int x, y;

	x = 0;

	for (x = 0; c[x] != '\0'; x++)
	{

	}

	y = 0;

	for (y < x)
	{
		if (c[y] >= 97 && c[y] <= 122)
		{
			c[y] = (c[y] - 32);
		}

		y++;
	}

	return (c);
}
