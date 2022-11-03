#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - returns string lenght
 * @s:  string to be returned
 */
int _strlen_recursion(char *s)
{
	int len = 0;
	if(*s)
	{
		len++;
		len+= _strlen_recursion(s + 1);
	}
}
