#include "main.h"

/**
 * times_table - prints times table
 *
 * Return: Always 0
 */
/* times_table: functiion prints times table zero to nine */
void times_table(void)
{
	int x = 0;
	int y;
	int mul;

	while (x <= 9)
	{
		y = 0;
		while (y <= 9)
		{
			mul = x * y;
			if (y == 0)
			{
				_putchar('0' + mul);
			}
			else if (mul < 10)
			{
				_putchar(' ');
				_putchar('0' + mul);
			}
			else
			{
				_putchar('0' + mul / 10);
				_putchar('0' + mul % 10);
			}
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			y++;
		}
		_putchar('\n');
		x++;
	}
}
