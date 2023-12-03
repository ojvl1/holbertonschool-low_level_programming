#include "lists.h"
/**
 *dlistint_len - fucntion that returns the number of elements
 *@h: indicate the first element on dlistint_t
 *Return: count
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
