#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - entry point
 * Description: prints a name
 * @name: name to print
 * @f: pointer to a function
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
