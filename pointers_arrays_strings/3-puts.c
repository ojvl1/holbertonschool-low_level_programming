#include "main.h"
/**
 *_puts - entry point
 *@str: string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
		_putchar(*str);
	}

	_putchar('\n');
}
