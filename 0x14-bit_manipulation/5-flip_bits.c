#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need
 * to flip to get from one number to another
 * @n: The first num
 * @m: The second num
 *
 * Return: The number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
