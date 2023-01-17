#include "main.h"

/**
 * _memcpy - copies bytes from memory
 * @n: bytes
 * @src: memory area source
 * @dest: destination for memory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)

	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
