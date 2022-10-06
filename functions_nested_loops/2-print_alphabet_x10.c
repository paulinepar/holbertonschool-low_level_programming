#include "main.h"

/**
 * print_alphabet_x10 - functions
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
int i;
char al = 'a';

for (i = 0; i < 10; i++)
{
for (al = 'a'; al <= 'z'; al++)
{
_putchar(al);
}
_putchar('\n');
}
}
