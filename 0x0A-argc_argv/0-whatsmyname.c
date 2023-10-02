#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point prints the name of the program,
 * followed by a newline
 * @argc: The count of the commandline parameters
 * @argv: An array of the program nane and the  commandline parameters
 *
 * Return: 0 on success and 1 on failure
 */

int main(int argc, char *argv[])
{
	char *temp = *argv;
	while(argc --)
	{
		while(*temp)
		{
			_putchar(*temp);
			temp++;
		}
		argv++;
	}
	_putchar('\n');

	exit(EXIT_SUCCESS);
}
