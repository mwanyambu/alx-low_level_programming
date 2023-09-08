#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with key
 * @ht: hash table to look into
 * @key: key
 * Return: value else NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *n;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	n = ht->array[index];

	while (n != NULL)
	{
		if (strcmp(n->key, key) == 0)
			return (n->value);
		n = n->next;
	}

	return (NULL);
}
