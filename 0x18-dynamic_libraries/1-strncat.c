#include "main.h"
#include <string.h>

/**
 * _strncat - function joining two strings
 * @dest: first number
 * @src: second number
 * @n: third number
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);

}
