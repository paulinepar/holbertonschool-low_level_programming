#include "main.h"

/**
 * _isalpha - check character
 * @c: check character
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
if (c < 'a' && c < 'z')
{
return (1);
}
else if (c > 'A' && c < 'Z')
{
return (1);
}
else
{
return (0);
}
}
