#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - function that locates a substring.
 * @a: The first string
 * @size: The string concatenates
 */

void print_diagsums(int *a, int size)
{
	int x, y, sum = 0, t = 0, d2 = 0;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			if (x == y)
				sum = sum + a[t];
			if ((x + y) == (size - 1))
				d2 = d2 + a[t];
			t++;
		}
	}
	printf("%d, %d\n", sum, d2);
}
