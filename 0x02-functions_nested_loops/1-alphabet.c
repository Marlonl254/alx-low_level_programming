#include "main.h"

/**
 * print_alphabet - function to printn aplhabets in lower cae
 *
 * Return: always zero
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
