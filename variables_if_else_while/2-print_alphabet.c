#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
  char ch;

srand(time(0));
n = rand() - RAND_MAX / 2;
for (ch = 'a'; ch <= 'z'; ch++)
putchar (ch);
putchar ('\n');
return (0);
}
