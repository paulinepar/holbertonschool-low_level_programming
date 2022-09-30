#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of char: %zu bytes\n", sizeof(char));
printf("Size of an int: %zu bytes\n", sizeof(int));
printf("Size of a long int: %zu bytes\n", sizeof(int));
printf("Size of a long long int: %ld bytes\n", sizeof(long long int));
printf("Size of a float: %zu bytes\n", sizeof(float));
return (0);
}