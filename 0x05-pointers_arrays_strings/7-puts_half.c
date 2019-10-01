#include "holberton.h"

/**
 *puts_half - print the string in revers
 *@str: the variable that contain the string
 */

void puts_half(char *str)
{
	int t, n;

	for (t = 0; str[t] != '\0'; t++)
	{

	}

	n = (t - 1) / 2;

	while (t > n)
	{
		n++;
		_putchar(str[n]);
	}

	_putchar('\n');
}
