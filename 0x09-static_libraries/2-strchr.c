#include "holberton.h"

/**
 * *_strchr - function that  concatenates two strings.
 * @s: The first string
 * @c: The string concatenates
 * Return: dest
 */
char *_strchr(char *s, char c)
{
	int x = 0, t;

	while (s[x])
	{
		x++;
	}
	for (t = 0; t <= x; t++)
	{
		if (s[t] == c)
		{
			s = (s + t);
			break;
		}
		else if (t == x)
		{
			s = 0;
		}
	}
	return (s);
}
