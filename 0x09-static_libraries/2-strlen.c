#include "holberton.h"

/**
 *_strlen - calculate the length of S
 *@s: Varaible
 *Return: return the length
 */

int _strlen(char *s)
{
	int k;

	k = 0;

	while (s[k] != '\0')
	{
		k++;
	}

return (k);
}
