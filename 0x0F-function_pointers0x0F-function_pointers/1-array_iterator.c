#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an integer
 * @array: the integer to print
 * @size: length of an array
 * @action: The function pointer
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	while (x < size)
	{
		action(array[x]);
		x++;
	}
}
