#include "main.h"
#include <stdlib.h>

/**
 * set_bit - function sets the value of a bit to 1 at a given index
 * @n: par
 * @index: index
 * Return: 1 OR -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
