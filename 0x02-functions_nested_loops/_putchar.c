#include <unistd.h>

/**
 * _putchar - displays one char to stdout
 * Return: returns 1
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
