#include "main.h"

int main_prime(int n, int i);

/**
 * main_prime - recursive calculation of a prime
 * @n: number to check
 * @i: iterator
 * Return: 1 if prime and zero if not
 */
int main_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (main_prime(n, i - 1));
}

/**
 * is_prime_number - tells if an int is prime or not
 * @n: number to eval
 * Return: 1 if prime zero if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (main_prime(n, n - 1));
}
