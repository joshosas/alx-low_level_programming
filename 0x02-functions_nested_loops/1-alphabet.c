#include "main.h"

/**
 * function prints alphabets in lower case
 *
 * Return: Always 0
 */
/* function prints alphabets */
void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
