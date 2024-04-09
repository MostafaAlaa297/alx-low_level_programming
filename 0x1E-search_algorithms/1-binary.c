#include <stddef.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in an array
 * using binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in @array
 * @value: The value to search for
 * Return: The value found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t i;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
        	size_t mid = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
