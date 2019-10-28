#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - check the code for Holberton School students.
 * @n: the counter of the arguments that in.
 * Return: 0 if the n variable is equal to 0. otherwise return the operation.
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}

	va_list mysum;
	unsigned int total = 0, x = 0;

	va_start(mysum, n);

	while (x < n)
	{
		total += va_arg(mysum, unsigned int);
		x += 1;
	}

	va_end(mysum);

	return (total);
}
