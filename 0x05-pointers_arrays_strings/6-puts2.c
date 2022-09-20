#include "main.h"

/**
 * puts2 - entry point
 *
 * @str: passed param
 */

void puts2(char *str)
{
	int i = 0;

	for (i = 0; *str; str++)
	{
		if (i++ % 2 == 0)
		{
			_putchar(*str);
		}
	}
	_putchar('\n');
}
