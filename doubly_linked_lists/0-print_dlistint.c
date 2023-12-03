#include "lists.h"
/**
 *print_dlistint - print all the elements of dlistint_t list
 *@h: indicates what is the first element
 *Return: count
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
