#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - Prints a struct dog
 * @d: The struct of type dog to print
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Name: %.6f\n", d->age);
	printf("Name: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
