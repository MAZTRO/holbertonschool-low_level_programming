#include "holberton.h"

/**
 *swap_int - Change the value
 *@a: first value
 *@b: Second Value
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
