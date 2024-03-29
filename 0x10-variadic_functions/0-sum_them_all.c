#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum all parameters
 * @n: args
 * Return: sum or if n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	if (n)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(ap, int);
		}
		va_end(ap);
	}
	return (sum);
}

