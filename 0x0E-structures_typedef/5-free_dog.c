#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_dog - Frees dog structures
 * @d: The structure to free
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
}
