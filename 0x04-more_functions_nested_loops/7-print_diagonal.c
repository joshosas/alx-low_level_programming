#include "main.h"

/**
 * print_diagonal - Print diagonal line based on the integer n
 * @n : The number of lines using '\' characters to use
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int spc;

	for (i = 0; i < n; i++)
	{
		for (spc = 0; spc < i; spc++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
