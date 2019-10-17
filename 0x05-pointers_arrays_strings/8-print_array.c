#include <stdio.h>

/**
 *print_array - print the string in revers
 *@a: the variable that contain the string
 *@n: characters count
 */

void print_array(int *a, int n)
{
	int x;

	x = 0;

	while (x < n)
	{
		if ((x + 1) == n)
		{
			printf("%d", a[x]);
		}
		else
		{
			printf("%d, ", a[x]);
		}
		x++;
	}
	printf("\n");
}
