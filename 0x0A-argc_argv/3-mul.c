#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 * Return: converted int
 */
int _atoi(char *s)
{
	int length, dig, d, n, i, f;

	i = 0;
	d = 0;
	n = 0;
	length = 0;
	f = 0;
	dig = 0;
	while (s[length] != '\0')
		length++;
	while (i < length && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			dig = s[i] - '0';
			if (d % 2)
				dig = -dig;
			n = n * 10 + dig;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if  (Success), else 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
return (0);
}
