#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: string to count length
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int strlength = 0;

	if (*s)
	{
		strlength++;
		strlength += _strlen_recursion(s + 1);
	}
	return (strlength);
}
