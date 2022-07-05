#include "main.h"

/**
 * Print alphabets - function prints alphabets in lower case
 *
 * Return: Always 0 (Success)
 */
/* print_alphabet - function that prints alphabets */
void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
