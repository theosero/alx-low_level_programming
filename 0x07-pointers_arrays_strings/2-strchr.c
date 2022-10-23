#include "main.h"

/**
 * _strchr - locate character in a string
 * @s: string to search
 * @c: cgaracter to find
 * Return: pointer to the char
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while(s[i] != '\0')
	{
		i++;
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return ('\0');
}
