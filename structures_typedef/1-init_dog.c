#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize variable
 * @name: char
 * @age: float
 * @owner: char
 * @d: pointer
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
