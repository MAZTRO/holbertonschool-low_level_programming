#include "holberton"

/**
 * _strstr- function that locates a substring.
 * @haystack: The first string
 * @needle: The string concatenates
 * Return: dest
 */

char *_strstr(char *haystack, char *needle)
{
	int x;
	int b = 0, c = 0, a = 0;

	while (needle[a])
	{
		a++;
		if (a == 0)
		{
			return (haystack);
		}
	}

	for (x = 0; haystack[x]; x++)
	{
		if (haystack[x] == needle[b])
		{
			c++;
			if (c == a)
			{
				haystack += x - a + 1;
				return (haystack);
			}
			b++;
		}
		else
		{
			c = 0;
			b = 0;
		}
	}

	haystack = 0;
	return (haystack);
	}
