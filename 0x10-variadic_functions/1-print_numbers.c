#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - this functn prnts nrs, followed \n.
* @separator: The str to be prntd btw nrs.
* @n: The nr of ints passed to the functn.
* @...: A var nr of nrs to be prntd.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int d;

	va_start(nums, n);

	for (d = 0; d < n; d++)
	{
		printf("%d", va_arg(nums, int));

		if (d != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}

