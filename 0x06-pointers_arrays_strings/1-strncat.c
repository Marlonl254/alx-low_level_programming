#include "main.h"
#include <string.h>
/**
 * _strncat - Concatenates based on the value of n
 * @dest: destination string
 * @src: source string
 * @n: Number of str to concat
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[destlen + i] = *src;
		src++;
	}
	dest[destlen + i] = '\0';
	return (dest);
}
