#include "main.h"

/**
 * _islower checks if the character is lowercase
 * @c: is the character to check
 * return 1 if the character is lowercase otherwise return 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
