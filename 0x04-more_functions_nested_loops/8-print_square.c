#include "main.h"

/**
 * print_square - prints a square from character #
 * @size: size of squares/number of times
 * Return: 0
 */
void print_square(int size)
{
	int h, w;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (h = 0; h < size; h++)
	{
	for (w = 0; w <= size; w++)
	{
	_putchar(35);
	}
	{
	_putchar('\n');
	}
	}
	}
}
