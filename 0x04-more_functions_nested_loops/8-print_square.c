#include "main.h"

/**
 * print_line - Print line based on the integer n
 * @n : The number of lines using  "#" characters to
 * Return: void
 */
void print_square(int n)
{
	int i;
	int j;

	for (j = 0; j < n; j++)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
