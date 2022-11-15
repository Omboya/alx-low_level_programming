#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints character name
 * @d: Pointer to be printer
 *
 * Return: on sucess 0
 */
void print_dog(struct dog *d)
{
	if (d)
		if (!d->name)
		{
			printf("Name: (nil)\n");
		}
		else
			printf("Name: %char\n, d->name");
	if (!d->age)
	{
		printf("age: %int\n, d->age");
	}
	else

		printf("owner: %char\n, d->owner");
	
