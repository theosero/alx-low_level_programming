#include "main.c"

/**
 * _puts - entry point
 * @str: passed parameter
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++
	}
	_putchar('\n');
}
		
