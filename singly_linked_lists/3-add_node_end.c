#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 *add_node_end - adding a new node to the end pf the list_t list
 *@head: first element of list_t list
 *@str: strings of list_t list
 *Return: new_node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp_head;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	if (*head == NULL)
		*head = new_node;
	else
	{
	temp_head = *head;
	while (temp_head->next != NULL)
	{
		temp_head = temp_head->next;
	}
	temp_head->next = new_node;
	new_node->next = NULL;
	}
	return (new_node);
}
