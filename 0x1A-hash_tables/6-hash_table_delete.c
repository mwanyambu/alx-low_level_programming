#include "hash_tables.h"
/**
 * hash_table_delete - function to delete hash table
 * @ht: hasth table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *n, *tmp;

	if (ht == NULL)
	{
		return;
	}
	for (x = 0; x < ht->size; x++)
	{
		n = ht->array[x];

		while (n != NULL)
		{
			tmp = n;
			n = n->next;
			free(tmp->key);
			free(tmp->value);

			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
