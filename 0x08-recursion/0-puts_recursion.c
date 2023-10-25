#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: string to print
 * Return: 0 if success
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
