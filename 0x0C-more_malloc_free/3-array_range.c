#include <stdlib.h>
/**
 * array_range - Create an array of integers
 * @min: The minimum of values
 * @mac: The maximum value
 * 
 * Return: The pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr, i, length;

	if (min > max)
		return NULL;

	length = (max - min) + 1;
       	
	ptr= malloc(sizeof(int) * length);

	if (ptr == NULL)
		return NULL;

	for (i = 0; i < length; i++, min++)
		ptr[i] = min;

	return (ptr);
}
