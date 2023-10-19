#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all elements of a list_t
 * @h: A pointer to the head of the list
 *
 * Return: The number of nodes
 *
 */

size_t print_list(const list_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		counter++;
	}

	return (counter);
}
