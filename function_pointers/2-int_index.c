#include "function_pointers.h"
#include <stddef.h>
/**
 *int_index - return the index of the first element
 *
 *@array: of the numbers
 *@size: of element
 *@cmp: comparation of each element
 *Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size == 0 || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}

	return (-1);
}
