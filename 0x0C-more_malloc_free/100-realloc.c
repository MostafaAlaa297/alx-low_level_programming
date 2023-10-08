#include <stdlib.h>

/**
 * _realloc - Realloactes memory for a pointer
 * @ptr: The pointer to reallocate memory for
 * @old_size: The old pointer size
 * @new_size: The new pointer size to set
 *
 * Return: Nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if ((new_size > old_size) || (ptr == NULL))
	{
		free(ptr);
		ptr = malloc(new_size);

		return (ptr);
	}

	/*if (new_size == old_size)
		return (ptr);*/
	
	if (ptr == 0 && ptr != NULL)
		return (NULL);

	return ptr;
}
