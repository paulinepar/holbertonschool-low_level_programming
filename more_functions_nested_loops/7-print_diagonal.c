#include "main.h"

/**
 * print_diagonal - print lines
 * @n: numbers
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
int a;

if (n <= 0)
_putchar ('\n');
for (a = 0; a < n; a++)
{
_putchar ('\\');
_putchar ('\n');
}
}
