#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *Arr;
	unsigned int x;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	Arr = malloc(size * nmemb);

	if (Arr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < (size * nmemb); x++)
	{
		Arr[x] = 0;
	}

	return (Arr);
}
