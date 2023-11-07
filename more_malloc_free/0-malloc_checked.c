#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - allocate using malloc
 *@b: this was multiple with size of char
 *Return: pointer to allocate memory
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	if (b == 0)
		exit(98);

	ptr = malloc(sizeof(char) * b);

	if (ptr == NULL)
		exit(98);

	return (ptr);

}
