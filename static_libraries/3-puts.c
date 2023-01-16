#include "main.h"

/**
 * _puts - print a string
 * @str: char
 * Return: (i)
 */

void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
