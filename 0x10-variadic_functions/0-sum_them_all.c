#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all passed parameters
 * @n: passed parameters, ints
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
