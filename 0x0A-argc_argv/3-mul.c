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
	int mult;

	if (argc > 2)
	{
			mult = atoi(argv[1]) * atoi(argv[2]);
			printf("%d\n", mult);
			return (0);
	}

	printf("Error\n");
	return (1);
}
