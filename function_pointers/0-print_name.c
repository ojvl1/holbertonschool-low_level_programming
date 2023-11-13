#include "function_pointers.h"
#include <stddef.h>
/**
 *print_name - function that print a namei
 *@name: name that will be print
 *@f: pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
