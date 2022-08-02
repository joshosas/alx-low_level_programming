#include "main.h"

/**
 * *_memcpy - function copies memory area
 * @dest: pointer to destination
 * @src: pointer memory area
 * @n: size
 *
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}