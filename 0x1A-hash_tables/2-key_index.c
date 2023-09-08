#include "hash_tables.h"

/**
 * key_index - index of key
 * @key: key
 * @size: size of the array of the hash table
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int c = hash_djb2(key);

	unsigned long int index = c % size;

	return (index);
}
