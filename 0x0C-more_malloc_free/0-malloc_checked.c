#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - the function returns ptr to all mem.
 * @b: unit int
 * Return: array
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
