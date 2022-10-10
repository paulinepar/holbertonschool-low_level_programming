#include "main.h"

/**
 * int print_last_digit - print the last digit of numbers
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
 
