#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int al, AL;
for (al = '0'; al <= '9'; al++)
{
putchar(al);
}
for (AL = 'a'; AL <= 'f'; AL++)
{
putchar(AL);
}
putchar('\n');
return (0);
}
