#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - create new dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a;

	a = malloc(sizeof(dog_t));
	if (a == NULL)
	{
		free(a->name);
		free(a->owner);
		free(a);
		return (NULL);
	}

	a->name = malloc(strlen(name) + 1);
	if (a->name == NULL)
	{
		free(a->name);
		free(a->owner);
		free(a);
		return (NULL);
	}

	a->owner = malloc(strlen(owner) + 1);
	if (a->owner == NULL)
	{
		free(a->name);
		free(a->owner);
		free(a);
		return (NULL);
	}

	strcpy(a->name, name);
	strcpy(a->owner, owner);

	a->age = age;

	return (a);
}
