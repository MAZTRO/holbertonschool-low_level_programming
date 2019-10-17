#include "holberton.h"

/**
 *more_numbers - Repeat the numbers.
 *
 *Return: Always 0.
 */

void more_numbers(void)
{
	int num, T;

	T = 0;

	while (T < 10)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar('0' + (num / 10));
			}
				_putchar('0' + (num % 10));
		}
		_putchar('\n');
		T++;
	}
}
