#include "main.h"

/**
* print_alphabet - Prints alphabet in lower case
*
* Return: Always 0
*
*/
int print_alphabet(void)
{
	char la;
	
	for (la = 'a'; la <= 'z'; la++)
	{
		_putchar (la);
	}
	_putchar('\n');
}
