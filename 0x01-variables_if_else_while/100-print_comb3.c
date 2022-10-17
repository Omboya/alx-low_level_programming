#include <stdio.h>

/**
 *main-program entry point.
 *Return:0 success, non zero fail
 */
int main(void)
{
		int c, i;

		for (c = '0'; c <= '9'; c++)
		{
			for (i = '0'; i <= '9'; i++)
			{
				putchar(c);
				putchar(i);
				if (c != '9' || (c == '9' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
																																			}
																	}
									}

				putchar('\n');

					return (0);
}
