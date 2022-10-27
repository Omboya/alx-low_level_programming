#include "main.h"

/**
 * _strncat - joins two strings
 * @dest: copy to
 * @src: copy from
 * @n: number of characters to be copies
 * Return: pointer to the string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < = n && scr[a] != '\0')
	{
		dest[a] = scr[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
