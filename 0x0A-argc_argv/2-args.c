#include "main.h"
#include <stdlib.h>

/**
 * args - Print all the arguments it receives
 * @argc: The number of arguments
 * @argv: An array of the arguments
 *
 * Return: 0 on success, and 1 otherwise
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		char *temp = *argv;

		while (*temp)
		{
			_putchar(*temp);
			temp++;
		}
		_putchar('\n');
		argv++;
	}

	exit(EXIT_SUCCESS);
}
