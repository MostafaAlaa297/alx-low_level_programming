#include "main.h"

/**
 * times_table - Prints the 9 times table,
 * starting with 0
 *
 * void
 */
void times_table(void)
{
	/* Local vars to store numbers*/
	int i, j;

	/* Nested for loops to print 9 times table */
	for (i = 0; i <= 9; i++)
	{
		for(j = 0; j <= 9; j++)
		{
			_putchar((i * j) + '0'); /* Prints table nums */
			if(j < 9)
			{
				_putchar(','); /* Prints comma to seperate nums */
				_putchar(' '); /* Prints space after comma */
			}
		}
		_putchar('\n'); /* Prints newline */
	}
}
