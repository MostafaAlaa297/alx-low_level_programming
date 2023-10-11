#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - Search for an integer
 * @array: The array to search
 * @size: The number of elements in the array
 * @cmp: The function to compare values
 *
 * Return: The index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))

			return (i);
		}
	}
	return (-1);
}
