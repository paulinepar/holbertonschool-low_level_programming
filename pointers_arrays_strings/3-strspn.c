#include "main.h"

/**
 * _strspn - gets the length
 * @s: string
 * @accept: char
 *
 * Return: pointer to spot in s with c or null
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n, t;

	for (n = 0; s[n] != '\0'; n++)
	{
		for (t = 0; accept[t] != '\0'; t++)
		{
			if (s[n] == accept[t])
				break;
		}
		if (!(accept[t]))
			break;
	}
		return (n);
}
