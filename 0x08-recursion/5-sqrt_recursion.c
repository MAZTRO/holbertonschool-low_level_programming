#include "holberton.h"

/**
 * mysqrt - help square root
 * @tmp: save value
 * @y: save number n
 */

void mysqrt(int *tmp, int y)
{
	if ((*tmp) * (*tmp) == y)
	{
		return;
	}
	if ((*tmp) * (*tmp) < y)
	{
		*tmp = *tmp + 1;
		mysqrt(tmp, y);
	}
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number for square root
 * Return: Depending case
 */

int _sqrt_recursion(int n)
{
	int res = 2;
	int *tmp = &res;

	mysqrt(tmp, n);
	res = *tmp;

	if (n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	if ((*tmp) * (*tmp) != n)
	{
		return (-1);
	}

	return (res);
}
