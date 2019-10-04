#include "holberton.h"

/**
 * *leet - function that  concatenates two strings.
 * @z: character validado
 * Return: *char
 */

char *leet(char *z)
{
	int x, y;
	char a[2][10];

	y = 0;

	a[0][0] = 'a';
	a[0][1] = 'e';
	a[0][2] = 't';
	a[0][3] = 'l';
	a[0][4] = 'o';
	a[0][5] = 'A';
	a[0][6] = 'E';
	a[0][7] = 'T';
	a[0][8] = 'L';
	a[0][9] = 'O';
	a[1][0] = '4';
	a[1][1] = '3';
	a[1][2] = '7';
	a[1][3] = '1';
	a[1][4] = '0';
	a[1][5] = '4';
	a[1][6] = '3';
	a[1][7] = '7';
	a[1][8] = '1';
	a[1][9] = '0';
	for (x = 0; z[x] != '\0'; x++)
	{
		while (y < 10)
		{
			if (z[x] == a[0][y])
				z[x] = a[1][y];
			y++;
		}
	}
	return (z);
}
