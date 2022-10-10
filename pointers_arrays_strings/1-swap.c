#include "main.h"

/**
 * swap_int - swap the value
 * @a: int
 * @b: int2
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int bl;

	bl = *a;
	*a = *b;
	*b = bl;
}
