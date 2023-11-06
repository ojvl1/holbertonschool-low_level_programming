#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *create_array - array of characters
 *@size: size of char
 *@c: charters
 *Return: ptr
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
