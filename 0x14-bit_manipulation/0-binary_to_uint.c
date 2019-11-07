#include "holberton.h"

/**
 * binary_to_uint - check the code for Holberton School students.
 * @b: binary number.
 * Return: Always 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int count_str = 0, binary = 0, len;
	unsigned int total = 0;

	if (b != NULL)
	{
		for (len = 0; b[len] != '\0'; len++)
		;

		while (b[count_str] != '\0')
		{
			if (b[count_str] == 49)
			{
				binary = 1;
			}
			else
			{
				return (0);
			}
			total += binary * pow(2, len);
			len--;
			count_str++;
		}
		return (total / 2);
	}
	return (0);
}
