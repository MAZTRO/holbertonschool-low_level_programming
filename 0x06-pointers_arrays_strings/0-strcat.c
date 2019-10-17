#include "holberton.h"

/**
 * _strcat - check the code for Holberton School students.
 * @dest: destiny
 * @src: Source
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
		/* Count the string */
	}

	y = 0;

	while (src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}

	return (dest);
}
