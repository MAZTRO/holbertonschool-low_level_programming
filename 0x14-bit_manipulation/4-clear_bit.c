#include "holberton.h"
#include <stdlib.h>

/**
 * clear_bit - check the code for Holberton School students.
 * @n: uint.
 * @index: lol
 * Return: Always 0.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 0;

	if (index < 64)
	{
		x = 1 << index;
		*n = *n & ~(x);
		return (1);
	}
	return (-1);
}
