#include "main.h"

/**
 * _strncpy - concatene two string
 * @src: char
 * @dest: char
 * @n: char
 * Return: (i)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int k;

	for (k = 0; dest[k] != '\0'; k++)
	{
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
