#include "main.h"
/**
 *_strlen - entry point
 *@s: value pointer
 * Return: str
 */
int _strlen(char *s)
{
	int str;

	for (str = 0; s[str] != '\0'; str++)
		return (str);
}
