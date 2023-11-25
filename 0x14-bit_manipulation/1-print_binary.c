#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _pwr - func calculates (base ^ power)
 * @base: base of the exponent
 * @powr: power of the exponent
 *
 * Return: value of (base ^ power)
 */

unsigned long int _pwr(unsigned int base, unsigned int powr)
{
	unsigned long int mel;
	unsigned int m;

	mel = 1;
	for (m = 1; m <= powr; m++)
		mel *= base;
	return (mel);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int dvisr, cheq;
	char flip;

	flip = 0;
	dvisr = _pwr(2, sizeof(unsigned long int) * 8 - 1);
	while (dvisr != 0)
	{
		cheq = n & dvisr;
		if (cheq == dvisr)
		{
			flip = 1;
			putchar('1');
		}
		else if (flip == 1 || dvisr == 1)
		{
			putchar('0');
		}
		dvisr >>= 1;
	}
}
