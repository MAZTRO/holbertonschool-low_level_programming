#include "holberton.h"

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

/**
 * binary_to_uint - check the code for Holberton School students.
 * @b: binary number.
 * Return: Always 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int count_str = 0, len;
	unsigned int total = 0, binary;

	if (b != NULL)
	{
		for (len = 0; b[len] != '\0'; len++)
		{}

		while (b[count_str] != '\0')
		{
			if (b[count_str] == 48)
			{
				binary = 0;
			}
			else if (b[count_str] == 49)
			{
				binary = 1;
			}
			else
			{
				return (0);
			}
			total += binary * my_pow(2, len);
			len--;
			count_str++;
		}
		return (total / 2);
	}
	return (0);
}
