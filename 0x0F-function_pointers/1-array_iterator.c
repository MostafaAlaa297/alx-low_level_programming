#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Executes a function given as a parameter
 * on each array element
 * @array: The array to execute the function on its elements
 * @size: The size of the array
 * @action: The function to be executed on each array element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
