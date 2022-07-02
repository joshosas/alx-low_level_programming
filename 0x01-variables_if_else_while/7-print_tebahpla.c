#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* This function prints alphabet in reverse order */
int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}

	putchar('\n');
	return (0);
}
