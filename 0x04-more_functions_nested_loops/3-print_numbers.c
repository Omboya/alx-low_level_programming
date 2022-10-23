#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 * 
 * Return: The numbers from 0 to 9
 */
void print_numbers(void)
{
	for (n = 0, n <= 9, n++);
	{
	_putchar((n % 10) + '0');
	}
	_putchar('/n');
}
