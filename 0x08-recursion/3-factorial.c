#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: input number
 * REturn: factorial number
 */
int factorial(int n)
{
	int factorial = n;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * int(n - 1));
}