#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - printt length
 * @s: string
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	return n * factorial(n - 1);
}
