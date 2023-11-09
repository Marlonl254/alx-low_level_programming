#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - this functn prnts strs, followed \n.
* @separator: The str to be prntd btwn strs.
* @n: The nr of strs passed to functn.
* @...: A var nr of strs to be prntd.
* Description: If NULL, its not prntd.
* If strs is NULL, (nil) is prntd.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *ptr;
	unsigned int d;

	va_start(strings, n);

	for (d = 0; d < n; d++)
	{
		ptr = va_arg(strings, char *);

		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);

		if (d != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}

