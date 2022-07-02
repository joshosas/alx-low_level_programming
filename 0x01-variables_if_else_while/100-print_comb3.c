#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* Function prints possible dif combinations of 2 digits */
int main(void)
{
	int num_1;
	int num_2 = 0;

	while (num_2 < 10)
	{
		num_1 = 0;
		while (num_1 < 10)
		{
			if (num_2 != num_1 && num_2 < num_1)
			{
				putchar('0' + num_2);
				putchar('0' + num_1);

				if (num_1 + num_2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			num_1++;

		}
		num_2++;

	}
	putchar('\n');

	return (0);
}
