#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	int i = 0, j;
	char *m;

	if (!str)
		return (NULL);

	while (*(str + i))
		i++;
	i++;

	m = malloc(sizeof(char) * i);
	if (m == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		m[j] = str[j];

	return (m);
}
