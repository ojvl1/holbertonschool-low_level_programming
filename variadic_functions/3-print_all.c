#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 *print_all - print anything
 *@format: is a list of types of arguments
 */
void print_all(const char * const format, ...)
{
	char *str;
	unsigned int i = 0, j = 0;
	va_list args;

	va_start(args, format);

	if (format != NULL)
	{
		while (format[i])
		{ j = 0;
			switch (format[i])
			{
				case 'i':
				printf("%i", va_arg(args, int));
					break;
				case 'c':
				printf("%c", va_arg(args, int));
					break;
				case 'f':
				printf("%f", va_arg(args, double));
					break;
				case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				else
				printf("%s", str);
					break;
				default:
					j++;
					break;
			}
				i++;
				if (j != 1 && i < strlen(format))
					printf(", ");
		}
			printf("\n");
			va_end(args);
	}
}
