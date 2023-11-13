#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 *array_iterator - iteration of a array
 *@array: elements
 *@size: of array
 *@action: print the numbers
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL || size == 0)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
