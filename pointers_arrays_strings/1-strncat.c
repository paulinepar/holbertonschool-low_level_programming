#include "main.h"

/**
 * _strcpy - print a string
 * @src: char
 * @dest: char
 * @n: char
 * Return: (i)
 */

char *_strncat(char *dest, char *src, int n)
{
		int i;
		int k;

		for (k = 0; dest[k] != '\0'; k++)
		{
		}
		for (i = 0; i < n && src[i] != '\0'; i++)
		{
			dest[k + i] = src[i];
		}
		dest[k + i] = '\0';
		return (dest);
}
