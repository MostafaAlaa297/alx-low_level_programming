#include "main.h"

/**
 * Print_number - Prints and integer
 * @n: The integer to be printed
 *
 * Return: The integer to be printed
 */
void print_number(int n)
{
	unsigned int num;
	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
	}
	else
		num = n;
	if (num / 1000)
		_putchar((num  / 1000) + '0');
	if (num / 100)
		_putchar((num / 100) + '0');
	if (num / 10)
		_putchar((num / 10) + '0');
	
	_putchar((num % 10) + '0');
}
