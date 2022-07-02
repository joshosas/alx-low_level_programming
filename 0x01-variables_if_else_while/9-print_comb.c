#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* Function prints single digits of base 10 starting from 0 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(48 + num);
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
