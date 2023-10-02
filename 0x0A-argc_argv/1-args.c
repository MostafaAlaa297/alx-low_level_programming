#include "main.h"
#include <stdlib.h>

/**
 * args - Prints the number of arguments in the commandline
 * @arc: The number of arguments in the commandline
 * @argv: An array of the commandline arguments
 *
 * Return: 0 on success and 1 otherwise
 */
int main(int argc, char* argv[])
{
	(void)argv;
	_putchar(argc + '0');
	_putchar('\n');

	exit(EXIT_SUCCESS);
}
