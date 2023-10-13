#include "main.h"

/**
 * _isupper - checks for upper characters
 * @c: function parameter
 * Return: 1 if success else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
