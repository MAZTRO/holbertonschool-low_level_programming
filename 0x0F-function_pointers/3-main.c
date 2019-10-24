#include "3-calc.h"

/**
 * get_op_func - Get the operators
 * @s: the operator
 * Return: the function of operators
 */

int main(int argc, char *argv[])
{
	int total;
	char operator, *dir_oper;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = *argv[2];
	dir_oper = argv[2];

	if ((operator != '+' && operator != '-' && operator != '*' && operator != '/' && operator != '%') || dir_oper[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((operator == '/' || operator == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	total = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", total);

	return (0);

}
