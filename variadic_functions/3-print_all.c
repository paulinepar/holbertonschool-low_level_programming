#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - print anything
 * @char: pointer
 * Return: result
 */

void print_all(const char * const format, ...)
{
	va_list args;

	va_start(arg
