#include "main.h"

/**
 * _strcat - entry point
 * @dest: passed parameter
 * @src: passed parameter
 * Return: return 
 */

char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] += src[j];
		i++;
		j++;
	}
	dest += '\0';
	retur (dest);
}
