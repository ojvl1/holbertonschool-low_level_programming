#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_list - print all the the elements of a list
 *@h: pointer to the list_t list to print
 *Return: count
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		h = h->next;
		count++;
	}
	return (count);
}
