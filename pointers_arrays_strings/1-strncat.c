#include "main.h"
/**
 **_strncat - entry point
 *@dest: will have src string
 *@src: will append to dest string
 *@n: number of size bytes to
 *analyze before append
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && n > 0)
	{
		dest[i + j] = src[j];
		j++;
		i++;
		n--;
	}
	return (dest);
}
