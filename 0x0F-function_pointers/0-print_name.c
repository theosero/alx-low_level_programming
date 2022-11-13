#include "function_pointers.h"

/**
 * print_name - function to print a name
 * @name: name to beprinted
 * @f: pointer to function
 *
 * Return: return a pointer to a funciton to print a name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name)
	{
		(*f)(name);
	}
}
