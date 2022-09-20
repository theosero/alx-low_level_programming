#include "main.h"

/**
 * _strlen - entry point
 * @s: string parameter
 *
 * Return: int
 */

int _strlen(char *s)
{
	int i = 1, sum = 0;
	char j = s[0];

	while (j != '\0')
	{
		sum++;
		j = s[i++];
	}
	return (sum);
}

