#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Return: always zero
 */

void print_alphabet_x10(void)
{
	int counter = 0;

	while (i < 10)
	{
		char i = 'a';
		
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		counter++;
		_putchar('\n');
		return;
	}
}
