#include "main.h"

/**
 * more_numbers - It prints numbers frm 0 - 14
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
