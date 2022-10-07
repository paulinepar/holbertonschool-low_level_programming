#include "main.h"

/**
 * _isupper - check character
 * @c: check character
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
