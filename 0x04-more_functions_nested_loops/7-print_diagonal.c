#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: The number of times the character _ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	/* Local variable */
	int i, j;

	/* Conditional to check for 0 and negative */
	if (n <= 0)
        {
		_putchar('\n'); /* Prints a newline */
		return;
        }

	/* Nested for loops to print diagonal shape */
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
