#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - check the code for Holberton School students.
 * @format: the counter of the arguments that in.
 * Return: 0 if the n variable is equal to 0. otherwise return the operation.
 */

void print_all(const char * const format, ...)
{
	va_list my_anything;
	int x = 0;
	char *prints = NULL;

	va_start(my_anything, format);

	while (format[x] != '\0')
	{
		switch (format[x])
		{
		case 'c':
			printf("%c", (char)va_arg(my_anything, int));
			break;
		case 'i':
			printf("%i", va_arg(my_anything, int));
			break;
		case 'f':
			printf("%f", (float)va_arg(my_anything, double));
			break;
		case 's':
			prints = va_arg(my_anything, char*);
			if (prints == NULL)
			{
				prints = ("(nil)");
			}
			printf("%s", prints);

		default:
			break;
		}
		if (format[x + 1] != '\0' && (format[x] == 'c' || format[x] == 'i' || format[x] == 'f' || format[x] == 's'))
		{
			printf(", ");
		}

		x += 1;
	}
	va_end(my_anything);
	printf("\n");
}
