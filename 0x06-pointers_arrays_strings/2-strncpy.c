#include "main.h"
#include <string.h>

/**
 * _strncpy - copies string
 * @dest: copy to
 * @src: copy froim
 * @n:number of characters
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);

}
