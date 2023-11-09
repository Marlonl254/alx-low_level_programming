#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - this function prts each array elem on a \n
* @array: array
* @size: no. of elem to prt
* @action: ptr to prt in reg or hex
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m;

	if (array == NULL || action == NULL)
		return;

	for (m = 0; m < size; m++)
	{
		action(array[m]);
	}
}

