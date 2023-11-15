#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 *print_numbers - print the array of numbers
 *
 *@separator: the string to be printed between numbers
 *@n: is the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, nums;

	va_list num;

	va_start(num, n);



	for (i = 0; i < n; i++)
	{
		nums  = va_arg(num, int);
		printf("%d", nums);
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
