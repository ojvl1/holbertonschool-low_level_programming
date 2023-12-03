#include "lists.h"
/**
 *add_dnodeint - add a new node to the beginning
 *@head: a pointer to node or a null
 *@n: int from the struct
 *Return: new_node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	int cp_n = n;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = cp_n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (new_node);
}
