#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: Character to be printed
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
