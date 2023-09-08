#include "hash_tables.h"

/**
 * new_node - create new node
 * @key: key of node
 * @value: value of node
 * Return: new_node
 */

hash_node_t *new_node(const char *key, const char *value)
{
	hash_node_t *hash_new = malloc(sizeof(hash_node_t));

	if (hash_new == NULL)
	{
		return (NULL);
	}
	hash_new->key = strdup(key);
	hash_new->value = strdup(value);
	hash_new->next = NULL;
	return (hash_new);
}

/**
 * hash_table_set - sets key vals in hash table
 * @ht: hash table
 * @key: key
 * @value: value asociated wih key
 * Return: 1 else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hash_new, *nw;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	nw = ht->array[index];
	while (nw != NULL)
	{
		if (strcmp(nw->key, key) == 0)
		{
			free(nw->value);
			nw->value = strdup(value);
			return (1);
		}
		nw = nw->next;
	}
	hash_new = new_node(key, value);
	if (!hash_new)
	{
		return (0);
	}
	hash_new->next = ht->array[index];
	ht->array[index] = hash_new;

	return (1);
}
