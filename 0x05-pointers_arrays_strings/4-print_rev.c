#include "main.h"

/**
 * print_rev - function prints out a string in reverse order
 * @s: pointer to string
 * Return: always 0 (Success)
*/
void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	while (count > 0)
	{
		s--;
		_putchar(*s);
		count--;
	}
	_putchar('\n');
}
