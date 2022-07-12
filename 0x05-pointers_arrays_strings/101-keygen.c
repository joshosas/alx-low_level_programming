#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * function generates random valid passwords
 * for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, sum, n;
	int paswd[100];

	sum = 0;

	srand(time(NULL));
	
	for (i = 0; i < 100; i++)
	{
		paswd[i] = rand() % 78;
		sum += (paswd[i] + '0');
		putchar(paswd[i] + '0');

		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}

