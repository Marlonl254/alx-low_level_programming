#include "variadic_functions.h"
#include <stdarg.h>


/**
* sum_them_all - this functn returns the sum of paramters.
* @n: nr of paramters to the functn.
* @...: A nr of paramters to calc the sum of.
* Return: If n == 0 - 0. else the sum of parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int m, sum = 0;

	va_start(ap, n);

	for (m = 0; m < n; m++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

