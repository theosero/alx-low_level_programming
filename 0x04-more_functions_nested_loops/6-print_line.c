#include "main.h"

/**
 * print_line - entry point
 *
 * Return: always 0
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(45);
		}
		_putchar('\n');
	}
}
