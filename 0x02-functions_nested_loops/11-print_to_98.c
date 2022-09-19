#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: parameter to print
 *
 * Return: a number serie.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
}
