#include "lists.h"
/**
 *add_dnodeint_end - add a new node at the end
 *@head: point to nodes or null
 *@n: int form struct
 *Return: new_node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp_h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		temp_h = *head;
		while (temp_h->next != NULL)
		{
			temp_h = temp_h->next;
		}
		new_node->prev = temp_h;
		temp_h->next = new_node;
	}
	return (new_node);
}
