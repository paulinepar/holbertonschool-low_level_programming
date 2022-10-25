#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - create array
 * @s1: char
 * @s2: char
 *
 * Return: Nothing.
 */

char *str_concat(char *s1, char *s2)
{
	int i, a, x, b;
	int size = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (a = 0; s2[a] != '\0'; a++)
	{
	}
	size = i + a;

	s = malloc(sizeof(char) * (size + 1));
	if (s == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size - a; x++)
	{
		s[x] = s1[x];
	}
	for (b = 0; b < size - i; b++)
	{
		s[x + b] = s2[b];
	}

	s[x + b] = '\0';
	return (s);
}
