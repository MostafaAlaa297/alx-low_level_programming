#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes each 
 * and returns a pointer to the allocated memory
 * @nmemb: Number of array elements
 * @size: Number of bytes of the array
 *
 * Return: A pointer to the allocated memory,
 * if nmemb or size is 0, then _calloc returns NULL,
 * if malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = malloc(nmemb * size);
	
	if (nmemb == 0 || size == 0)
		return NULL;
	if (ptr == NULL)
		return NULL;
	else
		return ptr;	
}
