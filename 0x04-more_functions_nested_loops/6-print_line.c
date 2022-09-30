#include "main.h"

/**
 * print_line - entry point
 *
 * Return: always 0
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
