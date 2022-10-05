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

	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		array = malloc(sizeof(char)*size);
		if (array == '\0')
		{
			return ('\0');
		}
		else
		{
			while (i < size)
			{
				array[i] = c;
				i++;
			}
		}
		return (array);
	}
}
