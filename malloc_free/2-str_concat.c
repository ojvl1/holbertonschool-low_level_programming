#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 **str_concat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *Return: ptr
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i;
	int j;
	int size1 = 0;
	int size2 = 0;

	if (s1 != NULL)
	{
		size1 = strlen(s1);
	}

	if (s2 != NULL)
	{
		size2 = strlen(s2);
	}

	ptr = malloc(size1 + size2 + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size1; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j < size2; j++)
	{
		ptr[i] = s2[j];
		i++;
	}

	ptr[i] = '\0';

	return (ptr);
}
