#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: if big endian 0, little endian 1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
