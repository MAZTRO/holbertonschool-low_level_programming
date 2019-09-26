#include "holberton.h"

/**
 *print_numbers - only prints X
 *Return: not returned
 */

void print_numbers(void)
{
int X;

	for (X = 0; X < 10; X++)
	{
		_putchar('0' + X);
	}
	_putchar('\n');
}
