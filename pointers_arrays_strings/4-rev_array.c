#include "main.h"

/**
 * reverse_array - reverse the content
 * @a: char
 * @n: char
 * Return: (i)
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int b = 0;
	char tmp;

	while (i < n)
	{
		i++;
	}

	i = n - 1;
	while (i = b)
	{
		tmp = a[b];
		a[b] = a[i];
		a[i] = tmp;
		i--;
		b++;
	}
}
