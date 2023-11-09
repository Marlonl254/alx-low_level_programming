#include "function_pointers.h"

/**
* int_index - this functn returns index
* place if comparison = true, else -1
* @array: array
* @size: elemt in array
* @cmp: ptr to functn of one of the 3
* Return: 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (m = 0; m < size; m++)
	{
		if (cmp(array[m]))
			return (m);
	}
	return (-1);
}

