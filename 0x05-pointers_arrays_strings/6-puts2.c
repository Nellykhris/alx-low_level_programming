#include "main.h"
#include "string.h"
#include <stdio.h>

/**
 *puts2 - Prints one char out of two of a string
 *@str: The string containing characters
 *Return: null
 */
void puts2(char *str)
{
	int i = 0, l = 0;

	while (str[i++])
	l++;

	for (i = 0; i < l; i += 2)
	putchar(str[i]);

	putchar('\n');
}