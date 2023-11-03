#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Function that allocates memory.
 * @b: the amount of bytes.
 *
 * Return: A pointer to the allocated memory.
 * Incase malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
