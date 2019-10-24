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

	if (array == NULL || action == NULL)
	{
		return;
	}

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
