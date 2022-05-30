#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Generates random valid passwords for the program 101-crackme
 *
 * Return: 0
 */
int main(void)
{
	int sum = 0;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
{

	c = rand() % 128;
	sum  += c;
	putchar(c);
}
	putchar(2772 - sum);
	return (0);
}
