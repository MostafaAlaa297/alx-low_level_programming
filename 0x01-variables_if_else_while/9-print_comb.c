#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
		putchar(i + 1 + '0');
	}

	return (0);
}
