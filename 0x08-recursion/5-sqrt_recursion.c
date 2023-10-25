#include "main.h"

int main_func(int n, int i);
/**
 * main_func - recurses to get the natural sqrt of a numm
 * @n: number to cal sqrt
 * @i: iterator
 * Return: the resulting sqrt
 */

int main_func(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (main_func(n, i + 1));
}

/**
 * _sqrt_recursion - returns natural sqrt of a num
 *@n: number to get sqrt
 *Return: sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (main_func(n, 0));
}
