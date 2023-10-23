#include "main.h"
/**
 * _memset - inserts a specific value into a block of memory
 * @s: starting address of memory to be filled
 * @b: the value
 * @n: number of bytes to be changed
 *
 * Return: The changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
