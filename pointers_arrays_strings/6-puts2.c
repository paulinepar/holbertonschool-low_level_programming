#include "main.h"

/**
 * print_rev - print a string
 * @s: char
 * Return: (i)
 */
void puts2(char *str)
{
	int h;
	int l = 0;

	for (h = 0; str[h] != '\0'; h++)
	{
		l++;
	}
	for (h = 0; h <= l - 1; h += 2)
	{
		_putchar(str[h]);
	}
	_putchar('\n');
}
