#include "3-calc.h"


int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - this functn returns the sum of 2 no.
* @a: 1st  no.
* @b: 2nd  no.
* Return: sum of a and b.
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - this functn returns the diff of 2 no.
* @a: 1st no.
* @b: 2nd no.
* Return: diff of a and b.
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - this functn returns the result of 2 no.
* @a: 1st no.
* @b: 2nd no.
* Return: result of a and b.
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - this functn returns the division of 2 no.
* @a: 1st no.
* @b: 2nd no.
* Return: The outcome of a and b.
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - this functn returns the remainder of 2 no.
* @a: 1st no.
* @b: 2nd no.
* Return: The remainder.
*/
int op_mod(int a, int b)
{
	return (a % b);
}

