#include "main.h"

/**
 * _islower checks for lowercase character
 * @c: is the character to check
 * return 1 if lowercase
 * otherwise return 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
