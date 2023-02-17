#include <stdio.h>
/**
 * main - prints the alphabet
 * Return: returns 0
 */
int main(void)
{
	char ch;
	for(int ch = 'a'; ch < 'z'; ch++)
		putchar(tolower(ch));
	putchar('\n');
	return (0)
}
