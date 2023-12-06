#include "hash_tables.h"
/**
 *hash_table_create - create a hash table
 *@size: size the node of array 
 *Return: new_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t  *new_table; /*declare a pointer that is the 
				 table of type hash_table_t called new_table */
	unsigned long int i;
	/*create the new_table table */
	new_table = malloc(sizeof(hash_table_t)); 
	if (new_table == NULL)
	{
		return (NULL);
	}
	new_table->array = malloc(sizeof(hash_table_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		 new_table->array[i] = NULL;
	}
	return (new_table);
}
