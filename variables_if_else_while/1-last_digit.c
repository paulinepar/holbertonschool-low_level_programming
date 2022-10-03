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
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;
if (l > 5)
{
printf("last digit of %d is %d and is greater than 5\n", n, n % 10);
}
else if (l > 0)
printf("last digit of %d is %d and not 0\n", n, n % 10);
else if (l < 6)
{
printf("last digit of %d is %d and is less than 6\n", n, n % 10);
}
else
{
printf("last digit of %d is %d and is 0\n", n, n % 10);
}
return (0);
}
