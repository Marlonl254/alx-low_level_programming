#include <unistd.h>

/**
 * _putchar - writes c into stdout
 * @c: The character which will be printed
 * Return: On success 1.
 * On error. -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

