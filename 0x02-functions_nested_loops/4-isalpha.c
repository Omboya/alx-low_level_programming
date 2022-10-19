#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: chanracter to be checked
 *
 * Return: 1 if a letter, 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
