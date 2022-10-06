#include "main.h"

/**
 * int _islower(int c); - functions
 * @c : check character
 * Return: Always 0 (Success)
 */

int _islower(int c);
{
if (c > 'a' && c < 'z')
return (1);
else
return (0);
}
