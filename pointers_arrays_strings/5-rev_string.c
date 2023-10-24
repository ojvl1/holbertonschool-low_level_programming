#include "main.h"
/**
 *rev_string - reverse a string
 *@s: variable
 */
void rev_string(char *s)
{
	int i, j, l, temp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	j = 0;
	l = i - 1;

	while (j < l)
	{
	temp = s[i];
	s[j] = s[l];
	s[l] = temp;
	j++;
	l--;
	}
}
