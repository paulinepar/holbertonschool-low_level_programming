#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print struct dog
 * @d: pointer
 * Return: Always 0.
 */

void print_dog(struct dog *d)
{

	if (d)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)");
		}
		else if (d->name != NULL)
			printf("Name: %s\n", d->name);

		else if (d->age != NULL)
			printf("Age: %f\n", d->age);

		else if (d->owner == NULL)
			printf("Owner: (nil)");

		else if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
	}
}
