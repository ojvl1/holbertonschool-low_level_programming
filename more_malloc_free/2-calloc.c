#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_calloc - allocate memory for an array
 *@ptr: have the size of char
 *Return: ptr
 */
void *_calloc(unsigned int nmed, unsigned int size)
{
	char *ptr;

	if (nmed || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
