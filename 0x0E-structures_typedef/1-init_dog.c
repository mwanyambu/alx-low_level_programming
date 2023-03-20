#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: initial
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: nothing
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
