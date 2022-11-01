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

	for (index = 0; accept[index]; index++)
	{
		if (*s == accept[index])bool

		{
			bytes++;
			break;
		}
		else if (accept[index + 1] == '\0')
			return (bytes);
	}
}
