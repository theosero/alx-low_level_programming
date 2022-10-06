#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: no of parameters
 * @argv: passed parameters
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
