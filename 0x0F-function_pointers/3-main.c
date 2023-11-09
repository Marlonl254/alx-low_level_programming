#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
* main - this functn prnts the outcome.
* @argc: The nr of argts supplied to the program.
* @argv: array of ptr to the argts.
* Return: 0.
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int x;
	int y;
	char *ptr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	ptr = argv[2];
	y = atoi(argv[3]);

	if (get_op_func(ptr) == NULL || ptr[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*ptr == '/' && y == 0) ||
	    (*ptr == '%' && y == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(ptr)(x, y));
	return (0);
}

