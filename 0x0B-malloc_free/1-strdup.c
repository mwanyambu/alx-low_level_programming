#include < stdlib.h>
#include "main.h"

/**
 * _strdup - copies a string
 * @s: duplicate
 * Return: pointer
 */
char *_strdup(char *s)
{
	char *dup;
	int a, b = 0;

	if (s == NULL)
		return (NULL);
	a = 0;

	while (s[a] != '\0')
		a++;

	dup = malloc(sizeof(char) * (a + 1));

	if (dup == NULL)
		return (NULL);

	for (b = 0; dup[b]; b++)
		dup[a] = s[b];
	return (dup);
}
