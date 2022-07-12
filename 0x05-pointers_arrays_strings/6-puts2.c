#include "main.h"

/**
 * pu2ts - function prints one character out of two
 * @str: pointer to char
 * Return: nothing
*/
void puts2(char *str)
{
	int i, j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	while (j < i)
	{
		_putchar(str[j]);
		j = j + 2;
	}
	_putchar('\n');
}
