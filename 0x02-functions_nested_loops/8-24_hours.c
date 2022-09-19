#include "main.h"

/**
 * jack_bauer - entry point
 *
 * Return: hour in 24 hour format
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar(i);
			_putchar(':');
			_putchar(j);
			_putchar('\n');
		}
	}
}
