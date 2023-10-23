#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: String value
 * @accept: search cretaria
 * Return: matched characters
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
	return ('\0');
}

