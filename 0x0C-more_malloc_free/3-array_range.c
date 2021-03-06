#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - prints buffer in hexa
 * @min: the address of memory to print
 * @max: the size of the memory to print
 * Return: Nothing.
 */

int *array_range(int min, int max)
{
	int x, *Arr;

	if (min > max)
	{
		return (NULL);
	}

	Arr = malloc((max - min + 1) * sizeof(int));

	if (Arr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x <= (max - min); x++)
	{
		Arr[x] = min + x;
	}

	return (Arr);
}
