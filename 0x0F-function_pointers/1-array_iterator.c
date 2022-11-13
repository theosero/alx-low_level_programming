#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - peforms an action on all items in an array
 * @array: passed array
 * @action: action to be done on all array items
 * @size: size of array
 *
 * Return: pointer to action
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && actin)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
