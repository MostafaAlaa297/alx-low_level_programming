#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < sizeof(nums) - 1; i++)
	{
		putchar(nums[i] + '0');
		putchar(',');
		putchar(' ');
		putchar(nums[i + 1] + '0');
	}

	putchar('\n');

	return (0);
}
