#include "lists.h"
#include <stdlib.h>
/**
 *free_list - free a list_t list
 *@head: pointer to nodes in list_t list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
