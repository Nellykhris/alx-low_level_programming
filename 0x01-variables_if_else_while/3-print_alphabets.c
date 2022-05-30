#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 always [Success]
 */
int main(void)
{
	char i[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int a;

	for (a = 0; a < 52; a++)
	putchar(i[a]);
	putchar('\n');
	return (0);
}
