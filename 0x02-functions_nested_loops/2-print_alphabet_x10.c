#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int al, T;
T = 0;
while (T < 10)
{
for (al = 'a'; al <= 'z'; al++)
{
_putchar(al);
}
_putchar('\n');
T++;
}
return;
}
