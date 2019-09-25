#include "holberton.h"

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
				_putchar('0' + Last);
			}
		}
		_putchar('\n');
	}
}
