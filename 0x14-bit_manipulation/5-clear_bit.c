#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: The num to search
 * @index: The index to replace at
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int bitmask = ~(1 << index);

	*n = *n & bitmask;
}
	
