#include "main.h"

/**
 * print_alphabet_x10 - function prints alphabets
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char x;
	int i = 0;

	while (i < 10)
	{
		x = 'a';
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
		i++;
	}
}
