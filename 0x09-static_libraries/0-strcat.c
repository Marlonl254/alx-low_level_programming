#include "main.h"
/**
 *  _strcat - concatenates two strings
 *  @dest: destination i.e entered value
 *  @src: source i.e entered value
 *
 *  Return: void
 */
char * _strcat(char * dest, char * src)
{
	int a;
	int b;
	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
        while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';

	return (dest);

}
