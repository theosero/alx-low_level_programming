#include "main.h"

/**
 * print_last_digit - entry point
 * n: returned parameter
 *
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	if (n > 0)
	{
		n = n % 10;
		_putchar('0' + n);
	}
	else
	{
		n = (n % 10) * -1;
		_putchar('0' + n);
	}
	return (n);
}
