#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - entry point
 * @b: amount of bytes to be allocated
 * Return: return a pointer if okay, 98 if error
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
