#include "main.h"

/**
 * *_strcat - function that concatenates srtings
 * @dest: pointer to 1st char
 * @src: pointer to 2nd char
 * Return: return value of dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
