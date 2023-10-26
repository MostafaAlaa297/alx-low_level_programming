#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary num to an unsigne int
 * @b: The binry number to convert
 *
 * Return: converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		sum = sum  * 2 + (*b - '0');
		b++;
	}

	return (sum);
}
