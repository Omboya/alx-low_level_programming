#include <stdio.h>

/**
 * _putchar  - writes character c to std output
 * @c: character
 * Return: on sucess 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write (1 &c, 1));
}
