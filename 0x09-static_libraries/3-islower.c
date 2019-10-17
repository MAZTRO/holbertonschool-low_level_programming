#include "holberton.h"

/**
 *_islower - Check the character.
 *
 *@c: Returned value
 *
 *Return: Always 0 if is lower or 1 is Higer.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
