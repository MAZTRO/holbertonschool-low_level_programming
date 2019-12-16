#include "holberton.h"

/**
 * _isdigit - test the variable
 * @c: variable returned
 * Return: so return
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
