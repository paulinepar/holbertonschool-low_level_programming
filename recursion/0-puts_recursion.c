#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - print chessboard
 * @a: string
 * Return: 0
 */

void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		_putchar (*s);
		_puts_recursion(s + 1);
	}
	else
	_putchar ('\n');
}
