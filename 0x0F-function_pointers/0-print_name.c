#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - this functn will prt name using pointer
* @name: str. that adds
* @f: ptr to functn
* Return: 0.
**/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;


	f(name);
}

