#include "main.h"

/**
 * leet - encodes a string
 * @s: char
 * Return: (i)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
