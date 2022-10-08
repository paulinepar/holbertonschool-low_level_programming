#include "main.h"

/**
 * more_numbers - print numbers
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
int n;
int i;

for (i = 0; i < 10; i++)
{
for (n = 0; n <= 14; n++)
{
if (n > 9)
_putchar ('0' + n / 10);
_putchar ('0' + n % 10);
}
_putchar ('\n');
}
}
