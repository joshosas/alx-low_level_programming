#include "main.h"

/**
 * _atoi - int
 * @s: pointer
 * Return: int
 */
int _atoi(char *s)
{
	int i, res = 0;
	int sign = -1;
	int brk = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign = sign * -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10;
			res -= (s[i] - '0');
			brk = 1;
		}
		else if (brk == 1)
			break;
	}
	res = sign * res;
	return (res);
}
