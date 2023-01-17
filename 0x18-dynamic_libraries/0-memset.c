#include "main.h"

/**
 * _memset - fills in first memory byte
 * @n: bytes to be filled
 * @s: memory area
 * @b: constant byte
 * Return: destination
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
