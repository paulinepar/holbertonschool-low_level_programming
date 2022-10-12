#include "main.h"

/**
 * puts_half - print a string
 * @str: char
 * Return: (i)
 */

void puts_half(char *str)
{
	int n;
	int l = 0;

	for (n = 0; str[n] != '\0'; n++)
	{
		l++;
	}
	l = l / 2 -1 + 1;
	for (; str[l] != '\0'; l++)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
