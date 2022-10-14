#include "main.h"

/**
 * _strncpy - concatene two string
 * @s: char
 * Return: (i)
 */
char *leet(char *s)
{
	char x[] = "A,E,O,T,L";
	char y[] = "4,3,0,7,1";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; x[j] != '\0'; j++)
		{
			if ((s[i] == x[j]) || (s[i] == (x[j] + 32)))
				s[i] = y[j];
		}
	}
	return (s);
}
