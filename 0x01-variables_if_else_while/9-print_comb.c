#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 9)
			break;

		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}

	return (0);
}
