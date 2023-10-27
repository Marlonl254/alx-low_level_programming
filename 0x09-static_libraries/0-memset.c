#include "main.h"
/**
 * _memset - It fills a block of memory with a specified value
 * @s: The start address of memory to be filled
 * @b: The desired value
 * @n: The number of bytes to be changed
 *
 * Return: changed array
 */

char * _memset(char * s, char b, unsigned int n)
{
	int k;

	for (k = 0; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
