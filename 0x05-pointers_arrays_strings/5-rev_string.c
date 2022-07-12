#include "main.h"

/**
 * rev_string - function reverses a string
 * @s: pointer to string
 * Return: nothing
*/
void rev_string(char *s)
{
	char *t = s;
	char n[50];
	short count = 0;

	while (*s != '\0')
	{
		n[count] = *s;
		s++;
		count++;
	}
	count = 0;

	while (s > t)
	{
		s--;
		*s = n[count];
		count++;
	}
}
