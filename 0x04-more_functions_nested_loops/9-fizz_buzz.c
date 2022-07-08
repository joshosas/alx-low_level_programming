#include "main.h"
#include <stdio.h>

/**
 * main - Fizz for multiples of 3, Buzz for 5 and FizzBuzz for both
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 1;

	while (i < 101)
	{
		if (i % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			printf(" ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
