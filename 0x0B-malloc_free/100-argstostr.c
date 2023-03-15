#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates arguments
 * @ac: integer argument
 * @av: string argument
 * Return: pointer to new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int count = 0, i = 0, j = 0, k = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			count++;
			j++;
		}
		i++;
	}
	count = count + ac + 1;
	str = malloc(sizeof(char) * count);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	return (str);
}

