#include <stdio.h>

/**
 * main - Entry point of our program
 *
 * Return: 0 when successful
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
                putchar(i);
	putchar('\n');
	return (0);
}
