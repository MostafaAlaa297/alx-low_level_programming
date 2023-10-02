#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point for multiplying 2 nums
 * @argc: The number of arguments
 * @argv: An array of the arguments
 *
 * Return: 0 on success and 1 otherwise
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	int mul = num1 * num2;

	_putchar(mul + '0');
	_putchar('\n');

	exit(EXIT_SUCCESS);
}
