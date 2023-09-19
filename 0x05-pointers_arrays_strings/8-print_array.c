#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line
 * @a: array to print from
 * @n: number of elements to print
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
