#include <unistd.h>

/**
 * _putchar - Writes the character c to standard output
 * @c: The character to  be printed to outpu
 *
 * Return: On success 1 is returned. and error is also returned
 * On error, -1 is returned, and error is therefore returned
 */

int _putchar(char c)
{
return (write(1 , &c, 1));
}
