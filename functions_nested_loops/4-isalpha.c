#include "main.h"

/**
 * _isalpha - check character
 * @c: check character
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
int i;
if (c > 'a' && c < 'z')
{
 i = 1;
return (i);
}
else if (c > 'A' && c < 'Z')
{
i = 1;
return (i);
}
else
{
i = 0;
return (i);
}
}
