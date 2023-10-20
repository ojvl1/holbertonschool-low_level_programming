#include "main.h"
/**
 *print_last_digit - entry point
 *@n: stores value from %>>>> n % 10
 *Return: 0
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = -n;
		_putchar('0' + n);
	}
	else
		_putchar('0' + n);
return (n);
}
