#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * argstostr - Concat argv
 * 
 * @ac: argc
 * @av: argv
 * Return: pointer result
*/
char *argstostr(int ac, char **av)
{
	char *ptr;
	int total_length = 0;
	int index = 0;
	int i, j;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		total_length += srtlen(av[i]);
	ptr = malloc(total_length + ac = 1);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		ptr[index++] = '\n';
	}

	ptr[index] = '\0';
	return (ptr);

}
