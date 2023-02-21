#include "main.h"

/**
 * print_alphabet_x10 - prints all the alphabet 10 times in lowercase
 * Return: return 1
 */
void print_alphabet_x10(void)
{
	char alpha, num;

	for (num = 1; num <= 10; num++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
