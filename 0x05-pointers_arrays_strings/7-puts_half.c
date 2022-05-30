#include "main.h"
#include "string.h"
#include <stdio.h>

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int i = 0, l = 0, n;

	while (str[i++])
	l++;
	if ((l % 2) == 0)
	n = l / 2;
	else
	n = (l - 1) / 2;
	n = (l + 1) / 2;

	for (i = n; i < l; i++)
	putchar(str[i]);
	putchar('\n');
}
