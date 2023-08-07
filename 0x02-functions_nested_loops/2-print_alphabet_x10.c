#include "main.h"

/**
 * print_alphabet_x10 makes an alphabet appear x10 times
 * return: 0
 */

void print_alphabet_x10(void)
{
	char c;
	int a;

	a = 0;

	while (a < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		a++;
	}

}
