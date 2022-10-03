#include "main.h"

/**
 * string_toupper - entry point
 * @s: string
 * Return: always zero
 */

char *string_toupper(char *)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}

