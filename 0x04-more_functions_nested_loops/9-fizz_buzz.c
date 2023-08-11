#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers fron 1 to 100 followed by a new line.
 * For multiples of 3 it prints Fizz instead of the number.
 * For multiples of 5 it prints Buzz instead of the number.
 *
 * Return: 0 always on success.
 *
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{

		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (i % 3 != 0 && i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (i == 1)
		{
			printf("%d", i);
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
