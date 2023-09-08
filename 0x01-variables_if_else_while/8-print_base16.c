#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hexadecimals[] = {
		'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
		'a', 'b', 'c', 'd', 'e', 'f'
	};

	unsigned int i;

	for (i = 0; i < sizeof(hexadecimals); i++)
	{
		putchar(hexadecimals[i]);
	}

	putchar('\n');

	return (0);
}
