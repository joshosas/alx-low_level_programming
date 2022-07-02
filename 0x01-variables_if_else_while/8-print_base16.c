#include <stdio.h>
/** 
 * main - Entry point
 *
 * Always Return 0 for Success
 */
 
/* Function that prints Hexadeecimal numbers in lower case */
int main(void)
{
	char hex = '0';

	while (hex <= '9')
	{
		putchar(hex);
		hex++;
	}

	char alpha = 'a';

	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');
	return (0);
}
