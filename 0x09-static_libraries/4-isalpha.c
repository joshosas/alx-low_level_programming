#include "main.h"

/**
 * _isalpha - function checks for lower and upper case letters
 * @c: character to check
 * Return: 0 or 1
 */
/* _isalpha: function checks for alphabets */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
