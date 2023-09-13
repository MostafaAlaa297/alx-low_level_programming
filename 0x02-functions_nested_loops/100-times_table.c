#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: integer to start printing from
 *
 * Return: void
 */

void print_times_table(int n)
{
	/* Local variables */
	int i, j;
	
	/* conditionals to print from 0 to 15 */
	if (n < 0 || n > 15)
	{
		return;
	}
	/* nested loops to print records and fields*/
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			_putchar((i * j) + '0');
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
