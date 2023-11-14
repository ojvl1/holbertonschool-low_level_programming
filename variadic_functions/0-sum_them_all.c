#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - function of all sum
 *
 *@n: int element
 *Return: n
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ele;

	if (n == 0)
	{
		return (0);
	}

	va_start(ele, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ele, int);
	}

	va_end(ele);
	return (sum);
}
