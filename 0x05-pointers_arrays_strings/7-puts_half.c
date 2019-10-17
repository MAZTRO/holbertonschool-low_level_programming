#include "holberton.h"

/**
 *puts_half - print the string in revers
 *@str: the variable that contain the string
 */

void puts_half(char *str)
{
	int t;

	for (t = 0; str[t] != '\0'; t++)
	{

	}

	t++;
	t = t / 2;

	while (str[t] != '\0')
	{
		_putchar(str[t]);
		t++;
	}

	_putchar('\n');
}
