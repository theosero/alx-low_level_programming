#include "main.h"

/**
 * _strncat - entry point
 * @dest: passed parameter
 * @src: passed parameter
 * @n: passsed parameter
 * Return: return
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] += src[j];
		i++;
		j++;
	}
	dest += '\0';
	return (dest);
}
