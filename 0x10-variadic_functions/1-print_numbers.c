#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - check the code for Holberton School students.
 * @n: the counter of the arguments that in.
 * @separator: the char that i'll print between the integers.
 * Return: 0 if the n variable is equal to 0. otherwise return the operation.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator == NULL)
	{
		separator = "";
	}

	va_list myprint;
	int prints = 0;
	unsigned int x = 0;

	va_start(myprint, n);

	while (x < n)
	{
		prints = va_arg(myprint, int);
		printf("%d%s", prints, separator);

		if (x == (n - 1))
		{
			printf("%d", prints);
		}
		x++;
	}
	va_end(myprint);
	putchar('\n');
}
