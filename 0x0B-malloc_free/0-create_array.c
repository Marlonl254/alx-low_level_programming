#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of chars, initializes it with a special 'char'
 * @size: The array size
 * @c: A char value
 * Return: pointer to an array of char
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
