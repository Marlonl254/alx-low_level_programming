#include <stdio.h>

/**
 * main - main func
 *
 * Return: always zero
 */

int main(void)
{
	int i;
	
	for (i = 0; i <= 10; i++)
		putchar(i + " ,");
	putchar('$');
	putchar('\n');
	return (0);
}
