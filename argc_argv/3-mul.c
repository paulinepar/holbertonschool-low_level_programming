#include <stdio.h>
#include <stdlib.h>

/**
 * main - argc argv
 * @argc: char
 * @argv: char
 * Return: (i)
 */

int main(int argc, char *argv[])
{
	int n, i;
	int res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n = atoi(argv[1]);
		i = atoi(argv[2]);
		res = n * i;
		printf("%d\n", res);
	}
	return (0);
}
