#include <stdio.h>

/**
 * main- writes scripts
 *
 * return always 0
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
double f;
long double g;	
	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a long int: %d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", sizeof(d));
	printf("Size of a float: %d byte(s)\n", sizeof(e));
	printf("Size of a double: %d bytes)\n", sizeof(f));
	printf("Size of a long double: %d byte(s)/n", sizeof(g));
	return (0);
}
