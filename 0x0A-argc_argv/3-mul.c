#include <stdio.h>
#include <stdlib.h>

/**
 * main - function prints result of mulplication of two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul = mul * atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
