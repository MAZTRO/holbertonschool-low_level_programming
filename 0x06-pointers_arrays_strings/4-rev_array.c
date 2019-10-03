#include "holberton.h"

/**
 * reverse_array - check the code for Holberton School students.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int x, *begin_ptr, *end_ptr, ch;

	/* Set the begin_ptr and end_ptr */
	/* initially to start of string */
	begin_ptr = a;
	end_ptr = a;

	/* Move the end_ptr to the last character */
	for (x = 0; x < n - 1; x++)
	{
		end_ptr++;
	}

	/* Swap the char from start and end */
	/* index using begin_ptr and end_ptr */
	for (x = 0; x < n / 2; x++)
	{
		/* swap character */
		ch = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;

		/* update pointers positions */
		begin_ptr++;
		end_ptr--;
	}
}
