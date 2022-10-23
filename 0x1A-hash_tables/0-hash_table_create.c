#include "hash_tables.h"
/**
 * hash_table_create-function to create a hash table
 *
 * @size:'Size of the array variable'
 *
 * Return:hash table on success, Null on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	if (size == 0)
	{
		return (NULL);
	}

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->array = malloc(sizeof(hash_node_t *) * size);
	if (new == NULL)
	{
		return (NULL);
	}

	new->size = size;

	return (new);
}
