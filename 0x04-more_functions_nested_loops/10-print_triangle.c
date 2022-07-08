#include "main.h"

/**
 * print_triangle - Print square based on the par. size
 * @size: height of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;
	int spc;

	for (i = 0; i < size; i++)
	{
		for (spc = size - 1 - i; spc > 0; spc--)
		{
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
