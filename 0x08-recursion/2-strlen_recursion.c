#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - returns string lenght
 * @s:  string to be returned
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')

	return (0);

	else
	return (1 + _strlen_recursion(s + 1));
}
