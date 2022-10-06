#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: no of parameters
 * @argv: parameters
 * Return: always zero
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
