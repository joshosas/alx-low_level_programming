#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* This function prints all aphabets in lower case except 'e' and 'q' */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}
		alpha++;

	}

	putchar('\n');
	return (0);
}
