#include "main.h"

/**
 * Print alphabets - function prints alphabets in lower case
 *
 * Return: Always 0
 */

/* function - prints alphabets 
 *
 * Betty leave me alone
 */
void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
