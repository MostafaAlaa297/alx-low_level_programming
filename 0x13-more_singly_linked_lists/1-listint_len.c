#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Prints the number of elements of the listint_t
 * @h: A pointer to the first node of the list
 *
 * Return: Number of list elements
 */

size_t listint_len(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		h = h->next;

		counter++;
	}

	return (counter);
}
