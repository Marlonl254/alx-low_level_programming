#include <stdio.h>

/**
 * main - entry point of our program
 *
 * Retturn: 0 if success
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
