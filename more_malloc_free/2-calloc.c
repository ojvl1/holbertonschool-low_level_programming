#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *_calloc - allocate memory for an array
 *@nmemd: number of elements
 *@size: bytes of each elements of nmemb
 *Return: ptr
 */
void *_calloc(unsigned int nmemd, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemd == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemd * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemd * size; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
