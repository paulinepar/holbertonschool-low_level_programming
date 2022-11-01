#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - entry point
 * Description: prints a name
 * @name: name to print
 * @f: pointer to a function
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
	{
		return;
	}
	if (action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
