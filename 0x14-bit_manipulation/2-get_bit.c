#include "holberton.h"

/**
 * print_binary - check the code for Holberton School students.
 * @n: uint.
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
