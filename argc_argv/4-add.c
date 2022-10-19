#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - argc argv
 * @argc: char
 * @argv: char
 * Return: (i)
 */

int main(int argc, char *argv[])
{

	int n, i;
	int res = 0;
	int a;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (n = 1; n < argc; n++)
	{
		for (i = 0; argv[n][i] != '\0'; i++)
		{
			if (argv[n][i] >= 48 && argv[n][i] <= 57)
			{
				continue;
			}
			else
			{
				printf("Error\n");
					return (1);
			}
		}
	}
	for (n = 1; n < argc; n++)
	{
		a = atoi(argv[n]);
		res = res + a;
	}
	printf("%d\n", res);
	return (0);
}
