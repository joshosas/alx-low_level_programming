#include "main.h"

/**
 * reverse_array - function reverses elements of an array
 * @a: pointer to parameter
 * @n: number of array elements
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, j = n - 1;
	int rev;

	for (i = 0; i < n; i++)
	{
		rev = a[i];
		a[i] = a[j];
		a[j] = rev;
		j--;
	}
}
