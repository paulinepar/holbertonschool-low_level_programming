#include "main.h"

/**
 * print_last_digit - entry point
 * @n: check character
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
int a;

a = n % 10;

if (a < 0)
{
a = -a;
}
_putchar('0' + a);
return (a);
}
