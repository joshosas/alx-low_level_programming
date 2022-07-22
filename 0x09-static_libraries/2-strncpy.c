#include "main.h"

/**
 * *_strncpy - function that concatenates srtings
 * @dest: pointer to 1st char
 * @src: pointer to 2nd char
 * @n: integer parameter
 * Return: *dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
