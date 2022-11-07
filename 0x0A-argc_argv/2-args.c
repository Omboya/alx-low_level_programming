#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments received
 * @argc: argument count
 * @argv: argument vecto
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int count = 0;

	for (argc > 0;
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
