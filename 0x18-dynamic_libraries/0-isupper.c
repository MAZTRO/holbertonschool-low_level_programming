#include "holberton.h"

/**
 *_isupper - Test the char
 *@c: reurned variable
 *Return: depend of the Q
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
