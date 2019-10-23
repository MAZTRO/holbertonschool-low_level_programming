#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an integer
 * @array: the integer to print
 * @size: lenght of array
 * @action: The pointer of a function.
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long x = 0;

	if (array != NULL && size > 0 && action != NULL)
	{
		while (x < size)
		{
			action(array[x]);
		}
	}
}