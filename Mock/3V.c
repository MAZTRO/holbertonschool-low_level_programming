#include <stdio.h>

int main(void)
{
	int x, y;
	y = 0;

	while (y < 10)
	{
	for (x = 0; x <= 14; x++)
	{
		if (x < 10)
		{
			putchar('0' + x);
		}
		else
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
		}
	}
	putchar('\n');
	y++;
	}
}
