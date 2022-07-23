#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - function prints result of numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int val, i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	val = atoi(argv[1]);
	if (val < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (val % 25 >= 0)
	{
		i += val / 25;
		val = val % 25;
	}
	if (val % 10 >= 0)
	{
		i += val / 10;
		val = val % 10;
	}
	if (val % 5 >= 0)
	{
		i += val / 5;
		val = val % 5;
	}
	if (val % 2 >= 0)
	{
		i += val / 2;
		val = val % 2;
	}
	if (val % 1 >= 0)
		i += val / 1;
	printf("%d\n", i);
	return (0);
}
