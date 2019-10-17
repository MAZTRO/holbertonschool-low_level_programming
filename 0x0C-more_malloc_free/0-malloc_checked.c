#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - check the code for Holberton School students.
 * @b: Lol
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
	int *Err;

	Err = malloc(b);

	if (Err == NULL || b == INT_MAX)
	{
		exit(98);
	}

	return (Err);
}
