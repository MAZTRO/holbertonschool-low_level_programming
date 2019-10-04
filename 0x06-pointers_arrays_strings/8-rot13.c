#include "holberton.h"

/**
 * *rot13 - function that  concatenates two strings.
 * @c: character validado
 * Return: *char
 */

char *rot13(char *c)
{
	int a = 0, b;

	char *in = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *op = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (c[a] != '\0')
	{
		for (b = 0; b < 52; b++)
		{
			if (c[a] == in[b])
			{
				c[a] = op[b];
				break;
			}
		}
	a++;
	}
	return (c);
}
