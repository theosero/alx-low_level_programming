#include "main.h"

/**
 * print_rev - entry point
 *
 * @s: passed parameter
 */

void print_rev(char *s)
{
	int count = 0;

	while (s[count] != 0)
	{
		count++;
	}
	while (count > 0)
	{
		count--;
		_putchar(s[count]);
	}
	_putchar('\n');
}
