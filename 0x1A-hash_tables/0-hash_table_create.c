#include "hash_tables.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * hash_table_create - Create a hash table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created hash table or NULL otherwise
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
		return (NULL);

	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->size = size;

	return (new_table);
}
