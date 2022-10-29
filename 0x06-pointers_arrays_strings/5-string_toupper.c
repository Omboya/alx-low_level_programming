#include "main.h"
#include <string.h>

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: string parametre
 * Return:Pointer to  string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])

	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;

		i++;
	}
	return (s);
}
