#include "main.h"

/**
 * print_array - print element of on array
 * @a: char
 * @n: char
 * Return: (i)
 */

void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < n ; l++)
	{
		printf("%d", a[l]);
	if (l < n-1)
		printf(", ");
	}
	printf("\n");
}
