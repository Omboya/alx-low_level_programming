#include <unistd.h>

/**
 * _putchar - writes character c to standard output
 * @c: character to be writen
 *
 * Return: on sucess 1
 * on error -1 and error fixed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
