#include "main.h"

/**
 * flip_bits - prints the number of bits needed to be flipped
 * @n: unsigned long integer num1
 * @m: unsigned long integer num2
 * Return: number of bits needed to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	unsigned long int flip = n ^ m;

	while (flip)
	{
		counter += (flip & 1);
		flip >>= 1;
	}
	return (counter);
}
