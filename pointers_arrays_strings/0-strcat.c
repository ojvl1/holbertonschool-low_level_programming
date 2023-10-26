#include "main.h"
/**
 **_strcat - entry point
 *@dest: will have the src string
 *@src: will append to dest string
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; ++i)

	for (j = 0; src[i] != '\0'; ++j, ++i)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
