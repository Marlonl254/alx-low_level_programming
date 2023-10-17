#include "main.h"

/**
 * swap_int - This function swaps the variable values
 * @a: pointer variable
 * @b: pointer variable
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
