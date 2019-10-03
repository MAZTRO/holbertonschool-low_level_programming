#include "holberton.h"

/**
 * _strncpy - check the code for Holberton School students.
 * @dest: Destiny
 * @src: source
 * @n: count
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int  y;

	y = 0;

	while (y < n && src[y] != '\0')
	{
		dest[y] = src[y];
		y++;
	}

	while (y < n)
	{
		dest[y] = '\0';
		y++;
	}

	return (dest);
}
