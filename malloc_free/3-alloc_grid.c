#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *alloc_grid - returns to a 2 dimensional array of integers
 *@width: size of second dimension
 *@height: size of first dimension
 *Return: ptr
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{

	ptr[i] = (int *)malloc(width * sizeof(int));

	if (ptr[i] == NULL)
	{
		return (NULL);

	for (j = 0; j < i; j++)
	{
		free(ptr[j]);
	}
		free(ptr);
		return (NULL);
	}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
