#include <stdio.h>
#include "function_pointers.h"

/**
 * is_98 - check if a number is equal to 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0)
	{
		return (-1);
	}

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
		{
			return (x);
		}
	}

	return (-1);
}
