#include "main.h"

/**
 * _strlen - entry point
 * @s: string parameter
 */

int _strlen(char *s)
{
	int i = s[0];
	int sum =0;

	while(i != '\0')
	{
		sum++;
		i = sum;
	}
	return (sum);
}

