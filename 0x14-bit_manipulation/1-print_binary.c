#include "holberton.h"

/**
 * print_binary - check the code for Holberton School students.
 * @n: uint.
 * Return: Always 0.
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else if (n == 1)
	{
		_putchar('1');
	}
	else
	{
		if (n > 1)
		{
			print_binary(n >> 1);
			if (n & 1)
			{
				_putchar('1');
			}
			else
			{
				_putchar('0');
			}
		}
	}
}
