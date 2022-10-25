#include "main.h"

/**
 * puts_half - Print half a string
 * @str: a printer
 */
void puts_half(char *str)
{
	int i = 0, len = 0, n;
	while (str[i++])
		len++;

	if ((len % 2) == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}
	for (index = n; index < len; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
