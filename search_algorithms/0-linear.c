#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * linear_search - search for a value
 * @array : array of integers
 * @size : size of array
 * @value : value of array
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || !value)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		return (i);
	}
	return (-1);
}
