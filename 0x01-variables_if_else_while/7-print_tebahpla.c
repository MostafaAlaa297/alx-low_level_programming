#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
			    'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
			    's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int i;

	for (i = sizeof(alphabets) - 1; i >= 0; i--)
	{
		putchar(alphabets[i]);
	}

	putchar('\n');

	return (0);
}
