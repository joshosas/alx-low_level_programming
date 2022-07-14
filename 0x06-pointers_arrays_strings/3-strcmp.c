#include "main.h"

/**
 * _strcmp - function compares strings
 * @s1: 1st parameter
 * @s2: 2nd paraneter
 * Return: 0 or 1
 */

int _strcmp(char *s1, char *s2)
{
	int i, x;

	for (i = 0; s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'); i++)
	{
	}
	x = s1[i] - s2[i];
	return (x);
}
