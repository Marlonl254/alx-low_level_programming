#include <stdio.h>
#include <stdlib.h>

/**
* main - this functn prnts opcodes
* @argc: nr of argts
* @argv: argts
* Return: 0
*/

int main(int argc, char *argv[])
{
	int b;
	int m;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (char *)main;

	for (m = 0; m < b; m++)
	{
		if (m == b - 1)
		{
			printf("%02hhx\n", ptr[m]);
			break;
		}
		printf("%02hhx ", ptr[m]);
	}
	return (0);
}

