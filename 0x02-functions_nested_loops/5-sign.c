#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: the number of sign to be printed
 *
 * Return: 1 and prints + if n is greater than zero
 * 0 if the number is zero
 * -1 if number less than zero
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
