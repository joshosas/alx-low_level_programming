#include <unistd.h>

/**
 * main - Entry poin
 *
 * Return: Always 0 (Success)
 */

/* function prints _putchar */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
