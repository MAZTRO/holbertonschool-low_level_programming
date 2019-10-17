#include "holberton.h"

/**
 *print_diagonal - Lol
 *@n: mas lol
 *return: always 0
 */

void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
<<<<<<< HEAD
			for (y = 0; y <= x; y++)
=======
			for (y = 1; y <= x; y++)
>>>>>>> 3fba144697fcddd65b109522f3a856627f99c0d8
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
