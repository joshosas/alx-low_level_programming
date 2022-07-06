#include "main.h"

/**
 * print_times_table - prints times table
 * @n: table for use
 * Return: void
 */

/* print_times_table: function prints times table */
void print_to_98(int n)
{
	int a = 0;
	int b;
	int mul;

	if (n < 0 || n > 15)
		return;

	while (a <= n)
	{
		for (b = 0; b <= n; b++)
		{
			mul = a * b;
			if (b == 0)
				_putchar('0' + mul);
			else if (mul < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + mul);
			}
			else if (mul < 100)
			{
				_putchar(' ');
				_putchar('0' + mul / 10);
				_putchar('0' + mul % 10);
			}
			else
			{
				_putchar('0' + mul / 100);
				_putchar('0' + (mul - 100) / 10);
				_putchar('0' + mul % 10);
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
		a++;
	}

}
