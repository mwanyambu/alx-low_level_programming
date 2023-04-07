#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index: the index starting from 0 of the bit you want to set
 * @n: the bit to be set
 * Return: 1 else -1 if error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	else
	{
		*n ^= (1 << index);
		return (1);
	}
}
