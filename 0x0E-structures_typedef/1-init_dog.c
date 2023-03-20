#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: initial
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		a->owner = owner;
	}
}
