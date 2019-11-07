#include "holberton.h"
#include <stdlib.h>

/**
 * set_bit - check the code for Holberton School students.
 * @n: uint.
 * @index: lol
 * Return: Always 0.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 0;
	int y = 0;

	if (n != NULL)
	{
		x = 1 << index;
		*n += x;
		y = *n;
		return (y);
	}
	return (-1);
}
