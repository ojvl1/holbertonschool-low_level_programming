#include "main.h"
/**
 *swap_int - entry point
 *@a: pointer value
 *@b: pointer value
 *Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
