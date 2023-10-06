#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - Alocates memory using malloc and returns
 * a pointer to the allocated memory
 * @b: The variable to allocate memory for
 *
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *s = malloc(b);

	if (s == NULL)
		exit(98);

	return s;
}
