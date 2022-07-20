#include "main.h"

/**
 * _puts_recursion - function prints a string 
 * @s: pointer
 *
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}

