#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * pass_len - length of password
 * Return: 0
 */
#define pass_len 10

int main(void)
{
	srand(time(NULL));
	char password[pass_len +1];

	for (int i =0; i < pass_len; i++)
	{
		password[i] = ' ' + rand() % ( '~'- ' ' + 1);
	}
	password[pass_len] = '\0';
	printf("%s\n", password);
	return (0);
}
