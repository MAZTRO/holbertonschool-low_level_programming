#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int print_last_digit(int num)
{
num = num % 10;
if (0 > num)
{
num = -1 * num;
}
_putchar('0' + num);
return (num);
}
