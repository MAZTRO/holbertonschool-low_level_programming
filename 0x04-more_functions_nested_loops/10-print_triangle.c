#include "holberton.h"

/**
 * print_triangle - Check if a number is alphabetic character
 * @size: The number to be checked
 */

void print_triangle(int size)
{
	int a, b, c, d;

	d = size - 1;
	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < d; b++)
			{
				_putchar(' ');
			}
			for (c = b - 1; c < size - 1; c++)
			{
				_putchar('#');
			}
		_putchar('\n');
		d--;
		}
	}
	else
	{
	_putchar('\n');
	}
}
