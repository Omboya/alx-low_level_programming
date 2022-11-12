#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: memeory to be allocated
 *
 * Return: pointer to the allocated memory
 * if malloc fails the values returns to 98
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
