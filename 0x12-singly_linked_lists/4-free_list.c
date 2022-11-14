#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free list
 * @head: head pointer
 *
 * Return - always 0
 */

void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
