#include "main.h"

/**
 * _strchr - locates character
 * @c: character
 * @s: string
 * Return: If c is found - a pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
}
