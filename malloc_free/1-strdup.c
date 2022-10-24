#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array
 * @c: char
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *_strdup(char *str)
{
	int i = 0;
	int size = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		size++;
	}
	s = malloc(sizeof(char) * (size +1));
		if (s == NULL)
			return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
