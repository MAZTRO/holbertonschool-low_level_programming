#include "holberton.h"
#include "stdio.h"

/**
 *print_to_98 - check the code for Holberton School students.
 *
 *@n: Lol
 *Return: Always 0.
 */
void print_to_98(int n)
{
int k;
k = n;

	if (n > 98)
	{
		if (k != 98)
		{
			printf("%d, ", k);
		}
		else
		{
			printf("%d", k);
		}
		while (n >= 99)
		{
			n--;
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
		}
		printf("\n");
	}
	else
	{
		if (k != 98)
		{
			printf("%d, ", k);
		}
		else
		{
			printf("%d", k);
		}
		while (n <= 97)
		{
			n++;
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
		}
		printf("\n");
	}
}
