#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 *@s1: string one
 *@s2: string two
 *@n: number of bytes to load on to s2
 *Return:poiter to newly allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; s[i] != '\0' ; i++)
		;
	return (i);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of s2
 *
 * Return: a pointer with the content of s1 followed by n byte of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int ls1, ls2, lsout, i;

	if (s1 == NULL)
	s1 = "";

					if (s2 == NULL)
								s2 = "";

						for (ls1 = 0; s1[ls1] != '\0'; ls1++)
									;

							for (ls2 = 0; s2[ls2] != '\0'; ls2++)
										;

								if (n > ls2)
											n = ls2;

									lsout = ls1 + n;

										sout = malloc(lsout + 1);

											if (sout == NULL)
														return (NULL);

												for (i = 0; i < lsout; i++)
															if (i < ls1)
																			sout[i] = s1[i];
														else
																		sout[i] = s2[i - ls1];

													sout[i] = '\0';

														return (sout);

