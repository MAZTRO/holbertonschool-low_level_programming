#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - check the code for Holberton School students.
 * @format: the counter of the arguments that in.
 * Return: 0 if the n variable is equal to 0. otherwise return the operation.
 */

void print_all(const char * const format, ...)
{
	if (format == '\0')
	{
		return;
	}

	va_list my_anything;
	int x = 0;
	char *separator = ", ";
	char *prints = NULL;

	va_start(my_anything, format);

	while (format[x] != '\0')
	{
		switch (format[x])
		{
		case 'c':
			printf("%c%s", (char)va_arg(my_anything, int), separator);
			break;
		case 'i':
			printf("%i%s", va_arg(my_anything, int), separator);
			break;
		case 'f':
			printf("%f%s", (float)va_arg(my_anything, double), separator);
			break;
		case 's':
			if (prints == NULL)
			{
				prints = ("(nil)");
			}
			printf("%s", prints);

		default:
			break;
		}

		x += 1;
	}
	va_end(my_anything);
	printf("\n");
}
