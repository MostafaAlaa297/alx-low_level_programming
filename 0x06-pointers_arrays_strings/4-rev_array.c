#include "main.h"

/**
 * reverse_array - Reverse array content
 * @a: array of intgrs
 * @n: number of array elemants
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
