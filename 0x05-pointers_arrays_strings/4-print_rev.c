#include "holberton.h"

/**
 *print_rev - print the string in revers
 *@s: the variable that contain the string
 */

void print_rev(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		/* Nothing */
	}

	while (a >= 0)
	{
		_putchar(s[a]);
		a--;
	}
	_putchar('\n');
}
