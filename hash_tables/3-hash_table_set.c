#include "hash_tables.h"
/**
 *hash_table_set - add an element
 *@ht: hash table I want add or update
 *@key: is the key (can't be an empty string
 *@value: the value associate with the key
 *
 *Return: 0, 1, -1, 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *tmp;
	unsigned long int idx = 0;

	idx = (hash_djb2((const unsigned char *)key) % ht->size);
	new_node = malloc(sizeof(hash_table_t));
	if (new_node == NULL)
	{
		return (-1);
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	if (key == NULL || *key == '\0' || value == NULL || ht == NULL)
	{
		return (0);
	}
	tmp = ht->array[idx];
	while (tmp != NULL)
		if (strcmp(tmp->key, key) == 0)
		{
			tmp->value = strdup(value);
			return (1);
		}
	tmp = tmp->next;
	return (0);
}
