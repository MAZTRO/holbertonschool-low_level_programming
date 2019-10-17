#include "holberton.h"
#include <stdlib.h>

/**
 * *argstostr - function that  concatenates two strings.
 * @ac: The first string.
 * @av: the seond int
 * Return: dest
 */

char *argstostr(int ac, char **av)
{
	int i = 0, count, x = 0;
	char *arx, *Arr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	while (i < ac)
	{
		arx = av[i];
		while (*arx)
		{
			count++;
			arx++;
		}
		count++;
		i++;
	}

	Arr = malloc(count + 1);

	for (i = 0; i < ac; i++)
	{
		arx = av[i];
		while (*arx)
		{
			Arr[x] = *arx;
			arx++;
			x++;
		}
		Arr[x] = '\n';
		x++;
	}

	Arr[count + 1] = '\0';
	return (Arr);
}
