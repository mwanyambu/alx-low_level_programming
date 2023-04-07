#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @index: the index starting from 0 of the bit to be set
 * @n: pointer to the bit
 * Return: 1 else -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	else
	{
		*n &= ~(1ul << index);
		return (1);
	}
}
