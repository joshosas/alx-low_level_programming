#include "main.h"

/**
 * _puts - function prints out a string
 * @str: pointer to string
 * Return: nothing
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
