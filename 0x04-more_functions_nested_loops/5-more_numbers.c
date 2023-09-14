#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14 ten times
 * followed by a newline
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; i++)
		{
			_putchar(j + '0');
		}
	}
}

