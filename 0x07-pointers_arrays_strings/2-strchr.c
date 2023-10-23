#include "main.h"
/**
 * _strchr - Locates a char in the string
 * @s: input string
 * @c: character to retrieve
 * Return: zero if success
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
