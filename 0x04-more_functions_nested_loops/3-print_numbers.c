#include "main.h"
/**
 * print_numbers - print numbers frm zero to nine
 * Return: Void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');
	_putchar('\n');
}