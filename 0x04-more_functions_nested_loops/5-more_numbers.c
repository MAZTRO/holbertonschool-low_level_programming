#include "holberton.h"

/**
 *more_numbers - Repeat the numbers.
 *
 *Return: Always 0.
 */

void more_numbers(void)
{
	int num, T, first, last;

	T = 0;

	while (T < 10)
	{
		for (num = 0; num <= 14; num++)
		{
			first = num / 10;
			last = num % 10;
			if (num < 10)
			{
				_putchar('0' + num);
			}
			else
			{
				_putchar('0' + first);
				_putchar('0' + last);
			}
		}
		_putchar('\n');
		T++;
	}
}
