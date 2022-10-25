#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: String to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int a = 0;
	while (s[a] != '\0')
	{
		a++;
	}

	for (a = a - 1; c >= 0; c--)
	{
		_putchar(s[a]);
	}

	_putchar('\n');
}
