#include "holberton.h"

/**
 * puts2 -  function that takes a pointer to an int
 * @str: The number to be checked
 */

void puts2(char *str)
{
	int x;

	x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[a]);
		x = x + 2;
	}

	_putchar('\n');
}
