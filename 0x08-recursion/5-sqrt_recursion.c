#include "main.h"
/**
 * _sqrt_recursion - Head function
 * @n: integer
 * Return:  integer
 */
int _sqrt_recursion(int n)
{
	return (_squareroot(n, 1));
}
/**
 * _squareroot- function prints the natural squareroot of a number
 * @n: integer
 * @x: integer
 * Return: square root
 */
int _squareroot(int n, int x)
{

	if (n < 0)
		return (-1);
	if ((x * x) > n)
		return (-1);
	if (x * x  == n)
		return (x);

	return (_squareroot(n, x + 1);
}

