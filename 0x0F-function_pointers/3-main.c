#include "3-calc.h"

/**
 * get_op_func - Get the operators
 * @s: the operator
 * Return: the function of operators
 */

int main(int argc, char *argv[])
{
	int total;

	if (atoi(argv) != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((get_op_func == '/' || get_op_func == '%') && argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", total);

}
