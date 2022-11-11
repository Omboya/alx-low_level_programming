#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory
 * @b: memeory to be allocated
 *
 * Return: pointer to the allocated memory
 * or termination if thers an error
 */
void *malloc_checked(unsigned int b);
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
