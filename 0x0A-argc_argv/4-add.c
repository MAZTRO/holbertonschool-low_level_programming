#include <stdio.h>
#include <stdlib.h>

/**
 * main - Lol
 * @argc: lol
 * @argv: Lol
 * Return: Lol
 */

int main(int argc, char *argv[])
{
	int add, count1, count2;
	char *A;

	add = 0;

	for (count1 = 1; count1 < argc; count1++)
	{

		A = argv[count1];

		for (count2 = 0; A[count2]; count2++)
		{
			if (A[count2] < 48 || A[count2] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}

		add += atoi(argv[count1]);
	}

	printf("%d\n", add);
	return (0);
}
