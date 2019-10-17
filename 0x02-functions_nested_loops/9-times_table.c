#include "holberton.h"
#include <unistd.h>
/**
 *times_table - check the code for Holberton School students.
 *
 *Return: void
 */
void times_table(void)
{
	int Col, Fil, Mul, First, Last;

	for (Col = 0; Col <= 9; Col++)
	{
		for (Fil = 0; Fil <= 9; Fil++)
		{
			Mul = Fil * Col;
			if (Mul < 10)
			{
				if (Fil != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + Mul);
				sleep(3);
			}
			else
			{
				First = Mul / 10;
				Last = Mul % 10;

				if (Fil != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar('0' + First);
				sleep(3);
				_putchar('0' + Last);
				sleep(3);
			}
		}
		_putchar('\n');
	}
}
