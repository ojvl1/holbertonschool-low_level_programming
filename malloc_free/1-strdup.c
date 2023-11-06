#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *_strdup - function returns a pointer to a nem string
 *@str: the string that has to be copied
 *Return: ptr
 */
char *_strdup(char *str)
{
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	prt = malloc(sizeof(str));

	if (ptr == NULL)
	{
		return (NULL);
	}

	strcpy(ptr, str);

	return (ptr);
}
