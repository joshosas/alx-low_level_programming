#include "main.h"

/**
 * get_bit - function returns value of a bit with a given index
 * @n: decimal par
 * @index: index
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
	return (-1);
	return (bit & 1);
}
