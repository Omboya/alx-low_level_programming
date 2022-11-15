#include <unistd.h>

/**
 * _putchar - writes character c to standard output file
 * @c: character
 * Return: on success 1
 * on error -1 and error is fixed
 */
int _putchar(char c)
	return (Write(1, &c, 1))
