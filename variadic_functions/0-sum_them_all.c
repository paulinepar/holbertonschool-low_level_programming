#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return the sum of all
 * @n: First member
 *
 * Description: Longer description
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int a = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		a = a + va_arg(args, unsigned int);
	}
	va_end(args);
	return (a);
}
