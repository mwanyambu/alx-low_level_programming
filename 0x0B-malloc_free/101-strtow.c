#include "main.h"
#include <stdlib.h>
int wlen(char *str);
int wcount(char *str);
char **strtow(char *str);
/**
 * wlen - returns the lenghth of the string
 * @str: the string
 * Return: index
 */
int wlen(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}

/**
 * wcount - counts total words in a string
 * @str: the string
 * Return: count
 */
int wcount(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
	{
		len++;
	}
	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += wlen(str + index);
		}
	}
	return (words);
}

/**
 * strtow - splits a string into words
 * @str: the string
 * Return: NULL
 */
char **strtow(char *str)
{
	char **strs;
	int index = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	words = wcount(str);
	if (words == 0)
	{
		return (NULL);
	}
	strs = malloc(sizeof(char *) * (words + 1));
	if (strs == NULL)
	{
		return (NULL);
	}
	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
		{
			index++;
		}
		letters = wlen(str + index);
		strs[w] = malloc(sizeof(char) * (letters + 1));

		if (strs[w] == NULL)
		{
			for (; w >= 0; w--)
			{
				free(strs[w]);
			}
			free(strs);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
		{
			strs[w][l] = str[index++];
		}
		strs[w][l] = '\0';
	}
	strs[w] = NULL;
	return (strs);
}


