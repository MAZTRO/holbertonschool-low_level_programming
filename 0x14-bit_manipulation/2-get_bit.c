#include "holberton.h"

/**
 * get_bit - check the code for Holberton School students.
 * @n: uint.
 * @index: lol
 * Return: Always 0.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 64)
	{
		if (n & (1 << index))
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (-1);
}
