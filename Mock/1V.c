#include <stdio.h>

int main (void)
{
	int x, y;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (y = 65; y <= 90; y++)
	{
		putchar(y);
	}
	putchar('\n');
}
