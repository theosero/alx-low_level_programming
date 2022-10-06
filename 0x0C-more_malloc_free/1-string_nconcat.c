#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: no of chars of s2 to concatenate
 * Return: pointer to memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[j] != '\0')
		j++;
	while (s2[k] != '\0')
		k++;

	if (k > n)
		k = n;

	str = malloc(j + n + 1);
	if (str == NULL)
		return (str);
	for (i = 0; i < j; i++)
		str[i] = s1[i];
	for (i = 0; i < n; i++)
		str[j + i] = s2[i];
	str[j + i] = '\0';
	return (str);
}
