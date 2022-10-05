#include "main.h"

/**
 * create_array - entry point
 * @size: size of int
 * @c: char
 * Return: alwayz 0
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
