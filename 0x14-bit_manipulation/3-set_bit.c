#include "main.h"

/**
 * set_bit - sets value of bit to 1 at given index
 * @index: index starting from 0 of the bit you want to set
 * @n: pointer to unsigned long int that bit is set to
 * Return: 1 on success else -1
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
