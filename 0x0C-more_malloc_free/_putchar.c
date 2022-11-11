#include "unistd.h"

/**
 * _putchar - Prints chracter c to standard output file
 * @c: character to be printed
 *
 * Return: on success 1
 * on error -1 is returned and error set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
