#include "main.h"

/**
 * puts_half - prints a half of a string
 * @str: pointer to string
 * Return: void
 */

void puts_half(char *str)
{
	int i, x, len;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	x = (len / 2);

	if ((len % 2) == 1)
	{
		x = ((len + 1) / 2);
	}

	for (i = x; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
