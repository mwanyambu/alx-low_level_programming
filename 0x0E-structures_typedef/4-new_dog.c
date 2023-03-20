#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds the length of a string
 * @str: string
 * Return: len
 */
int _strlen(char *str)
{
	int len = 0;

	while (str++)
	{
		len++;
	}
	return (len);
}

/**
 * strcopy - copies a string
 * @dest: the buffer
 * @src: the source
 * Return: pointer
 */
char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;

	if (name == NULL || age < 0 ||owner == NULL)
	{
		return (NULL);
	}
	puppy = malloc(sizeof(dog_t));
	if (puppy == NULL)
	{
		return (NULL);
	}
	puppy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (puppy->name == NULL)
	{
		free(puppy);
		return (NULL);
	}
	puppy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (puppy->owner == NULL)
	{
		free(puppy->name);
		free(puppy);
		return (NULL);
	}
	puppy->name = _strcopy(puppy->name, name);
	puppy->age = age;
	puppy->owner = _strcopy(puppy->owner, owner);

	return(puppy);
}
