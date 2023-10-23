#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of listint_t
 * @h: A pointer to the first node of the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		counter++;
	}

	return (counter);
}
