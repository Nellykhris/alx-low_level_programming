#include "main.h"

/**
 * print_numbers - Prints the numbers 0 - 9
 *
 * Return: 0 always [Success/correct]
 */
void print_numbers(void)
{
	int i;

	i = 0;

	for (i = 0; i < 10; i++)

	_putchar(i + '0');
	_putchar ('\n');
}
