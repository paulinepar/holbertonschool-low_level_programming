#include "main.h"

/**
 * _memcpy - copies memory
 * @n : char
 * @src: point
 * @dest: point
 * Return: to the destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
