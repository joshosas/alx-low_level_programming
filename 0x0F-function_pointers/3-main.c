#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - entry point
 * @argc: par 1
 * @argv: par 2
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int R;

	if (argc != 4)
	{
		print("Error\n");
		exit(98);
	}

	R = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", R);

	return (0);
}
