#include "main.h"

/**
 * print_line - draws a straight line using character _.
 * @n: The number of _ characters to be printed out
 * Return: empty
 */

void print_line(int n)
{
	int line;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (line = 0; line < n; line++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}

}
