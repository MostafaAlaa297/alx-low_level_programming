#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer to start printing from
 *
 * Return: void
 */
void print_to_98(int n)
{
	/* Local Var */
	int i;

	/* For loop to print natural nums */
	for (i = n; i <= 98; i++)
	{
		_putchar(i + '0'); /* Prints nums */
		if (i != 98)
		{
			_putchar(','); /* Seperate nums with commas */
			_putchar(' '); /* Add space after each comma */
		}
	}
	_putchar('\n'); /* Prints the newline */
}
