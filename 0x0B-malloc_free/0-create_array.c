#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - function creates array
 * @size: size
 * @c: constant
 * Return: char pointer
 */

char *create_array(unsigned int size, char c)
{
	char *p = malloc(size);

	if (size == 0 || p == 0)
		return (0);

	while (size--)
		p[size] = c;

	return (p);
}

