#include <stdio.h>

/**
 * main - main func
 *
 * Return: 0 if success
 */

int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
