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
	int count, mult;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			mult = atoi(argv[count]) * atoi(argv[count - 1]);
		}
			printf("%d\n", mult);
	}

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
}
