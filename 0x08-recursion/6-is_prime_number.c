#include "holberton.h"

/**
 * is_prime_number - check the code for Holberton School students.
 * @n: The prime
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	int x;

	if (n <= 1)
	{
		return (0);
	}
	else if (n >= 2 && n / x == 1)
	{
		return (1);
	}
	x++;
	is_prime_number(n);
}
