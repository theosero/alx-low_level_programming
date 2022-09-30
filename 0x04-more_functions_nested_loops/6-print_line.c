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
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
}
