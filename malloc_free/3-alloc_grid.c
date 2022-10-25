#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - create array
 * @s1: char
 * @s2: char
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int i, b;
	int **p;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(int *) * height);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		for (b = 0; b < 3; b++)
		{
			p[i][b] = 0;
		}
	}
	return (p);
}
