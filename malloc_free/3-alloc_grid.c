#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer
 * @width: int
 * @height: int
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
		if (p[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(p[i]);
				p[i] = NULL;
			}
			free(p);
			p = NULL;
		}
		{
			for (b = 0; b < width; b++)
			{
				p[i][b] = 0;
			}
		}
	}
	return (p);
}
