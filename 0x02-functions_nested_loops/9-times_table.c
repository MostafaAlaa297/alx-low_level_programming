#include "main.h"

/**
 * times_table - Prints the 9 times table,
 * starting with 0
 *
 * void
 */
void times_table(void)
{
	/* Local vars to store numbers */
	int i, j, product;

	/* Nested for loops to print 9 times table */
	for (i = 0; i <= 9; i++) {
		for (j = 0; j <= 9; j++) {
			/* Calculate product */
			product = i * j;

			/* Prints table nums */
			if (product < 10) {
				if (j != 0) {
					_putchar(' ');
				}
				_putchar(product + '0');
			} else {
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}

			/* Prints comma to seperate nums */
			if (j < 9) {
				_putchar(',');

				/* Prints space after comma */
				_putchar(' ');
				if (product < 10) {
					_putchar(' '); /* extra space for single digit numbers */
				}
			}
		}

		/* Prints newline */
		_putchar('\n');
	}
}

