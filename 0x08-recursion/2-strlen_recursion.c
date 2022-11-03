#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - returns the lenght of the string
 * @s: string
 */
int _strlen_recursion(char *s);
{
	int len = 0;
	if (*s)
	{
		len++;
		len+ = strlen_recursion(s + 1);
	}
}

