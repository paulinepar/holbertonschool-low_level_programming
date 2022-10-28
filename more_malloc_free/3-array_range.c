#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *array_range - entry point
 * @min: min integers
 * @max: maximum of integers
 * Description: creates an array of integers
 *Return: a pointer
 */
int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;
	p = malloc(size * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		p[i] = min;
		min += 1;
	}
	return (p);
}
