#include "holberton.h"

/**
 * print_diagsums - function that locates a substring.
 * @a: The first string
 * @size: The string concatenates
 */

void print_diagsums(int *a, int size)
{
	int x = 0, y, sum = 0, t = 0, d2 = 0;

	while (x < size)
	{
		for (y = 0; y < size; y++)
		{
			if (x == y)
			{
				sum += a[t];
			}
			if ((x + y) == (size - 1))
			{
				d2 += a[t];
			}
			t++;
		}
		x++;
	}
	printf("%d, %d\n", sum, d2);
}
