#include "main.h"
#include <stdio.h>

/**
 * _moon - print recurse
 * @c: string
 * @n: string
 * Return: 0
 */

int _moon( int c, int n)
{
	if (c * c == n)
	{
		return (c);
	}
	else if (c * c < n)
	{
		return(_moon(c + 1, n));
	}
	else
		return (-1);
}

/**
 * _sqrt_recursion - print natural square
 * @n: string
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	return (_moon(1, n));
}
