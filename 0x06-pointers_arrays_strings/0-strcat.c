#include "main.h"

/**
 * _strcat - joins two stings
 * @dest: copy to
 * @src: copy from
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}
	for  (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = scr[i];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
