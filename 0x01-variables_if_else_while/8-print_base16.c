#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;
	char alphabet;

	for (number = 48 ; number <= 57 ; number++)
		putchar(number);
	for (alphabet = 97 ; alphabet <= 102 ; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
