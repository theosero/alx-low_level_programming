#include "lists.h"

/**
 * print_list - prints all elements in a list
 * @h: pointer to the list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h != null)
	{
		if (h -> str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%s\n",h -> str);
		}
		h = h -> next;
		i++
	}
	return (i);
}
