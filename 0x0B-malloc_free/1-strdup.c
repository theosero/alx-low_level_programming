#include "main.h"

/**
 * _strdup - entry point
 * @str: passed string
 * Return: always 0
 */

char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	ptr = malloc(sizeof(char)  * i + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (str[j] != '\0')
	{
		ptr[j] = str[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
