#include "holberton.h"

/**
 *print_most_numbers - only prints X
 *Return: not returned
 */

void print_most_numbers(void)
{
int X;

	for (X = 0; X < 10; X++)
	{
		if (X != 2 && X != 4)
		{
			_putchar('0' + X);
		}
	}
	_putchar('\n');
}
