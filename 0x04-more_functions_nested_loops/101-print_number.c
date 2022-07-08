#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_number - like a hello world
 * @n: integer parameter
 * Return: void
 */
int _putchar(char c);

void print_number(int n)
{
	unsigned int n_1 = 0;
	if (n < 0)
	{
		n_1 = -n;
		_putchar('_');
	}

	else
	{
		n_1 = n;
	}

	if (n_1 / 10)
	{
		print_number(n_1 / 10);
	}
	_putchar((n_1 % 10) + '0');
}
