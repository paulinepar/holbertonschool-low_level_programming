#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @n: the size to allocate
 * @s1:
 * @s2:
 * Return: Nothing.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = 0;
	unsigned int i, j;
	char *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len++;

	p = malloc(sizeof(char) * (len + n + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		p[i] = s1[i];

	for (j = 0; j < n && s2[j]; j++)
		p[len + j] = s2[j];

	p[len + j] = '\0'
	return (p);
}
