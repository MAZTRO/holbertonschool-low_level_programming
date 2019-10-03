#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{

	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
		/*count the length of the array */
	}

	y = 0;

	while (y < n && src[y] != '\0')
	{
		dest[x + y] = src[y];
		y++;
	}

	return (dest);

}
