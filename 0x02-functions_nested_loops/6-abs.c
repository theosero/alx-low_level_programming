#include "main.h"

/**
 * _abs - return absolute value of a number
 * @c: passed paremeter
 *
 * Return: absolute value of an integer
 */

int _abs(int c)
{
	if (c < 0)
	{
		c = c * -1;
	}
	return (c);
}
