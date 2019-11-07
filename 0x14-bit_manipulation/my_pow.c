#include "holberton.h"

/**
 * _pow - check the code for Holberton School students.
 * @x: First Int
 * @y: Secind int
 * Return: Always 0.
 */

int _pow(int x, int y)
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
		temp = _pow(x, y / 2);

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
