#include "main.h"

/**
 * flip_bits - the below prog counts the nr of bits to
 * change to get from one nr to another
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: number of bits to change
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int s, mbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (s = 63; s >= 0; s--)
	{
		current = exclusive >> s;
		if (current & 1)
			mbit++;
	}

	return (mbit);
}

