#include "main.h"

/**
 * factorial - gets factorial of a num
 * @n: number
 * Return: factorial ans
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
