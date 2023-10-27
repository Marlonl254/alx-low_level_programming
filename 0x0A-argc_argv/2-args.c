#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main- prints the num of arg passed to it
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 if successs
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
