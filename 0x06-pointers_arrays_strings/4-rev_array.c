#include "main.h"

/**
 * reverse_array - reverse array elements
 * @a: pointer to array
 * @n: no of elements in array
 * Return: always 0
 */

void reverse_array(int *a, int n)
{
	int i, j;

	i = 0;
	n--;
	while (i < n)
	{
		j  = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
		j--;
	}
}
