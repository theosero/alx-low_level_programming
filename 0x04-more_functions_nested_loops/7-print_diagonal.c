#include "main.h"


/**
 * print_diagonal - entry point
 *
 * Return: always zero
 */

void print_diagonal(int n)
{
	int i, j;

	if (n >0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < a; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
