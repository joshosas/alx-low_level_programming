#include "main.h"
/**
 * main - Entry poin
 *
 * Return: Always 0
 */

/* function prints _putchar */
int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');

	return (0);
}
