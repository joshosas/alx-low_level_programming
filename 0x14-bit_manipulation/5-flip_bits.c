#include "main.h"

/**
 * flip_bits - number of bits needed to flip
 * to get from one number to another
 * @n: par
 * @m: par
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, num_flips = 0;
	unsigned long int j = sizeof(unsigned long int) * 8;

	for (i = 0; i < j; i++)
	{
		if ((m & 1) != (n & 1))
			num_flips += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (num_flips);
}
