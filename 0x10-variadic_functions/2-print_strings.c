#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print strings
 * @separator: separates stringd
 * @n: number of passed strings
 * Return: strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *pointer;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		pointer = va_arg(list, char *);
		if (pointer == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", pointer);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
