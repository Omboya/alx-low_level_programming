#include "main.h"

/**
* prints_alphabet_x10 - prints ten times
* 
* Return: void
*/
void print_alphabet_x10(void)
{
	char j,b;
	for (b = 0; b < 10; b++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
