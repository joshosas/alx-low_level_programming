#include "main.h"

/**
 * print_sign - checks numbers
 * @n ; number to check
 * Return: 0 or 1
 */
/* print_sign: function prints sign */
int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		test = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		test = 0;
		_putchar('0');
	}
	else 
	{
		test = -1;
		_putchar('-');
	}
	return (test);
}
