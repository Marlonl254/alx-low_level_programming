#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - finds string there are digit
 * @str: array to sting of char
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main - Prints the the program's name
 * @argc: Counts the arguments
 * @argv: The Arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count;
	int string_to_int;
	int sum = 0;

	count = 1;

	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			string_to_int = atoi(argv[count]);
			sum += string_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
