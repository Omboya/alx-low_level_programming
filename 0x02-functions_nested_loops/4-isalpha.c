#include "main.h"

/**
 * main - _isalpha checks for alphabets
 * @c: chanracter to be checked
 *
 * Return: 1 if a letter, 0 if not
 */
int _isalpha(int c)
<<<<<<< HEAD
{
	if (c >= 'a'; &&c; c <= 'z') || 
			(c >= 'A'; &&c; c <= 'Z')
=======
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
>>>>>>> deb450ef4a46dc270fc015841b6b8acb7a0e9432
		return (1);
	}

	return (0);
}
