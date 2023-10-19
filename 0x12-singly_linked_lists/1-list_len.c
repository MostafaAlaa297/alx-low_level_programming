#include "lists.h"
#include <stdio.h>

/**
 * list_len - Prints the number of elements in a linked list_t list
 * @h: A pointer to the head of the list
 * 
 * Return: The number of elements
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
