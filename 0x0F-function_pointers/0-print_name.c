#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints out the name as is
 * @name: Name or string to be printed
 * *f: pointeer to the function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}
