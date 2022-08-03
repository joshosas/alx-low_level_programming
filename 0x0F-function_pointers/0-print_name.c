#include "function_pointers.h"

/**
 * print_name - function prints name
 * @name: pointer parameter
 * @f: function pointer parameter
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
