#include "lists.h"
#include <stdio.h>

/**
 * list_len - return number of elements in a list
 * @h: pointer to the list
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
