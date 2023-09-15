#include <stdio.h>
/**
 * fizz_buzz - Prints the numbers from 1 to 100, but for multiples of 3 it
 * prints Fizz instead of the number and for multiples of 5 it prints Buzz.
 * For numbers which are multiples of both 3 and 5, it prints FizzBuzz.
 *
 * Return: void.
 */

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
}
