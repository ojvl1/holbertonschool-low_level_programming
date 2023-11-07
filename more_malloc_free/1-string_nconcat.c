#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *string_nconcat - concatanate two strings
 *@s1: first string
 *@s2: second string
 *@n: greater o equal than s2
 *Return: ptr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	int size;
	unsigned int i, j;
	char *ptr;

	if (s1 != NULL)
		s1_len = strlen(s1);

	if (s2 != NULL)
		s2_len = strlen(s2);

	if (n < s2_len)
	{
		s2_len = n;
	}
	size = s1_len + s2_len;

	ptr = malloc(size * sizeof(char) + 1);

	for (i = 0; i < s1_len; i++)
		ptr[i] = s1[i];
	for (j = 0; j < s2_len; j++)
	{
		ptr[i] = s2[j];
		i++;
	}


	ptr[i] = '\0';

	return (ptr);
}
