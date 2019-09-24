#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
char HA, HB, MA, MB, BK;

for (HA = '0'; HA < '3'; HA++)
{
if (HA == '2')
{
BK = '3';
}
else
{
BK = '9';
}
for (HB = '0'; HB <= BK; HB++)
{
for (MA = '0'; MA <= '5'; MA++)
{
for (MB = '0'; MB <= '9'; MB++)
{
_putchar(HA);
_putchar(HB);
_putchar(':');
_putchar(MA);
_putchar(MB);
_putchar('\n');
}
}
}
}
}
