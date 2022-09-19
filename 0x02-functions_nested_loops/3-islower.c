#include "main.h"

/**
 * _islower - entry point
 * @c: the passed parameter
 *
 * Return: always zero
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
