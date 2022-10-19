<<<<<<< HEAD
include "main.h"

/**
* prints_alphabet- prints ten times
*
*/
void print_alphabet_x10(void) 
{
	int 10;
	char la;
	for (ten = 0; ten < 9; ten++)
	{
		for (la = 'a'; la < 'z'; la++)
			_putchar(la);
		_putchar('\n')
	}
}
=======
#include "main.h"

/**
* main- prints alphabets x10
*
*/
void print_alphabet_x10(void)
{
  int 10;
    char la;
  
  for (ten = 0; ten < 9; ten++)
  {
    for (la = 'a'; la <= 'z'; la++)
      _putchar(la);
    _putchar('\n');
   }
}
    
>>>>>>> c5b9100b7413b41b6cfad4899320551df630a488
