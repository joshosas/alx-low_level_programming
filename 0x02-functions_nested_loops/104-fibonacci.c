#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
/* function prints the Fibonacci sequence numbers */
int main(void)
{
	int i = 0;
	unsigned long int a = 0, b = 1, nextnum = 0;

	while (i < 98)
	{
		nextnum = a + b;
		a = b;
		b = nextnum;
		printf("%lu", nextnum);

		if (i < 97)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
