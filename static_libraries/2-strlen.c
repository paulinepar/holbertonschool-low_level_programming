#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: int
 * Return: (i)
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0';)
	{
		i += 1;
	}
	return (i);
}
