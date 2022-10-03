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
char i

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("\n\nLower case characters:\n");
for (i = 'a'; i <= 'z'; i++)
printf("%c", i);
return (0);
}
