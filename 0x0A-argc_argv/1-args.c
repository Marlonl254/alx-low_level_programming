#include <stdio.h>
#include "main.h"
/**
 * main- prints the num of arg passed to it
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 if successs
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d",argc-1);
	printf("\n");
	return (0);
}
