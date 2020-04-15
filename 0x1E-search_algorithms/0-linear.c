#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array
 * @array: Object to search
 * @size: Length of array
 * @value: to search
 * Return: index, otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	if (array != NULL)
	{
		for (; idx < size; idx++)
		{
			printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
			if (array[idx] == value)
			{return (idx); }
		}
	}
	return (-1);
}
