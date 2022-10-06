#include <stdlib.h>
#include "main.h"

/**
 * array_range - create an array if ints
 * @min: minimum value
 * @max: max value
 * Return: pointer to created array
 */

int *array_range(int min, int max)
{
	int i, j;
	int *arr;

	if (min > max)
		return (NULL);

	j = max - min + 1;
	arr = malloc(sizeof(int) * j);

	if (arr = NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		arr[i] = min++;
	return (arr);
}
