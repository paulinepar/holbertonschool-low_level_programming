#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - define new type
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
		return (NULL);

	name = malloc(strlen(name) + 1);
	if (name == NULL)
		return (NULL);

	owner = malloc(strlen(owner) + 1);
	if (owner == NULL)
		return (NULL);

	strcpy(dog->name, name);
	strcpy(dog->owner, owner);

	dog->age = age;

	return (a);
