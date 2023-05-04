#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long integer
 */
void print_binary(unsigned int n)
{
	if (f > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
