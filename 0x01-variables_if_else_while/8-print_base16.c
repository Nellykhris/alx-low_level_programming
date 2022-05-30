#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: 0 always [Success]
 */
int main(void)
{
	char x;

	for (x = '0'; x <= '9'; ++x)
		putchar(x);
	for (x = 'a'; x <= 'f'; ++x)
		putchar(x);

	putchar('\n');

	return (0);
}
