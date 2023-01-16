#include "main.h"

/**
 * _strcat - concatenats two strings
 * @dest: char
 * @src: char
 * Return: (i)
 */

char *_strcat(char *dest, char *src)
{
	int n;
	int i;

	for (n = 0; dest[n] != '\0'; n++)
	{
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[n + i] = src[i];
	}
	dest[n + i] = '\0';
	return (dest);
}
