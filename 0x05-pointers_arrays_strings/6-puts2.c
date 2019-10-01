#include "holberton.h"

/**
 * puts2 -  function that takes a pointer to an int
 * @str: The number to be checked
 */

void puts2(char *str)
{
	int x;

	for (x = 0; x != '\0'; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
