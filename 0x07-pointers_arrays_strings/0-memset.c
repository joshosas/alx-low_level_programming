#include "main.h"

/**
 * *_memset - function fills memory with constant byte
 * @s: poiter
 * @b: constant byte
 * @n: byte
 * Return: character s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
