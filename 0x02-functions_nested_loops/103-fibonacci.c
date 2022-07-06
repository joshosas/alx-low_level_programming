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
	int a = 0, b = 1, nextnum = 0;
	int sum = 0;

	while (nextnum < 4000000)
	{
		nextnum = a + b;
		a = b;
		b = nextnum;
		if (nextnum % 2 == 0)
			sum += nextnum;
	}
	printf("%i\n", sum);
	return (0);
}
