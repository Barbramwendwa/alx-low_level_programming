#include "main.h"

/**
 * print_most_numbers - print 0 to 9 ommiting 2 and 4.
 * Return: void.
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		while (c != '2' && c != '4')
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
