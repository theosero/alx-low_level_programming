#include "main.h"

/**
 * _isupper - entry point
 * @c: parameter passed
 *
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

