#include "main.h"

/**
 * _strncpy - copies string
 * @dest: copy to
 * @src: copy from
 * @n:number of characters
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] != '\0';
		a++;
	}

	return (dest);

}
