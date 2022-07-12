#include "main.h"

/**
 * swap_int - resets parmeter to 98
 * @a: pointer to first int
 * @b: pointer to second int
 */

void swap_int(int *a, int *b)
{
	int store = *a;

	*a = *b;
	*b = store;
}
