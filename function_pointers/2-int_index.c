#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - entry point
 * @array: array
 * @size: size of array
 * @cmp: pointer of function
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}
	if (i < size)
	{
		return (1);
	}
	return (-1);
}
