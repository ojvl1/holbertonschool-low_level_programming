#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 *add_node - adding a new node at the beginning of a list_t list
 *@head: a double pointer which is used to modify the head of the original list
 *@str: pointer to the string
 *Return: new_code
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free (new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free (new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
