#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point for multiplying 2 nums
 * @argc: The number of arguments
 * @argv: An array of the arguments
 *
 * Return: 0 on success and 1 otherwise
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);

		int mul = num1 * num2;
		
		int i = 0;
		int j;
		char buffer[20];

		if (mul < 0)
		{
			_putchar('-');
			mul = - mul;
		}
		
		if (mul == 0)
			_putchar('0');
		while (mul > 0)
		{
			buffer[i++] = (mul % 10) + '0';
			mul /= 10;
		}
		
		for (j = i - 1; j >= 0; j--)
			_putchar(buffer[j]);

		_putchar('\n');

		exit(EXIT_SUCCESS);
	}
	else 
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');

		exit(EXIT_FAILURE);
	}
}
