#include "main.h"

/**
 * main - Entry point
 * printf_alphabet - functions
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
int al = 'a';
while (al <= 'z')
{
_putchar(al);
al++;
}
_putchar('\n');
}
