#include "main.h"

/**
 * clear_bit - sets the value of bit to 0 at a specific index
 * @index: index starting fro 0 of the bit to nbe cleared
 * @n: pointer to the bit to be cleared
 * Return: 1 on success else -1
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
