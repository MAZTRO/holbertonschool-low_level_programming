#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * Return: Always 0.
 */

int main(void)
{
	int x;

	x = 1;

	while (x <= 100)
	{
		if ((x % 3) == 0 && (x % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((x % 3) == 0)
		{
			printf("Buzz ");
		}
		else if ((x % 5) == 0)
		{
			if (x == 100)
			{
				printf("Fizz");
			}
			else
			{
				printf("Fizz ");
			}
		}
		else
		{
			printf("%d ", x);
		}
		x++;
	}

	printf("\n");

return (0);
}
