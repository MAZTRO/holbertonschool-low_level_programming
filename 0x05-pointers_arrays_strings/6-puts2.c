#include "holberton.h"

/**
 * puts2 -  function that takes a pointer to an int
 * @str: The number to be checked
 */

void puts2(char *str)
{
	int x, y;

	y = 0;

	for (x = 0; str[x]; x++)
	{

	}
	while (y < x)
	{
		_putchar(str[y]);
		y += 2;
	}
	_putchar('\n');
}
