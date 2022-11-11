#include <unistd.h>
/**
 * _putchar - writes character c to stadard output file
 * @c: character
 * Return: on sucess 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
