#include "main.h"

/**
 * print_alphabet_x10 - functions
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
int i;
int al = 'a';
while (al <= 'z')
{
_putchar(al);
al++;
for (i = 0; i <= 10; i++)
putchar(i);
}
_putchar('\n');
}
