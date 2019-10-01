#include "holberton.h"

/**
 *_puts - lalala
 *@str: lol
 */

void _puts(char *str)
{
	int a = 0;

	for (a = 0; str[a] != '\0'; ++a)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
