#include "main.h"

/**
 * *_strncat - function that concatenates srtings
 * @dest: pointer to 1st char
 * @src: pointer to 2nd char
 * @n: integer parameter
 * Return: *dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j = 0;

	for (i = 0; i < 1000; i++)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		j++;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';
	return (dest);
}
