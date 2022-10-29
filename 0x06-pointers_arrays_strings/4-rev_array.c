#include "main.h"

/**
 * reverse_array -- revesers interger content
 * @n: element number
 * Return: nohing
 */

void reverse_array(int *a, int n)
{
	int *p, i, k, aux;

	p = a
	for (i = 0; i < n; i++)
		p++;
	for (k = 0; k <= i / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
}

