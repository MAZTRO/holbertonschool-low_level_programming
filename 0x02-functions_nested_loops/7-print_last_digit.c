#include "holberton.h"

/**
 *print_last_digit - check the code for Holberton School students.
 *
 *@num: Lol
 *Return: Always 0.
 */
int print_last_digit(int num)
{
num = num % 10;
if (num < 0)
{
num = -1 * num;
}
_putchar('0' + num);
return (num);
}
