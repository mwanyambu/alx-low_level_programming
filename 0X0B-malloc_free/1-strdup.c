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
	unsigned int a, len;

	a = 0;
	len = 0;

	if (s == NULL)
		return (NULL);

	while (s[len])
		len++;
	dup = malloc(sizeof(dup) * (len + 1));

	if (dup == NULL)
		return (NULL);
	while ((dup[a] = s[a]) != '\0')
		a++;
	return (dup);
}
