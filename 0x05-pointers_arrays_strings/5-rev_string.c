#include "holberton.h"

/**
 *rev_string - print the string in revers
 *@s: the variable that contain the string
 */

void rev_string(char *s)
{
	int l, x;
	char *begin_ptr, *end_ptr, ch;

	/* Get the length of the string */
	for (l = 0; s[l] != '\0'; l++)
	{
		/* Nothing */
	}

	/* Set the begin_ptr and end_ptr */
	/* initially to start of string */
	begin_ptr = s;
	end_ptr = s;

	/* Move the end_ptr to the last character */
	for (x = 0; x < l - 1; x++)
	{
		end_ptr++;
	}

	/* Swap the char from start and end */
	/* index using begin_ptr and end_ptr */
	for (x = 0; x < l / 2; x++)
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
