#include "main.h"

/**
 * print_square - prints a square from character
 * @size: size of squares
 * Return: 0
 */
void print_square(int size)
{
	int h, w;

	for (h = 0; h < size; h++)
	{
		for (w = 0; w < size; w++)
			_putchar(35);
		if (h != size - 1)
			_putchar('\n')
	}
	_putchar('\n');
}
