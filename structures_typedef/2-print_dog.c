#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print struct dog
 * @d: pointer
 * Return: Always 0.
 */

void print_dog(struct dog *d)
{

	if (d->owner == NULL)
	{
		printf("(nil)");
	}
	else
		printf("Poppy");

	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
		printf("Name: Poppy");

	if (d == NULL)
	{
		return;
	}
}
