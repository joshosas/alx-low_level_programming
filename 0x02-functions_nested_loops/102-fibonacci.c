#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
/* function prints the first 50 Fibonacci numbers */
int main(void)
{
	int c = 0;
	long int a = 0, b = 1, nextnum;

	while (c < 50)
	{
		nextnum = a + b;
		a = b;
		b = nextnum;
		printf("%lu", nextnum);

		if (c < 49)
		{
			printf(", ");
		}
		c++;
	}
	putchar('\n');
	return (0);
}
