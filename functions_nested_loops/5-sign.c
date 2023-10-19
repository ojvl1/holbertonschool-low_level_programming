#include "main.h"
/**
 *print_sign - entry point
 *@n: declaration
 *Return: 1, 0, -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	n = 1;
	}

	if (n == 0)
	{
	_putchar('0');
	n = 0;
	}

	if (n < 0)
	{
	_putchar('-');
	n = -1;
	}

	return (n);
}
