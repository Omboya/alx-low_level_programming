#include <unistd.h>
#include "variadic_functions.h"

/**
 * _putchar - outputs char c to standard output
 * @c: character
 * Return: on sucees 1
 * on error -1 and error fixed accordingly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
