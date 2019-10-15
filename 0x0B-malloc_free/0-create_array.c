#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - prints buffer in hexa
 * @size: the address of memory to print
 * @c: the size of the memory to print
 *
 * Return: A pointer.
 */

char *create_array(unsigned int size, char c)
{
	char *Arr;
	unsigned int x = 0;

	if (size == 0)
	{
		return (NULL);
	}
	Arr = malloc(sizeof(char) * size);
	if (Arr == NULL)
	{
		return (NULL);
	}

	while (x < size)
	{
		Arr[x] = c;
		x++;
	}
	Arr[x] = '\0';

	return (Arr);
}
