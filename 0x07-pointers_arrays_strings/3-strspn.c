#include "main.h"

/**
 * _strspn- get the length of a prefix substring
 * @s: initial segment
 * @accept: accepted bytes.
 * Return: accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)

	for (i = 0; accept[i]; i++)
	{
		if (*s == accept[i])bool

		{
			bytes++;
			break;
		}
		else if (accept[i + 1] == '\0')
			return (bytes);
	}
	s++;
	return (bytes);
}
