#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 *@s1: string one
 *@s2: string two
 *@n: number of bytes to load on to s2
 *Return:poiter to newly allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);
{
	unsigned int i;

	for (i = 0 ; s[i] != '\0' ; i++)
		;
	return (i);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of s2
 *
 * Return: a pointer with the content of s1 followed by n byte of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1, length2, i, j;
	char *space;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	length1 = _strlen(s1);
	length2 = _strlen(s2);

	if (n >= length2)
	{
		n = length2;
	}

	space = malloc(sizeof(char) * (n + length1 + 1));

	if (space == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < length1 ; i++)
		space[i] = s1[i];
	for (j = 0 ; s2[j] != '\0' && j != n ; j++, i++)
		space[i] = s2[j];

	space[i] = '\0';
	return (space);
}