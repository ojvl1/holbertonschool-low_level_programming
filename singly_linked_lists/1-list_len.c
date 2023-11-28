#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/*
 *list_len - function tha 
 *print the numbers of elements in list_t list
 *@list_t: list of elements
 *Return:  count 
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
