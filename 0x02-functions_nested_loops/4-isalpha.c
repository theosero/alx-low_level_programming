#include "main.h"

/**
 * _isalpha - entrypoint
 * @c: parameter passed
 *
 * Return: always zero
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
