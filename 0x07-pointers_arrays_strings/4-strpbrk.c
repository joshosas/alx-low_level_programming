#include "main.h"

/**
 * *_strpbrk - function searches for a char in a string
 * @s: string
 * @accept: character
 * Return: pointer to byte or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
