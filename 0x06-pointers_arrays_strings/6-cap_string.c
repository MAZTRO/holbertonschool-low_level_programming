#include "holberton.h"

/**
 * cap_string - check the code for Holberton School students.
 * @z: lol
 * Return: Always 0.
 */

char *cap_string(char *z)
{
	int x, y;

	y = 0;
	if (z[0] >= 97 && z[0] <= 122)
	{
		z[0] = z[0] - 32;
	}

	while (x = 0; z[x] != '\0'; x++)
	{
		if (z[x] == 32 || z[x] == '\t' || z[x] == '\n' || z[x] == ',')
			y = 1;
		if (z[x] == ';' || z[x] == '!' || z[x] == '?' || z[x] == 34)
			y = 1;
		if (z[x] == '(' || z[x] == ')' || z[x] == '{' || z[x] == '}' || z[x] == '.')
			y = 1;
		if (y == 1)
		{
			if (z[x + 1] >= 97 && z[x + 1] <= 122)
				z[x + 1] = z[x + 1] - 32;
			y = 0;
		}
	}
	return (z);
}
