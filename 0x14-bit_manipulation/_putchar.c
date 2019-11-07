#include <unistd.h>
#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * my_pow - check the code for Holberton School students.
 * @x: First Int
 * @y: Secind int
 * Return: Always 0.
 */

unsigned int my_pow(int x, int y)
{
	int temp;

	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		temp = my_pow(x, y / 2);

		if (y % 2 == 0)
		{
			return (temp * temp);
		}
		else
		{
			return (x * temp * temp);
		}
	}
}
