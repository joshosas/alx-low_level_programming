#include "main.h"

/**
 * leet - encodes string into 1337
 * @s: pointer to character parameters
 * Return: *s
 */

char *leet(char *s)
{
	int i;
	int j;
	char str[] = "ol_ea_t";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			if (s[i] == str[j] || s[i] == (str[j] - 32))
			{
				s[i] = j + '0';
			}
		}
	}
	return (s);
}
