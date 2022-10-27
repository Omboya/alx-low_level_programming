#include "main.h"

/**
 * _strcat - joins two stings
 * @dest: copy to
 * @src: copy from
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (scr[b] != '\0')
	{
		dest[a] = scr[b];
		a++;
		b++;
	}
		dest[a] = '\0';
		return (dest);
}
