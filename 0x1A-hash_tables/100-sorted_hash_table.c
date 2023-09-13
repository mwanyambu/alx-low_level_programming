#include "hash_tables.h"

/**
 * shash_table_create - creates new hash table
 * @size: size of hash table
 * Return: pointer to hash table else NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *nw_shtable;
	unsigned long int x;

	nw_shtable = malloc(sizeof(shash_table_t));

	if (nw_shtable == NULL)
		return (NULL);

	nw_shtable->size = size;

	nw_shtable->array = malloc(sizeof(shash_node_t *) * size);
	if (nw_shtable->array == NULL)
	{
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

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}

	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);

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

	if (ht == NULL || ht->array == NULL)
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
	shash_node_t *n, *prev;
	unsigned long int i;
	char *val;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val = strdup(value);
	if (val == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	prev = ht->shead;

	while (prev != NULL)
	{
		if (strcmp(prev->key, key) == 0)
		{
			free(prev->value);
			prev->value = val;
			return (1);
		}
		prev = prev->next;
	}
	n = malloc(sizeof(shash_node_t));
	if (n == NULL)
	{
		free(val);
		return (0);
	}

	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(val);
		free(n);
		return (0);
	}

	n->value = val;
	n->next = ht->array[i];
	ht->array[i] = n;

	if (ht->shead == NULL)
	{
		n->sprev = NULL;
		n->snext = NULL;
		ht->shead = n;
		ht->stail = n;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		n->sprev = NULL;
		n->snext = ht->shead;
		ht->shead->sprev = n;
		ht->shead = n;
	}
	else
	{
		prev = ht->shead;
		while (prev->snext != NULL && strcmp(prev->snext->key, key) < 0)
			prev = prev->snext;
		n->sprev = prev;
		n->snext = prev->snext;
		if (prev->snext == NULL)
		{
			ht->stail = n;
		}
		else
			prev->snext->sprev = n;
		prev->snext = n;
	}
	return (1);
}
