#include "main.h"

/**
 * _strncpy - concatene two string
 * @n: char
 * Return: (i)
 */

char *cap_string(char *n)
{
	int i, x;
	char ca[] = "\n\t,' ';.!\"?(){}";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (x = 0; ca[x] != 0 ; x++)
		{
			if (n[i] == ca[x] && n[i + 1] != '\0')
				if (n[i + 1] >= 'a' && n[i + 1] <= 'z')
				n[i + 1] -= 32;
		}
	}
	return (n);
}
