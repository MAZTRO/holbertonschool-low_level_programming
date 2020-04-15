#include "search_algos.h"

/**
 * print_array - Print an array
 * @array: object to print
 * @start: index from start
 * @end: last index
 * Return: Nothing
 */

void print_array(int *array, int start, int end)
{
	int idx;

	printf("Searching in array: ");
	for (idx = start; idx <= end; idx++)
	{
		if (idx < end)
		{printf("%d, ", array[idx]); }
		else
		{printf("%d", array[idx]); }
	}
	printf("\n");
}

/**
 * binary_search - function that searches for a value in an array
 * @array: Object to search
 * @size: Length of array
 * @value: to search
 * Return: index, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;
	int middle = 0;

	if (array != NULL)
	{
		while (left <= right)
		{
			middle = (left + right) / 2;
			print_array(array, left, right);
			if (array[middle] < value)
			{
				left = middle + 1;
			}
			else if (array[middle] > value)
			{
				right = middle - 1;
			}
			else
			{return (middle); }
		}
	}
	return (-1);
}
