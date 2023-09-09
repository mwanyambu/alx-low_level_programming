#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a new hash table
 * @size: size of the array
 * Return: pointer to new hash table else NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *nw_htable;
	unsigned long int x;

	nw_htable = malloc(sizeof(hash_table_t));

	if (nw_htable ==  NULL)
		return (NULL);
	
	nw_htable->size = size;
	nw_htable->array = malloc(sizeof(hash_node_t *) * size);

	if (nw_htable->array == NULL)
	{
		free(nw_htable);
		return (NULL);
	}
	for (x = 0; x < size; x++)
		nw_htable->array[x] = NULL;
	return (nw_htable);
}
