#include "main.h"

/**
 * cap_string - entry point
 * @s: passed string
 * Return: capitalize al words
 */

char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		switch (s[i])
		{
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
		i++;
	}
	return (s);
}
