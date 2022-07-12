#include "main.h"

/**
 * _strlen - function calculates length of characters in a string
 * @s: pointer to char
 * Return: length of characters
 */
int _strlen(char *s)
{
       int len = 0;

       while (*s != '\0')
       {
	       s++;
	       len++;
       }
       return (len);
}
