#include "main.h"

/**
 * positive_or_negative - Determine if the number is positive, negative or zero
 * @i: the number to be cheked.
 *
 * Return: 0 always on success.
 *
 */

void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d, is %s\n", i, "positive");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
	return (0);
}
