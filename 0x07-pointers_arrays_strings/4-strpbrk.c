#include "main.h"

/**
 * _strpbrk - locates string occurance
 * @s: string
 * @accept: bytes in string
 * Return: bytes
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
	for (i = 0; accept[i]; i++)
	{
		if (*s == accept[index])
			return (s);
	}
	s++;
	}
	return ('\0');
}
