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

	while (a[i] != n)
	{
		i++;
	}

	for (i = n - 1; i >= b; i--)
	{
		       tmp = a[b];
		       a[b] = a[i];
		       a[i] = tmp;
		       b++;
	       }
}
