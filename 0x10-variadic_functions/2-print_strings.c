#include "variadic_functions.h"

/**
 * print_strings - check the code for Holberton School students.
 * @n: the counter of the arguments that in.
 * @separator: the char that i'll print between the integers.
 * Return: 0 if the n variable is equal to 0. otherwise return the operation.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	if (separator == NULL)
	{
		separator = "";
	}

	va_list myprint;
	char *prints;
	unsigned int x = 0;

	va_start(myprint, n);

	while (x < n)
	{
		prints = va_arg(myprint, char*);

		if (prints == NULL)
		{
			printf("(nil)");
		}

		printf("%s", prints);

		if (separator != NULL && x < (n - 1))
		{
			printf("%s", separator);
		}
		x++;
	}
	va_end(myprint);
	putchar('\n');
}
