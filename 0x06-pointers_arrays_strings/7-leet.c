#include "main.h"

/**
 * leet - encodes string
 * @s: pointer to character parameters
 * Return: *s
 */

char *leet(char *s)
{
	int i;
	int j;
	char str1[] = "aeotl";
	char STR1[] = "AEOTL";
	char enc[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == str1[j] || s[i] == STR1[j])
			{
				s[i] = enc[j];
				break;
			}
		}
	}
	return (s);
}
