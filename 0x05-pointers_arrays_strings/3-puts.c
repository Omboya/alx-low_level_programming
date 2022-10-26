#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: string to be printed
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_puts(*str);
	}
	_puts(*str '\n');
}
