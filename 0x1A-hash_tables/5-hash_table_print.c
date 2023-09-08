#include "hash_tables.h"

/**
 * hash_table_print - prints a tables
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *n;
	int i = 1;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		n = ht->array[x];

		while (n != NULL)
		{
			if (!i)
				printf(", ");
			printf("'%s': '%s'", n->key, n->value);
			i = 0;
			n = n->next;
		}
	}
	printf("}\n");
}
