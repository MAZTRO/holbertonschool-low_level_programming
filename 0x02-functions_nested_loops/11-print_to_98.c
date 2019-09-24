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

		while (n >= 98)
		{
			printf("%d, ", n);
/*			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
*/
			n--;
		}
			printf("\n");
		while (n <= 98)
		{
			printf("%d, ", n);
/*			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
*/
			n++;
		}
			printf("\n");
		if (n == 98)
		{
			printf("\n");
		}
}
