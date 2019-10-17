#include "holberton.h"

/**
 * Prm - function that  concatenates two strings.
 * @num: The first string
 * @i: The string concatenates
 * Return: dest
 */

int Prm(int num, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (Prm(num, i - 1));
		}
	}
}
/**
 * is_prime_number - function that  concatenates two strings.
 * @n: The first string
 * Return: dest
 */

int is_prime_number(int n)
{
	int i = n / 2;

	if (n < 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}

	i = Prm(n, i);
	return (i);
}
