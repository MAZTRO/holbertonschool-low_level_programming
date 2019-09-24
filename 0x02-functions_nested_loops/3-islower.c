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
if (c >= 'A' && c <= 'Z')
{
return (0);
}
else
{
return (1);
}
}
