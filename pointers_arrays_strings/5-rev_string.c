#include "main.h"

/**
 * rev_string - reverse a string
 * @s: char
 * Return: (i)
 */
void rev_string(char *s)
{
	int i = 0;
	int b = 0;
	char tmp;

	while (s[i] != '\0')
	{
		i++;
	}

	i = i - 1;
	while (i >= b)
	{
		tmp = s[b];
		s[b] = s[i];
		s[i] = tmp;
		i--;
		b++;
	}
}
