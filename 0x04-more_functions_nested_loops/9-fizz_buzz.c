#include <stdio.h>
#include "main.h"

/**
 *
 * fizz_buzz - Prints fizz for the multiples of 3 and buzz for 5 followed by a new line
 *
 * Return: void
 */

void fizz_buzz(void)
{
	/* Local variable */
	int i;

	/* For loop to check for 3 and 5 multiples */
	for (i = 1; i <= 100; i++)
	{
		/* Conditionals to check for 3 and 5 multiples cases */
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz "); /* Prints FizzBuzz when there are 3 and 5 multiples  */
		}
		else if (i % 3 == 0)
		{
			printf("Fizz "); /* Prints Fizz when there is a 3 multiple */
		}
		else if (i % 5 == 0)
		{
			printf("Buzz "); /* Prints Buzz when there is a 5 multiple */
		}
		else
		{
			_putchar(i + '0'); /* Prints the rest of the numbers */
		}
	}
	
	_putchar('\n'); /* Prints a newline */
}
