#include "hash_tables.h"

/**
 * shash_table_create - creates new hash table
 * @size: size of hash table
 * Return: pointer to hash table else NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *nw_shtable = NULL;
	unsigned long int x;

	nw_shtable = malloc(sizeof(shash_table_t));

	if (nw_shtable == NULL)
		return (NULL);

	nw_shtable->size = size;

	nw_shtable->array = malloc(sizeof(shash_node_t *) * size);
	if (nw_shtable->array == NULL)
	{
		free(nw_shtable);
		return (NULL);
	}
	for (x = 0; x < size; x++)
		nw_shtable->array[x] = NULL;
	
	nw_shtable->shead =  NULL;
	nw_shtable->stail = NULL;

	return (nw_shtable);
}

/**
 * shash_table_get - retrieves a value from a specified key
 * @ht: hash table
 * @key: key
 * Return: value else NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int i;
	shash_node_t *n;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	i = key_index((const unsigned char *)key, ht->size);
	n = ht->array[i];

	while (n != NULL)
	{
		if (strcmp(n->key, key) == 0)
		{
			return (n->value);
		}
		n = n->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints hash table
 * @ht: hash table
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *n;
	int i = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	n = ht->shead;
	while (n != NULL)
	{
		if (i == 1)
		{
			printf(", ");
		}
		printf("'%s': '%s'", n->key, n->value);
		i = 1;
		n = n->next;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints hash table in reverse
 * @ht: hash table
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *n;
	int i = 0;

	if (ht ==  NULL)
	{
		return;
	}
	printf("{");
	n = ht->stail;
	while (n != NULL)
	{
		if (i == 1)
		{
			printf(", ");
		}
		printf("'%s': '%s'", n->key, n->value);
		i = 1;
		n = n->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - helps to free memory
 * @ht: hash table
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *n, *nxt;
	unsigned long int x;

	if (ht == NULL)
	{
		return;
	}
	for (x = 0; x < ht->size; x++)
	{
		n = ht->array[x];
		while (n != NULL)
		{
			nxt = n->next;
			free(n->key);
			free(n->value);
			free(n);
			n = nxt;
		}
	}
	free(ht->array);
	free(ht);
}

/**
 * shash_table_set - adds keys and values to hash table
 * @ht: hash table 
 * @key: key
 * @value: value attached to key
 * Return: 1 else 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *n, *nw, *prev;
	unsigned long int i;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	n = ht->array[i];

	while (n != NULL)
	{
		if (strcmp(n->key, key) == 0)
		{
			free(n->value);
			n->value = strdup(value);
			return (1);
		}
		n = n->next;
	}
	nw = malloc(sizeof(shash_node_t));
	if (nw == NULL)
		return (0);

	nw->key = strdup(key);
	nw->value = strdup(value);
	nw->next = ht->array[i];
	ht->array[i] = nw;

	if (ht->shead == NULL || strcmp(nw->key, ht->shead->key) < 0)
	{
		nw->sprev = NULL;
		nw->snext = ht->shead;
		if (ht->shead != NULL)
		{
			ht->shead->sprev = nw;
		}
		ht->shead = nw;
		if (ht->stail == NULL)
			ht->stail = nw;
	}
	else
	{
		prev = ht->shead;
		while (prev->snext != NULL && strcmp(nw->key, prev->snext->key) >= 0)
		{
			prev = prev->next;
		}
		nw->sprev = prev;
		nw->snext = prev->snext;
		if (prev->snext != NULL)
			prev->snext->sprev = nw;
		else
			ht->stail = nw;

		prev->snext = nw;
	}
	return (1);
}
