#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings - function that print strings
 *
 *@separator: string to be printed between the strings
 *@n: the numbers of elements
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *temp_str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		temp_str = va_arg(args, char *);
		if (temp_str == NULL)
		{
			printf ("(nil)");
		}
		else if (temp_str != NULL)
		{
			printf("%s", temp_str);
			if (separator != NULL && i != (n - 1))
			{
				printf ("%s", separator);
			}
		}
	}
	printf ("\n");
}
