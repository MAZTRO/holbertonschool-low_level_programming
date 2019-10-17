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

<<<<<<< HEAD
	while (x = x < size)
=======
	for (x = 0; x < size; x++)
>>>>>>> 11a9ff9f7bbf6210c4092ac9cfcbe074402290fb
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
