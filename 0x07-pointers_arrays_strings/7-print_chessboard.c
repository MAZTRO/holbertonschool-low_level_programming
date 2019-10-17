#include "holberton.h"

/**
 * print_chessboard - function that  concatenates two strings.
 * @a: The first string
 */

void print_chessboard(char (*a)[8])
{
	int x, y;

	x = 0;

	while (x < 8)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
		x += 1;
	}
}
