#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int i, j;

        for (i = 0; i < 10; i++)
        {
		putchar(i + '0');
		putchar(i + '0');
                for (j = 1; j < 10; j++)
                {
                        putchar(i + '0');
                        putchar(j + '0');
                        if (i == 9 && j == 9)
                                break;
                        putchar(',');
                        putchar(' ');
                }
        }

        putchar('\n');

        return (0);
}
