#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: character to be printed
 *
 * Return: on sucess 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

